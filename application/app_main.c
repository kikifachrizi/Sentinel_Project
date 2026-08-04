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
    while(1){
        if(moving){
            updatePID();
        }
        tk_dly_tsk(33);
    }
};

LOCAL void comTask(INT stacd, void *exinf){
    while(1){
        readCom(&com_pi);
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



/* fungsi usermain */
EXPORT INT usermain(void)
{
    tm_putstring((UB*)"Start User-main program.\n");

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

    // sum_task_id = tk_cre_tsk(&ctsk_sum_task);
    // tk_sta_tsk(sum_task_id, 0);

    // ina_task_id = tk_cre_tsk(&ctsk_ina_task);
    // tk_sta_tsk(ina_task_id, 0);

    // imu_task_id = tk_cre_tsk(&ctsk_imu_task);
    // tk_sta_tsk(imu_task_id, 0);

    
    tk_slp_tsk(TMO_FEVR);
    return 0;
}
