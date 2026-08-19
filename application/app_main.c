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

volatile uint8_t logActive = 0;
volatile uint8_t logSilent = 0;
long logTargetL = 0, logTargetR = 0;

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

LOCAL void comTask(INT stacd, void *exinf);
LOCAL ID   com_task_id;
LOCAL T_CTSK ctsk_com_task = {
    .itskpri = 11,
    .stksz = 1024,
    .task = comTask,
    .tskatr = TA_HLNG | TA_RNG3,
};

LOCAL void sumTask(INT stacd , void *exinf);
LOCAL ID sum_task_id;
LOCAL T_CTSK ctsk_sum_task = {
    .itskpri = 9,
    .stksz = 1024,
    .task = sumTask,
    .tskatr = TA_HLNG | TA_RNG3,
};

LOCAL void imuTask(INT stacd, void *exinf);
LOCAL ID imu_task_id;
LOCAL T_CTSK ctsk_imu_task = {
    .itskpri = 9,
    .stksz = 1024,
    .task = imuTask,
    .tskatr = TA_HLNG | TA_RNG3,    
};

LOCAL void inaTask(INT stacd, void *exinf);
LOCAL ID ina_task_id;
LOCAL T_CTSK ctsk_ina_task = {
    .itskpri = 9,
    .stksz = 1024,
    .task = inaTask,
    .tskatr = TA_HLNG | TA_RNG3,
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

    last_cyc    = DWT->CYCCNT;
    period_min  = 0xFFFFFFFFu;
    period_max  = 0u;
    period_sum  = 0u;
    period_cnt  = 0u;
    warmup      = 0u;
    prev_moving = 0u;

    while(1){
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

        prev_moving = moving;

        tk_dly_tsk(33);
    }
};

LOCAL void comTask(INT stacd, void *exinf){
    while(1){
        readCom(&com_pi); //this is for robot
        // readCom(&debug); // this is for debug [just use stm only]
    }
}

LOCAL void sumTask(INT stacd, void *exinf){
    char msg[200];
    while(1){
        // snprintf(msg, sizeof(msg),
        //     "L_ENC:%ld,L_TGT:%ld,L_OUT:%d,R_ENC:%ld,R_TGT:%ld,R_OUT:%d,ACC:%d,%d,%d,GYR:%d,%d,%d,INA1:%ld,%ld,INA2:%ld,%ld\r\n",
        //     leftPID.Encoder, leftPID.TargetTicksPerFrame, leftPID.output,
        //     rightPID.Encoder, rightPID.TargetTicksPerFrame, rightPID.output,
        //     imu.ax, imu.ay, imu.az, imu.gx, imu.gy, imu.gz,
        //     ina1.current_mA, ina1.power_mW, ina2.current_mA, ina2.power_mW);
    
        vcpMonitor(debug.name, msg);
        tk_dly_tsk(50);
    }
}

LOCAL void inaTask(INT stacd, void *exinf){
    while(1){
        readINA219(&ina1);
        readINA219(&ina2);
        tk_dly_tsk(200);
    }
}

LOCAL void imuTask(INT stacd, void *exinf){
    while(1){
        readMPU6050(&imu);
        tk_dly_tsk(50);
    }
}

LOCAL void logTest(INT stacd, void *exinf){
    while(1){
        if(logActive){
            SYSTIM startTime, now;
            tk_get_tim(&startTime);

            moving = 1;
            leftPID.TargetTicksPerFrame = logTargetL;
            rightPID.TargetTicksPerFrame = logTargetR;

            char line[80];
            while(1){
                tk_get_tim(&now);
                UW elapsed = now.lo - startTime.lo;
                if(elapsed >= 10000) break;

                snprintf(line, sizeof(line), "%lu,%ld,%ld,%ld,%ld,%d,%d\r\n",(unsigned long)elapsed,logTargetL,logTargetR, enc1.counterVal,enc2.counterVal,leftPID.output,rightPID.output);
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

    // initSensors(); //init semaphore on imu and ina reading
    initEncoder(&enc1);
    initEncoder(&enc2);
    // initINA219(&ina1);
    // initINA219(&ina2);
    initMotorController(&motorLeft);
    initMotorController(&motorRight);
    // initMpu6050(&imu);
    // /* Buat & Jalankan Task */
    pid_task_id = tk_cre_tsk(&ctsk_pid_task);
    tk_sta_tsk(pid_task_id, 0);

    com_task_id = tk_cre_tsk(&ctsk_com_task);
    tk_sta_tsk(com_task_id, 0);

    log_test_id = tk_cre_tsk(&ctsk_log_test);
    tk_sta_tsk(log_test_id, 0);

    // sum_task_id = tk_cre_tsk(&ctsk_sum_task);
    // tk_sta_tsk(sum_task_id, 0);

    // ina_task_id = tk_cre_tsk(&ctsk_ina_task);
    // tk_sta_tsk(ina_task_id, 0);

    // imu_task_id = tk_cre_tsk(&ctsk_imu_task);
    // tk_sta_tsk(imu_task_id, 0);

    
    tk_slp_tsk(TMO_FEVR);
    return 0;
}
