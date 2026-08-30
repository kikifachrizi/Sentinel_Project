#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"
#include "lib/commands.h"
#include "lib/uart_bridge.h"
#include "lib/motor_driver.h"
#include "lib/diff_controller.h"
#include "lib/sensors.h"
#include "lib/log_test.h"
#include "lib/sentinel_features.h"
#include <stdio.h>

EXPORT void runCommand(UartBridge *com){
    switch(com->cmd){
        case MOTOR_RAW_PWM:
            if(sweepActive || imuDiagActive || dataCollectActive){ writeCom(com, "BUSY\r\n"); break; } /* STATIC_SWEEP/IMU_DIAG/DATA_COLLECT own the motors */
            moving = 0;
            setMotorSpeeds(com->arg1, com->arg2);
            writeCom(com, "OK\r\n");
            break;
        case MOTOR_SPEEDS:
            if(sweepActive || imuDiagActive || dataCollectActive){ writeCom(com, "BUSY\r\n"); break; } /* STATIC_SWEEP/IMU_DIAG/DATA_COLLECT own the motors */
            moving = 1;
            leftPID.TargetTicksPerFrame = com->arg1;
            rightPID.TargetTicksPerFrame = com->arg2;
            writeCom(com, "OK\r\n");
            break;
        case READ_ENCODERS: {
            char reply[32];
            readEncoder(&enc1);
            readEncoder(&enc2);
            snprintf(reply, sizeof(reply), "%ld %ld\r\n", enc1.counterVal, enc2.counterVal);
            writeCom(com, reply);
            break;
        }
        case RESET_ENCODERS:
            resetEncoders();
            resetAllPID();
            writeCom(com, "OK\r\n");
            break;
        case UPDATE_PID: {
            /* FORMAT FIX: diffdrive_arduino (arduino_comms.hpp set_pid_values(),
             * dipanggil sekali di on_activate() plugin) mengirim
             * "u Kp:Kd:Ki:Ko\r" - urutan Kp,Kd,Ki,Ko. Sebelumnya di-parse
             * sebagai Kp,Ki,Kd,Ko di sini - Ki dan Kd TERTUKAR setiap plugin
             * push PID value, membatalkan asumsi Ki=0 permanen yang dipakai
             * SENTINEL gain scheduling. Diverifikasi langsung dari source
             * joshnewans/diffdrive_arduino branch humble. */
            int p, d, i, o;
            if(sscanf(com->argv1, "%d:%d:%d:%d", &p,&d,&i,&o) == 4){
                leftPID.Kp = p; leftPID.Kd = d; leftPID.Ki = i; leftPID.Ko = o;
                rightPID.Kp = p; rightPID.Kd = d; rightPID.Ki = i; rightPID.Ko = o;
                writeCom(com, "OK\r\n");
            } else {
                /* FIX: dulu tidak ada balasan sama sekali kalau parsing gagal -
                 * plugin's send_msg() blocking ReadLine() sampai timeout_ms
                 * penuh (ReadByte timeout) untuk command yang malformed. */
                writeCom(com, "ERR args\r\n");
            }
            break;
        }
        case READ_IMU: {
            char reply[80];
            readMPU6050(&imu);
            snprintf(reply, sizeof(reply), "%d %d %d %d %d %d\r\n", imu.ax, imu.ay, imu.az , imu.gx, imu.gy ,imu.gz);
            writeCom(com, reply);
            break;
        }

        case READ_INA219: {
            char reply[100];
            readINA219(&ina1);
            readINA219(&ina2);
            snprintf(reply, sizeof(reply), "%ld %ld %ld %ld\r\n", ina1.current_mA, ina1.power_mW , ina2.current_mA, ina2.power_mW);
            writeCom(com, reply);
            break;
        }

        case PING: {
            char reply[80];
            snprintf(reply, sizeof(reply), "left: %d %d %d %d %ld %ld %ld %ld\r\nright: %d %d %d %d %ld %ld %ld %ld\r\n\r\n ",
                (int)leftPID.Kp, (int)leftPID.Ki, (int)leftPID.Kd, (int)leftPID.Ko,
                leftPID.u_db_fwd, leftPID.kv_num_fwd, leftPID.u_db_rev, leftPID.kv_num_rev,
                (int)rightPID.Kp, (int)rightPID.Ki, (int)rightPID.Kd, (int)rightPID.Ko,
                rightPID.u_db_fwd, rightPID.kv_num_fwd, rightPID.u_db_rev, rightPID.kv_num_rev);
            writeCom(com, reply);
            writeCom(com, "OK\r\n");
            break;
        }
        
        case GET_BAUDRATE: {
            char reply[16];
            snprintf(reply, sizeof(reply), "%lu\r\n", com->huart->Init.BaudRate);
            writeCom(com, reply);
            break;
        }
        case LOG_TEST:
            /* dataCollectActive is consumed by pidTask, NOT logTest, so it's
             * not naturally mutually exclusive like sweepActive/imuDiagActive
             * are (those live in logTest's own if/else-if chain) - both would
             * write leftPID/rightPID.TargetTicksPerFrame from different tasks
             * at once. Guarded explicitly here. */
            if(dataCollectActive){ writeCom(com, "ERR busy\r\n"); break; }
            logTargetL = com->arg1;
            logTargetR = com->arg2;
            logSilent = 0; /* streaming CSV ON */
            logActive = 1;
            writeCom(com, "OK\r\n");
            break;
        case PID_PROBE:
            /* Fase 1: identical 10s run as LOG_TEST, but logTest skips writeCom() */
            if(dataCollectActive){ writeCom(com, "ERR busy\r\n"); break; } /* see LOG_TEST comment */
            logTargetL = com->arg1;
            logTargetR = com->arg2;
            logSilent = 1; /* streaming CSV OFF */
            logActive = 1;
            writeCom(com, "OK\r\n");
            break;
        case STATIC_SWEEP: {
            /* Fase 1 feedforward calib: "s <motor_id> <arah> <pwm_start> <pwm_step> <pwm_end> <hold_ms>"
             * 6 numeric args - more than argv1/argv2 (parseCommand only keeps 2),
             * so parsed straight off com->rxBuf here instead of touching the
             * shared parser. */
            if(sweepActive || imuDiagActive || dataCollectActive){ writeCom(com, "ERR busy\r\n"); break; }

            int motorId, dir, pwmStart, pwmStep, pwmEnd, holdMs;
            int n = sscanf(com->rxBuf, "%*c %d %d %d %d %d %d",
                            &motorId, &dir, &pwmStart, &pwmStep, &pwmEnd, &holdMs);
            if(n != 6){ writeCom(com, "ERR args\r\n"); break; }
            if(motorId != 0 && motorId != 1){ writeCom(com, "ERR motor_id\r\n"); break; }
            if(dir != 1 && dir != -1){ writeCom(com, "ERR arah\r\n"); break; }

            if(pwmStart < 0) pwmStart = 0;        /* clamp per spec */
            if(pwmEnd > MAX_PWM) pwmEnd = MAX_PWM; /* clamp, now shared via diff_controller.h */
            if(pwmStep <= 0 || pwmStart > pwmEnd){ writeCom(com, "ERR range\r\n"); break; }
            if(holdMs < 100){ writeCom(com, "ERR hold_ms\r\n"); break; } /* need >=2 frames @50ms */

            sweepMotorId  = motorId;
            sweepDir      = dir;
            sweepPwmStart = pwmStart;
            sweepPwmStep  = pwmStep;
            sweepPwmEnd   = pwmEnd;
            sweepHoldMs   = holdMs;
            sweepActive   = 1; /* picked up by logTest task's loop */
            writeCom(com, "OK\r\n");
            break;
        }
        case INA_DIAG:
            /* Diagnostik mentah (probe/ACK, register hex 0x00-0x05, tiap
             * return I2C) untuk KEDUA sensor - ditulis balik lewat writeCom()
             * ke com yang sama tempat 'j' masuk, supaya kelihatan di
             * terminal yang sama (bukan tm_printf/USART2 - lihat sensors.c). */
            diagINA219(&ina1, com);
            diagINA219(&ina2, com);
            writeCom(com, "OK\r\n");
            break;
        case IMU_DIAG:
            /* "Motor TIDAK boleh bergerak selama command ini" - jadi ditolak
             * kalau motor sedang digerakkan lewat LOG_TEST/PID_PROBE (moving=1)
             * atau STATIC_SWEEP; sebaliknya 'o'/'m'/'s' ditolak selama
             * imuDiagActive (lihat guard di atas). Dijalankan di logTest task
             * (bukan di sini/comTask) karena blocking ~10s - lihat diagIMU(). */
            if(sweepActive || logActive || imuDiagActive || dataCollectActive){ writeCom(com, "ERR busy\r\n"); break; }
            imuDiagActive = 1; /* picked up by logTest task's loop */
            writeCom(com, "OK\r\n");
            break;
        case DATA_COLLECT: {
            /* SENTINEL: "d <pattern 1..5> <surface_class 0..3> <run_id>" - 3
             * numeric args, parsed straight off com->rxBuf like STATIC_SWEEP
             * (shared parser only keeps 2 args). run_id is recorded as-is,
             * no range check per spec. */
            if(sweepActive || logActive || imuDiagActive || dataCollectActive){ writeCom(com, "ERR busy\r\n"); break; }

            int pattern, surface;
            long runId;
            int n = sscanf(com->rxBuf, "%*c %d %d %ld", &pattern, &surface, &runId);
            if(n != 3){ writeCom(com, "ERR args\r\n"); break; }
            if(pattern < 1 || pattern > 5){ writeCom(com, "ERR pattern\r\n"); break; }
            if(surface < 0 || surface > 3){ writeCom(com, "ERR surface\r\n"); break; }

            dcPattern = pattern;
            dcSurface = surface;
            dcRunId   = runId;
            dataCollectActive = 1; /* picked up by pidTask - see pidTask() in app_main.c */
            writeCom(com, "OK\r\n");
            break;
        }
        case CLASSIFY_STATUS: {
            /* SENTINEL: kelas hasil voting mayoritas + 5 histori inferensi
             * terakhir + waktu bangun-fitur/inferensi (DWT, us) - lihat
             * sentinelGetStatus() di sentinel_features.c. -1 = belum ada
             * hasil (window belum penuh / belum pernah moving=1). */
            SentinelStatus st;
            sentinelGetStatus(&st);
            char reply[220];
            snprintf(reply, sizeof(reply),
                "CLASSIFY,voted=%d,votes=%d:%d:%d:%d:%d,inferCount=%lu,"
                "featUs_min=%lu,featUs_max=%lu,featUs_mean=%lu,"
                "modelUs_min=%lu,modelUs_max=%lu,modelUs_mean=%lu\r\n",
                st.votedClass,
                st.voteHistory[0], st.voteHistory[1], st.voteHistory[2], st.voteHistory[3], st.voteHistory[4],
                (unsigned long)st.inferCount,
                (unsigned long)st.featMinUs, (unsigned long)st.featMaxUs, (unsigned long)st.featMeanUs,
                (unsigned long)st.modelMinUs, (unsigned long)st.modelMaxUs, (unsigned long)st.modelMeanUs);
            writeCom(com, reply);
            break;
        }
        case FF_CONFIG: {
            /* "f 0" -> off (A/B test), "f <pct>" -> set, clamp 0..150. Applies to all motors. */
            long pct = com->arg1;
            if(pct < 0) pct = 0;
            if(pct > 150) pct = 150;
            ffScalePct = pct;
            char reply[24];
            snprintf(reply, sizeof(reply), "OK %ld\r\n", ffScalePct);
            writeCom(com, reply);
            break;
        }
        default:
            /* FIX (opsi 4, ReadByte timeout di ros2_control): dulu com->cmd
             * yang tidak cocok case manapun (mis. huruf command rusak akibat
             * UART overrun saat pidTask menahan comTask - lihat diskusi RX
             * starvation) DIAM TOTAL, tidak ada balasan - plugin nunggu penuh
             * sampai timeout_ms. Sekarang selalu ada balasan, apapun cmd-nya,
             * supaya host tidak pernah menunggu buta - membantu resync lebih
             * cepat, tidak memperbaiki akar penyebab byte-loss itu sendiri
             * (lihat SENTINEL_SENSOR_DECIMATION di app_main.c untuk itu). */
            writeCom(com, "ERR unknown\r\n");
            break;
    }
}