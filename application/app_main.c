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
LOCAL ID com_task_id;
LOCAL T_CTSK ctsk_com_task = {
    .itskpri = 11,
    .stksz = 1024,
    .task = comTask,
    .tskatr = TA_HLNG | TA_RNG3,
};

LOCAL void pidTask(INT stacd, void *exinf){
    resetAllPID();
    while(1){
        updatePID();
        tk_dly_tsk(33);
    }
};

LOCAL void comTask(INT stacd, void *exinf){
    while(1){
        readCom(&com_pi);
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
    
    tk_slp_tsk(TMO_FEVR);
    return 0;
}
