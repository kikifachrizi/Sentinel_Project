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

extern I2C_HandleTypeDef hi2c1; // for pca i2c mux

#define PCA9548A_ADDR   (0x70 << 1)   // default, A0/A1/A2 = GND

#define MUX_CH_MPU6050   0
#define MUX_CH_INA219_1  1
#define MUX_CH_INA219_2  2

// build NUCLEO-Bridge in this file

LOCAL ID i2c_mux_mtx_id;
LOCAL T_CSEM csem_i2c_mux = {
    .isemcnt = 1,
    .maxsem  = 1,
    .sematr  = TA_TFIFO,
};

static HAL_StatusTypeDef pca9548a_select_channel(uint8_t channel)
{
    uint8_t ch_mask = (1 << channel);
    return HAL_I2C_Master_Transmit(&hi2c1, PCA9548A_ADDR, &ch_mask, 1, 100);
}

LOCAL void com1(INT stacd, void *exinf);  // fungsi eksekusi task
LOCAL ID   com1_id;                         // nomor Task ID
LOCAL T_CTSK ctsk_com1 = {                     // informasi pembuatan task
    .itskpri  = 10,
    .stksz    = 1024,
    .task     = com1,
    .tskatr   = TA_HLNG | TA_RNG3,
};


/* fungsi usermain */
EXPORT INT usermain(void)
{
    tm_putstring((UB*)"Start User-main program.\n");
    // /* Buat & Jalankan Task */
    // com1_id = tk_cre_tsk(&ctsk_com1);
    // tk_sta_tsk(com1_id, 0);
    tk_slp_tsk(TMO_FEVR);
    return 0;
}
