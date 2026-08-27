// include for uT-kernel 3.0
#include <tk/tkernel.h>
#include <tm/tmonitor.h>
#include <tk/device.h>

// include for HAL Library
#include "stm32h5xx_hal.h"
// include for C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// include for my own library
#include "lib/commands.h"
#include "lib/sensors.h"
#include "lib/encoder.h"
#include "lib/uart_bridge.h"
#include "lib/diff_controller.h"
#include "lib/log_test.h"
#include "lib/sentinel_features.h"

volatile uint8_t logActive = 0;
volatile uint8_t logSilent = 0;
long logTargetL = 0, logTargetR = 0;

/* Fase 1 feedforward calib: STATIC_SWEEP ('s') state. Params are set by
 * runCommand() (commands.c) and consumed once by logTest's task loop -
 * see runStaticSweep() below. */
volatile uint8_t sweepActive = 0;
int sweepMotorId = 0, sweepDir = 1, sweepPwmStart = 0, sweepPwmStep = 1, sweepPwmEnd = 0, sweepHoldMs = 0;

/* IMU_DIAG ('k'): flag consumed by logTest task's loop (no new task), see diagIMU() in sensors.c. */
volatile uint8_t imuDiagActive = 0;

/* SENTINEL DATA_COLLECT ('d'): consumed INSIDE pidTask (see pidTask() below),
 * NOT logTest - a CSV row must be emitted per ACTUAL doPID() execution. */
volatile uint8_t dataCollectActive = 0;
int  dcPattern = 1;
int  dcSurface = 0;
long dcRunId   = 0;

/* Fase 1 instrumentation: DWT cycle counter is enabled once at startup
 * (usermain). pidProbeCycPerMs converts CYCCNT deltas to ms and is set
 * from SystemCoreClock at the same time - never touched inside a loop. */
static uint32_t pidProbeCycPerMs = 1;

LOCAL void logTest(INT stacd, void *exinf);
LOCAL ID   log_test_id;
LOCAL T_CTSK ctsk_log_test = {
    .itskpri = 5,
    .stksz   = 1024,
    .task    = logTest,
    .tskatr  = TA_HLNG | TA_RNG3,
};

LOCAL void pidTask(INT stacd, void *exinf);  // fungsi eksekusi task
LOCAL ID   pid_task_id;                         // nomor Task ID
LOCAL T_CTSK ctsk_pid_task = {                     // informasi pembuatan task
    .itskpri  = 10,
    .stksz    = 1024,
    .task     = pidTask,
    .tskatr   = TA_HLNG | TA_RNG3,
};

/* PRIORITAS 12 (bukan 11): comTask sengaja diturunkan di bawah sentinelTask -
 * lihat catatan panjang di ctsk_sentinel_task tepat di bawah ini soal
 * starvation yang ditemukan (regresi "inferCount=0"). readCom() (uart_bridge.c)
 * memanggil HAL_UART_Receive() mode polling, yaitu busy-wait murni (loop cek
 * flag RXNE + HAL_GetTick() sampai timeout 100ms) - TIDAK PERNAH masuk WAIT
 * state kernel (SysTick_Handler cuma HAL_IncTick(), tidak ada hook ke
 * scheduler uT-Kernel). Task manapun dengan itskpri lebih besar (prioritas
 * lebih rendah) dari comTask TIDAK PERNAH dijadwalkan selama comTask hidup -
 * bukan race, starvation total. Sebelum sentinelTask ada, tidak ada task
 * dengan prioritas lebih rendah dari comTask jadi ini laten/tidak kelihatan.
 * FIX: comTask diturunkan ke bawah sentinelTask (bukan mengubah readCom/
 * HAL_UART_Receive - scope lebih kecil, jalur UART yang sudah lama stabil
 * tidak disentuh). */
LOCAL void comTask(INT stacd, void *exinf);
LOCAL ID   com_task_id;
LOCAL T_CTSK ctsk_com_task = {
    .itskpri = 12,
    .stksz = 1024,
    .task = comTask,
    .tskatr = TA_HLNG | TA_RNG3,
};

/* SENTINEL classifier ('c' CLASSIFY_STATUS): task TERPISAH, prioritas LEBIH
 * RENDAH dari pidTask (itskpri lebih besar = prioritas lebih rendah - lihat
 * MIN_TSKPRI di knldef.h) sesuai instruksi eksplisit di spec ("Pakai task
 * terpisah prioritas LEBIH RENDAH dari pidTask") - beda dari fitur lain
 * sebelumnya di sesi ini yang semua "JANGAN buat task baru", spec kali ini
 * secara eksplisit MENGIZINKAN task baru untuk ini. stksz besar (8192,
 * bukan 1024 seperti task lain) karena sentinel_rf50x10() sendiri butuh
 * 3256 byte stack di -O0 (terukur via -fstack-usage), jauh melebihi
 * budget 1024 byte task lain di project ini.
 *
 * itskpri 11 (bukan 12): DITEMUKAN comTask (busy-wait di HAL_UART_Receive,
 * lihat catatan di ctsk_com_task di atas) tidak pernah yield ke kernel,
 * sehingga starvation total task manapun di bawahnya. sentinelTask 11 masih
 * tetap "lebih rendah dari pidTask" (11>10, syarat asli terpenuhi), tapi
 * sekarang LEBIH TINGGI dari comTask - begitu tk_dly_tsk(50) di bawah habis
 * dan sentinelTask jadi READY (event timer/interrupt), scheduler mem-preempt
 * comTask walau comTask sedang busy-wait, karena preemption uT-Kernel
 * dipicu prioritas siap-jalan, bukan menunggu comTask yield sendiri. */
LOCAL void sentinelTask(INT stacd, void *exinf);
LOCAL ID   sentinel_task_id;
LOCAL T_CTSK ctsk_sentinel_task = {
    .itskpri = 11,
    .stksz   = 8192,
    .task    = sentinelTask,
    .tskatr  = TA_HLNG | TA_RNG3,
};


// task function

LOCAL void pidTask(INT stacd, void *exinf){
    resetAllPID();

    /* Fase 1 instrumentation: measure pidTask's actual wake-to-wake period
     * with DWT CYCCNT. Inline in pidTask on purpose (a separate task would
     * change the scheduling being measured). Integer-only inside the loop,
     * no printf/UART/float there - the report is built once, when the
     * measurement window closes (moving: 1 -> 0), not every iteration. */
    static uint32_t last_cyc;
    static uint32_t period_min;
    static uint32_t period_max;
    static uint64_t period_sum;
    static uint32_t period_cnt;
    static uint32_t warmup;
    static uint8_t  prev_moving;

    /* SENTINEL DATA_COLLECT ('d'): state lives here (not in a separate task)
     * so the CSV row logged below is guaranteed to correspond to the exact
     * doPID() call in THIS iteration - a separately-clocked sampler task
     * would not be phase-locked to pidTask's real ~50ms ticks (see Fase 1:
     * tk_dly_tsk(33) quantizes to 50ms via TIMER_PERIOD, not exactly 33ms). */
    static uint32_t dc_frame;
    static uint8_t  prev_dataCollect;
    static uint32_t dc_work_min, dc_work_max, dc_work_cnt;
    static uint64_t dc_work_sum;
    static SYSTIM   dc_startTime;
    /* REVISI masalah 1: readINA219()/readMPU6050() now report HAL status -
     * count how many frames the FIRST attempt failed, so a recurrence shows
     * up as a number in DC_TIMING instead of silently zeroed columns. */
    static uint32_t dc_fail_ina1, dc_fail_ina2, dc_fail_imu;

    /* FIX (frame blew out to 60ms): writeCom() inside the timed frame was
     * blocking ~11ms on UART, pushing knl_current_time past the next 10ms
     * tick before tk_dly_tsk(33) ran (10+33+10=53 -> wakes at tick 60 - see
     * Fase 1 quantization). Buffered in RAM instead, flushed AFTER the run
     * (motor already off) - zero writeCom() calls inside the timed section.
     * Static (.bss), NOT on pidTask's 1024-byte stack: 100*200=20000 bytes. */
    static char dcHeaderBuf[192];
    static char dcConfigBuf[256]; /* TAMBAHAN: baris #config, dibaca dari struct AKTIF, dibuffer sama seperti header/data - lihat FIX note */
    static char dcBuf[100][200]; /* ukuran dibiarkan 100 (REVISI: cukup 80 boleh biarkan 100) - cuma index 0..79 yang dipakai/di-flush sekarang */

    last_cyc    = DWT->CYCCNT;
    period_min  = 0xFFFFFFFFu;
    period_max  = 0u;
    period_sum  = 0u;
    period_cnt  = 0u;
    warmup      = 0u;
    prev_moving = 0u;

    dc_frame         = 0u;
    prev_dataCollect = 0u;
    dc_work_min      = 0xFFFFFFFFu;
    dc_work_max      = 0u;
    dc_work_sum      = 0u;
    dc_work_cnt      = 0u;
    dc_fail_ina1     = 0u;
    dc_fail_ina2     = 0u;
    dc_fail_imu      = 0u;

    while(1){
        uint32_t dcT0 = 0u;

        if(dataCollectActive && !prev_dataCollect){
            /* rising edge: new run starting - fresh state, frame 0 */
            dc_frame     = 0u;
            dc_work_min  = 0xFFFFFFFFu;
            dc_work_max  = 0u;
            dc_work_sum  = 0u;
            dc_work_cnt  = 0u;
            dc_fail_ina1 = 0u;
            dc_fail_ina2 = 0u;
            dc_fail_imu  = 0u;
            moving = 1;
            resetAllPID();
            tk_get_tim(&dc_startTime);

            /* TAMBAHAN: baris #config, dibaca dari struct/variabel yang
             * SEDANG AKTIF sekarang (bukan #define) - supaya override
             * runtime ('u'/'f') atau board reset di tengah sesi kelihatan.
             * Kp/Ki/Kd/Ko itu float di struct - di-cast (int) sebelum %d,
             * PERSIS pelajaran dari bug PING (float ke %d tanpa cast
             * menggeser SEMUA argumen sesudahnya). Dibuffer, bukan dikirim
             * sekarang - lihat FIX note soal writeCom() di jalur frame. */
            snprintf(dcConfigBuf, sizeof(dcConfigBuf),
                "#config,Kp=%d,Ki=%d,Kd=%d,Ko=%d,ffScalePct=%ld,loopHz=20,"
                "Ldb_f=%ld,Lkv_f=%ld,Ldb_r=%ld,Lkv_r=%ld,"
                "Rdb_f=%ld,Rkv_f=%ld,Rdb_r=%ld,Rkv_r=%ld\r\n",
                (int)leftPID.Kp, (int)leftPID.Ki, (int)leftPID.Kd, (int)leftPID.Ko,
                ffScalePct,
                leftPID.u_db_fwd, leftPID.kv_num_fwd, leftPID.u_db_rev, leftPID.kv_num_rev,
                rightPID.u_db_fwd, rightPID.kv_num_fwd, rightPID.u_db_rev, rightPID.kv_num_rev);

            /* Buffered, NOT sent now - see FIX note above. */
            snprintf(dcHeaderBuf, sizeof(dcHeaderBuf),
                "#run_id,surface,pattern,t_ms,tgtL,tgtR,pwmL,pwmR,encL,encR,velL,velR,curL,curR,curRawL,curRawR,bus_mV,ax,ay,az,gx,gy,gz\r\n");
        }

        if(dataCollectActive){
            /* Set THIS frame's target BEFORE updatePID() reads it below -
             * pure sequencing, does not touch doPID/updatePID/computeFeedforward. */
            /* REVISI pola manuver: 80 frame/4s, maju-mundur (lintasan tidak
             * cukup untuk 1 arah terus 5s). Pola 1 dan 4 SENGAJA punya
             * struktur sama (akselerasi lalu 0) - beda cuma magnitudo (30
             * vs 50) - JANGAN digabung/dioptimasi, sesuai instruksi. */
            long tgtL, tgtR;
            switch(dcPattern){
                case 1:
                    if(dc_frame < 40u){ tgtL = 30; tgtR = 30; }
                    else               { tgtL = 0;  tgtR = 0;  }
                    break;
                case 2:
                    if(dc_frame < 40u){ tgtL = 50;  tgtR = 50;  }
                    else               { tgtL = -50; tgtR = -50; }
                    break;
                case 3:
                    if(dc_frame < 30u)      { tgtL = 80;  tgtR = 80;  }
                    else if(dc_frame < 60u) { tgtL = -80; tgtR = -80; }
                    else                    { tgtL = 0;   tgtR = 0;   }
                    break;
                case 4:
                    if(dc_frame < 40u){ tgtL = 50; tgtR = 50; }
                    else               { tgtL = 0;  tgtR = 0;  }
                    break;
                case 5:
                    tgtL = 40; tgtR = -40;
                    break;
                default: tgtL = 0; tgtR = 0; break;
            }
            leftPID.TargetTicksPerFrame  = tgtL;
            rightPID.TargetTicksPerFrame = tgtR;

            /* Timing budget starts here - "doPID + IMU + 2x INA219 + UART"
             * per the brief, so doPID (right below) is INSIDE the window. */
            dcT0 = DWT->CYCCNT;
        }

        if(moving){
            updatePID();
        }

        uint32_t now_cyc = DWT->CYCCNT;
        uint32_t delta   = now_cyc - last_cyc; /* unsigned sub: wraps correctly */
        last_cyc = now_cyc;

        if(moving && !prev_moving){
            /* rising edge: a new 10s measurement window just started */
            period_min = 0xFFFFFFFFu;
            period_max = 0u;
            period_sum = 0u;
            period_cnt = 0u;
            warmup     = 3u; /* discard first 3 iterations of this window */

            /* SENTINEL: sesi klasifikasi baru mulai di sini juga - reset
             * window+tangkap ax_baseline. Ini titik moving 0->1 yang SAMA
             * dipakai instrumentasi PID_PERIOD di atas, jadi burst 5x IMU
             * read di dalamnya otomatis ikut "tersaring" oleh warmup=3. */
            sentinelBeginSession();
        }

        if(moving){
            if(warmup > 0u){
                warmup--;
            } else {
                if(delta < period_min) period_min = delta;
                if(delta > period_max) period_max = delta;
                period_sum += delta;
                period_cnt++;
            }
        }

        if(!moving && prev_moving && period_cnt > 0u){
            /* falling edge: window just closed - report once, here only */
            uint32_t mean_cyc = (uint32_t)(period_sum / period_cnt);
            uint32_t cpm = pidProbeCycPerMs;

            uint32_t min_ms  = period_min / cpm, min_frac  = ((period_min % cpm) * 1000u) / cpm;
            uint32_t max_ms  = period_max / cpm, max_frac  = ((period_max % cpm) * 1000u) / cpm;
            uint32_t mean_ms = mean_cyc   / cpm, mean_frac = ((mean_cyc   % cpm) * 1000u) / cpm;

            static char rpt[200];
            snprintf(rpt, sizeof(rpt),
                "PID_PERIOD,n=%lu,silent=%u,min_ms=%lu.%03lu,max_ms=%lu.%03lu,mean_ms=%lu.%03lu,min_cyc=%lu,max_cyc=%lu,mean_cyc=%lu\r\n",
                (unsigned long)period_cnt, (unsigned)logSilent,
                (unsigned long)min_ms, (unsigned long)min_frac,
                (unsigned long)max_ms, (unsigned long)max_frac,
                (unsigned long)mean_ms, (unsigned long)mean_frac,
                (unsigned long)period_min, (unsigned long)period_max, (unsigned long)mean_cyc);
            writeCom(&com_pi, rpt);

            period_cnt = 0u; /* avoid re-printing until the next window closes */
        }

        if(moving){
            /* pwmL/pwmR = PWM FINAL (u_ff + akumulator PI), same recipe as
             * logTest's CSV - computeFeedforward()/doPID() itself untouched.
             * velL/velR = ticks this frame: doPID() already computed this as
             * its internal "input" and stored it in PrevInput - read it back
             * rather than re-deriving encoder deltas ourselves (single
             * source of truth, and free - no extra encoder reads needed).
             *
             * SENTINEL: dulu blok ini (dan pembacaan sensor di bawah) cuma
             * jalan kalau dataCollectActive - sekarang jalan tiap kali
             * moving==1 (LOG_TEST/MOTOR_SPEEDS/DATA_COLLECT, bukan cuma
             * 'd'), karena classifier butuh curL/curR/ax/gz "online" tiap
             * frame selama robot bergerak, bukan cuma saat run 'd' formal.
             * Ini beban I2C tambahan yang PERMANEN di semua mode driving,
             * bukan cuma 'd' - PID_PERIOD (di atas) tetap jadi pengaman
             * umum kalau ini bikin periode lewat 50ms, karena dia mengukur
             * di SEMUA kondisi moving==1, tidak cuma saat 'd'. */
            long uffL = computeFeedforward(&leftPID);
            long uffR = computeFeedforward(&rightPID);
            long pwmL = uffL + leftPID.output;
            long pwmR = uffR + rightPID.output;
            if(pwmL > MAX_PWM) pwmL = MAX_PWM; else if(pwmL < -MAX_PWM) pwmL = -MAX_PWM;
            if(pwmR > MAX_PWM) pwmR = MAX_PWM; else if(pwmR < -MAX_PWM) pwmR = -MAX_PWM;

            /* MASALAH 1 fix: readINA219()/readMPU6050() now report HAL
             * status (previously void - a failure was invisible). Retry
             * ONCE on failure - cheap (one extra I2C burst, DC_TIMING shows
             * tens of ms of margin in a 50ms frame). */
            HAL_StatusTypeDef r1 = readINA219(&ina1); if(r1 != HAL_OK) r1 = readINA219(&ina1);
            HAL_StatusTypeDef r2 = readINA219(&ina2); if(r2 != HAL_OK) r2 = readINA219(&ina2);
            HAL_StatusTypeDef r3 = readMPU6050(&imu); if(r3 != HAL_OK) r3 = readMPU6050(&imu);

            if(dataCollectActive){
                /* Fail-count HANYA dihitung selama run 'd' sedang aktif -
                 * digeser dari blok sensor-read di atas (sekarang unconditional)
                 * supaya angka di DC_TIMING tidak tercemar kegagalan dari
                 * LOG_TEST/MOTOR_SPEEDS yang kebetulan terjadi di antara dua run 'd'. */
                if(r1 != HAL_OK) dc_fail_ina1++;
                if(r2 != HAL_OK) dc_fail_ina2++;
                if(r3 != HAL_OK) dc_fail_imu++;

                SYSTIM dcNow;
                tk_get_tim(&dcNow);
                unsigned long t_ms = (unsigned long)(dcNow.lo - dc_startTime.lo);

                /* Buffered, NOT sent now - see FIX note above. dc_frame is still
                 * 0-based here (incremented below), so this indexes 0..79 exactly. */
                snprintf(dcBuf[dc_frame], sizeof(dcBuf[dc_frame]),
                    "%ld,%d,%d,%lu,%ld,%ld,%ld,%ld,%ld,%ld,%d,%d,%ld,%ld,%ld,%ld,%ld,%d,%d,%d,%d,%d,%d\r\n",
                    dcRunId, dcSurface, dcPattern, t_ms,
                    leftPID.TargetTicksPerFrame, rightPID.TargetTicksPerFrame,
                    pwmL, pwmR,
                    leftPID.Encoder, rightPID.Encoder,
                    leftPID.PrevInput, rightPID.PrevInput,
                    (long)ina1.current_mA, (long)ina2.current_mA,
                    (long)ina1.current_raw, (long)ina2.current_raw,
                    (long)ina1.bus_mV,
                    imu.ax, imu.ay, imu.az, imu.gx, imu.gy, imu.gz);

                /* Timing budget check (item 1): doPID+IMU+2xINA219 (+snprintf,
                 * no UART now), all inside [dcT0 .. now]. Accumulate silently,
                 * report once at the end of the run - same discipline as
                 * PID_PERIOD above. */
                uint32_t dcT1 = DWT->CYCCNT;
                uint32_t dcWork = dcT1 - dcT0;
                if(dcWork < dc_work_min) dc_work_min = dcWork;
                if(dcWork > dc_work_max) dc_work_max = dcWork;
                dc_work_sum += dcWork;
                dc_work_cnt++;

                dc_frame++;
                if(dc_frame >= 80u){
                    /* REVISI: 80 frame (4s @ 50ms) - dulu 100/5s, diperpendek
                     * karena lintasan tidak cukup untuk 1 arah terus 5s. */
                    uint32_t cpm = pidProbeCycPerMs;
                    uint32_t meanWork = (uint32_t)(dc_work_sum / (dc_work_cnt ? dc_work_cnt : 1u));
                    uint32_t wMinMs = dc_work_min / cpm, wMinFr = ((dc_work_min % cpm) * 1000u) / cpm;
                    uint32_t wMaxMs = dc_work_max / cpm, wMaxFr = ((dc_work_max % cpm) * 1000u) / cpm;
                    uint32_t wMeanMs = meanWork / cpm,   wMeanFr = ((meanWork % cpm) * 1000u) / cpm;

                    /* MASALAH 1: hitung kegagalan baca dilaporkan di sini -
                     * bukti angka kalau regresi ini kambuh, bukan tebakan lagi. */
                    static char dcRpt[240];
                    snprintf(dcRpt, sizeof(dcRpt),
                        "DC_TIMING,run_id=%ld,n=%lu,min_ms=%lu.%03lu,max_ms=%lu.%03lu,mean_ms=%lu.%03lu,ina1_fail=%lu,ina2_fail=%lu,imu_fail=%lu\r\n",
                        dcRunId, (unsigned long)dc_work_cnt,
                        (unsigned long)wMinMs, (unsigned long)wMinFr,
                        (unsigned long)wMaxMs, (unsigned long)wMaxFr,
                        (unsigned long)wMeanMs, (unsigned long)wMeanFr,
                        (unsigned long)dc_fail_ina1, (unsigned long)dc_fail_ina2, (unsigned long)dc_fail_imu);

                    /* Motor 0 FIRST, then flush - matches the fix's required
                     * order. Every writeCom() from here on is OUTSIDE the timed
                     * per-frame section (moving is already 0, dataCollectActive
                     * already cleared below), so none of this can distort the
                     * next run's frame timing either. */
                    setMotorSpeeds(0, 0);
                    moving = 0;
                    resetAllPID();
                    dataCollectActive = 0;

                    writeCom(&com_pi, dcRpt);
                    writeCom(&com_pi, dcConfigBuf); /* TAMBAHAN: sebelum header, seperti diminta */
                    writeCom(&com_pi, dcHeaderBuf);
                    for(uint32_t i = 0; i < 80u; i++){
                        writeCom(&com_pi, dcBuf[i]);
                    }
                }
            }

            /* SENTINEL: push frame ini ke ring buffer classifier - pakai
             * NILAI YANG SAMA (pwmL/pwmR/curL/curR/ax/ay/gz) yang barusan
             * dihitung/dibaca di atas, tidak baca ulang sensor. Jalan tiap
             * frame SELAMA moving==1 (bukan cuma saat dataCollectActive). */
            sentinelPushFrame(leftPID.TargetTicksPerFrame, rightPID.TargetTicksPerFrame,
                               pwmL, pwmR,
                               leftPID.PrevInput, rightPID.PrevInput,
                               ina1.current_mA, ina2.current_mA,
                               imu.ax, imu.ay, imu.gz);
        }

        prev_moving      = moving;
        prev_dataCollect = dataCollectActive;

        tk_dly_tsk(33);
    }
};

LOCAL void comTask(INT stacd, void *exinf){
    while(1){
        readCom(&com_pi); //this is for robot
        // readCom(&debug); // this is for debug [just use stm only]
    }
}

/* SENTINEL classifier: task terpisah, prioritas lebih rendah dari pidTask
 * (lihat ctsk_sentinel_task di atas). Poll sentinelInferenceDue() tiap
 * 50ms (sama dengan periode frame pidTask) - kalau siap, panggil
 * sentinelRunInference() yang membangun 84 fitur + panggil
 * sentinel_rf50x10() (kerja berat: 3256 byte stack, ~ms - lihat CLASSIFY_STATUS
 * utk angka aktual). Ini SENGAJA di luar pidTask supaya kerja berat itu
 * tidak pernah mendorong periode pidTask lewat 50ms. */
LOCAL void sentinelTask(INT stacd, void *exinf){
    while(1){
        if(sentinelInferenceDue()){
            sentinelRunInference();
        }
        tk_dly_tsk(50);
    }
}

/* Fase 1 feedforward calib: STATIC_SWEEP ('s') worker.
 * Plain function, not a task - called from inside logTest()'s loop so no
 * new task is created. OPEN LOOP MURNI: bypasses doPID/updatePID/resetPID
 * entirely, writes PWM straight to setMotorSpeed() and reads enc1/enc2
 * directly (leftPID/rightPID are never touched). moving is forced to 0 for
 * the whole run so pidTask cannot also drive the motors concurrently. */
LOCAL void runStaticSweep(void){
    EncoderState    *targetEnc    = (sweepMotorId == 0) ? &enc1      : &enc2;
    MotorController *targetMotor  = (sweepMotorId == 0) ? &motorLeft : &motorRight;
    MotorController *otherMotor   = (sweepMotorId == 0) ? &motorRight: &motorLeft;
    INASensor       *targetIna    = (sweepMotorId == 0) ? &ina1      : &ina2;

    moving = 0;
    setMotorSpeeds(0, 0);

    for(int pwm = sweepPwmStart; pwm <= sweepPwmEnd; pwm += sweepPwmStep){
        setMotorSpeed(otherMotor, 0);              /* stays 0 the whole sweep */
        setMotorSpeed(targetMotor, sweepDir * pwm);

        /* PID frame = 50ms (verified via DWT, see PID_PERIOD report). Counting
         * loop iterations (not dividing hold_ms) makes "jumlah frame" exact. */
        int totalFrames = sweepHoldMs / 50;
        if(totalFrames < 2) totalFrames = 2; /* need >=1 frame in each half */
        int transientFrames = totalFrames / 2;
        int measureFrames   = totalFrames - transientFrames;

        for(int i = 0; i < transientFrames; i++){
            tk_dly_tsk(50); /* discard: transient settling */
        }

        readEncoder(targetEnc);
        int32_t encStart = targetEnc->counterVal;

        for(int i = 0; i < measureFrames; i++){
            tk_dly_tsk(50); /* this is the measured window (2nd half) */
        }

        readEncoder(targetEnc);
        int32_t encEnd = targetEnc->counterVal;

        if(pwm == sweepPwmStart){
            /* One-off diagnostic: how long readINA219() actually takes on
             * this hardware (4x HAL_I2C_Mem_Read + 1 mux select). */
            uint32_t t0 = DWT->CYCCNT;
            readINA219(targetIna);
            uint32_t t1 = DWT->CYCCNT;
            uint32_t us = ((t1 - t0) * 1000u) / pidProbeCycPerMs;
            char dbg[48];
            snprintf(dbg, sizeof(dbg), "STATIC_INA_US,%lu\r\n", (unsigned long)us);
            writeCom(&com_pi, dbg);
        } else {
            readINA219(targetIna);
        }

        long deltaTicks        = (long)encEnd - (long)encStart;
        long ticksPerFrameX100 = (deltaTicks * 100L) / measureFrames;

        /* KOREKSI: shunt_raw dibaca LANGSUNG lewat I2C terpisah di sini, BUKAN
         * diturunkan dari targetIna->shunt_uV (itu sudah lewat readINA219() -
         * kalau bug-nya ada di dalam readINA219() sendiri, menurunkan dari
         * situ akan mewarisi bug yang sama dan tidak membuktikan apa-apa).
         * Duplikasi pembacaan ini disengaja - jalurnya independen. */
        int16_t shuntRawIndependent = readShuntRawIndependent(targetIna);

        char line[128];
        snprintf(line, sizeof(line), "STATIC,%d,%d,%d,%ld,%ld,%ld,%ld,%d\r\n",
                 sweepMotorId, sweepDir, pwm, ticksPerFrameX100,
                 (long)targetIna->bus_mV, (long)targetIna->current_mA,
                 (long)targetIna->current_raw, shuntRawIndependent);
        writeCom(&com_pi, line);
    }

    setMotorSpeeds(0, 0); /* sweep done - motors off, unconditionally */
    sweepActive = 0;
}

LOCAL void logTest(INT stacd, void *exinf){
    while(1){
        if(logActive){
            SYSTIM startTime, now;
            tk_get_tim(&startTime);

            moving = 1;
            leftPID.TargetTicksPerFrame = logTargetL;
            rightPID.TargetTicksPerFrame = logTargetR;

            char line[150];
            while(1){
                tk_get_tim(&now);
                UW elapsed = now.lo - startTime.lo;
                if(elapsed >= 10000) break;

                /* Lout/Rout must stay the FINAL PWM actually sent to the motor
                 * (comparable with older runs) - pid->output is now the PI
                 * accumulator ONLY, so it's recomputed here via the same
                 * computeFeedforward()+clamp doPID() uses, not read raw. */
                long uffL = computeFeedforward(&leftPID);
                long uffR = computeFeedforward(&rightPID);
                long loutFinal = uffL + leftPID.output;
                long routFinal = uffR + rightPID.output;
                if(loutFinal > MAX_PWM) loutFinal = MAX_PWM; else if(loutFinal < -MAX_PWM) loutFinal = -MAX_PWM;
                if(routFinal > MAX_PWM) routFinal = MAX_PWM; else if(routFinal < -MAX_PWM) routFinal = -MAX_PWM;

                snprintf(line, sizeof(line), "%lu,%ld,%ld,%ld,%ld,%ld,%ld,%ld,%ld\r\n",
                         (unsigned long)elapsed, logTargetL, logTargetR,
                         (long)enc1.counterVal, (long)enc2.counterVal,
                         loutFinal, routFinal, uffL, uffR);
                if(!logSilent){ /* Fase 1: same path either way, only the UART write is toggled */
                    writeCom(&com_pi, line);
                }
                tk_dly_tsk(33);
            }
            moving = 0; 
            leftPID.TargetTicksPerFrame = 0;
            rightPID.TargetTicksPerFrame = 0;
            logActive = 0;
            setMotorSpeeds(0,0);
            resetAllPID();
        } else if(sweepActive){
            runStaticSweep();
        } else if(imuDiagActive){
            diagIMU(&imu, &com_pi);
            imuDiagActive = 0;
        }
        tk_dly_tsk(50);
    }
}



/* fungsi usermain */
EXPORT INT usermain(void)
{
    tm_putstring((UB*)"Start User-main program.\n");

    /* Fase 1 instrumentation: enable DWT cycle counter once at startup. */
    CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
    DWT->CYCCNT = 0;
    DWT->CTRL  |= DWT_CTRL_CYCCNTENA_Msk;
    pidProbeCycPerMs = SystemCoreClock / 1000u;

    initSensors(); //init semaphore on imu and ina reading - needed so STATIC_SWEEP's readINA219() is arbitrated
    initEncoder(&enc1);
    initEncoder(&enc2);
    initINA219(&ina1); // needed so STATIC_SWEEP reports real bus_mV/current_mA (else uncalibrated/stale)
    initINA219(&ina2);
    initMotorController(&motorLeft);
    initMotorController(&motorRight);
    initMpu6050(&imu); // needed so DATA_COLLECT's per-frame readMPU6050() gets real data, not a sleeping chip
    // /* Buat & Jalankan Task */
    pid_task_id = tk_cre_tsk(&ctsk_pid_task);
    tk_sta_tsk(pid_task_id, 0);

    com_task_id = tk_cre_tsk(&ctsk_com_task);
    tk_sta_tsk(com_task_id, 0);

    log_test_id = tk_cre_tsk(&ctsk_log_test);
    tk_sta_tsk(log_test_id, 0);

    sentinel_task_id = tk_cre_tsk(&ctsk_sentinel_task);
    tk_sta_tsk(sentinel_task_id, 0);


    tk_slp_tsk(TMO_FEVR);
    return 0;
}
