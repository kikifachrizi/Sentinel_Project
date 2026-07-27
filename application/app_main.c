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


extern UART_HandleTypeDef huart1; // vcp (virtual com port)
extern UART_HandleTypeDef huart2; // com1

extern I2C_HandleTypeDef hi2c1; // for pca i2c mux

extern TIM_HandleTypeDef htim2; // for encoder 1
extern TIM_HandleTypeDef htim3; //for encoder 2
extern void MX_TIM2_Init(void);
extern void MX_TIM3_Init(void);



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

// start read sensor 
LOCAL void read_mpu6050(INT stacd, void *exinf);
LOCAL ID   mpu6050_id;
LOCAL T_CTSK ctsk_mpu6050 = {
    .itskpri  = 10,
    .stksz    = 1024,
    .task     = read_mpu6050,   
    .tskatr   = TA_HLNG | TA_RNG3,
};

LOCAL void read_ina219_1(INT stacd, void *exinf);
LOCAL ID   ina219_1_id;
LOCAL T_CTSK ctsk_ina219_1 = {
    .itskpri  = 10,
    .stksz    = 1024,
    .task     = read_ina219_1,
    .tskatr   = TA_HLNG | TA_RNG3,
};

LOCAL void read_ina219_2(INT stacd, void *exinf);
LOCAL ID   ina219_2_id;
LOCAL T_CTSK ctsk_ina219_2 = {
    .itskpri  = 10,
    .stksz    = 1024,
    .task     = read_ina219_2,
    .tskatr   = TA_HLNG | TA_RNG3,
};

LOCAL void read_enc1(INT stacd, void *exinf);
LOCAL ID   read_enc1_id;
LOCAL T_CTSK ctsk_enc1 = {
    .itskpri  = 10,
    .stksz    = 1024,
    .task     = read_enc1,
    .tskatr   = TA_HLNG | TA_RNG3,
};

LOCAL void read_enc2(INT stacd, void *exinf);
LOCAL ID   read_enc2_id;
LOCAL T_CTSK ctsk_enc2 = {
    .itskpri  = 10,
    .stksz    = 1024,
    .task     = read_enc2,
    .tskatr   = TA_HLNG | TA_RNG3,
};
// end read sensor 

LOCAL void com1(INT stacd, void *exinf);  // fungsi eksekusi task
LOCAL ID   com1_id;                         // nomor Task ID
LOCAL T_CTSK ctsk_com1 = {                     // informasi pembuatan task
    .itskpri  = 10,
    .stksz    = 1024,
    .task     = com1,
    .tskatr   = TA_HLNG | TA_RNG3,
};

LOCAL void motor1(INT stacd, void *exinf);
LOCAL ID   motor1_id;
LOCAL T_CTSK ctsk_motor1 = {
    .itskpri  = 10,
    .stksz    = 1024,
    .task     = motor1,
    .tskatr   = TA_HLNG | TA_RNG3,
};

LOCAL void com1(INT stacd, void *exinf)
{
    uint8_t rx_byte;

    tm_putstring((UB*)"Menampilkan data dari USART1 (PB14/PB15):\n");

    while(1) {
        if (HAL_UART_Receive(&huart1, &rx_byte, 1, 100) == HAL_OK) {
            if (rx_byte == '\r') {
                tm_putstring((UB*)"\r\n");
                HAL_UART_Transmit(&huart1, (uint8_t*)"\r\n", 2, 100);
            } else {
                tm_putchar((INT)rx_byte);
                HAL_UART_Transmit(&huart1, &rx_byte, 1, 100);
            }
        }
    }
}

LOCAL void read_enc1(INT stacd, void *exinf)
{


    while(1) {

    }
}

LOCAL void read_enc2(INT stacd, void *exinf)
{

    while(1) {

    }
}

LOCAL void motor1(INT stacd, void *exinf)
{
    while(1) {

    }
}

LOCAL void read_mpu6050(INT stacd, void *exinf)
{
    uint8_t who_am_i;
    int16_t ax, ay, az, gx, gy, gz;
    uint8_t data[14];
    uint8_t buf[2];

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(MUX_CH_MPU6050);

    buf[0] = MPU6050_PWR_MGMT;
    buf[1] = 0x00;
    HAL_I2C_Master_Transmit(&hi2c1, MPU6050_ADDR, buf, 2, 100);

    HAL_I2C_Mem_Read(&hi2c1, MPU6050_ADDR, MPU6050_WHO_AM_I,I2C_MEMADD_SIZE_8BIT, &who_am_i, 1, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);

    tm_printf((UB*)"MPU6050 (ch%d) WHO_AM_I: 0x%02X\r\n", MUX_CH_MPU6050, who_am_i);
    tk_dly_tsk(100);

    while (1) {
        tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
        pca9548a_select_channel(MUX_CH_MPU6050);
        HAL_I2C_Mem_Read(&hi2c1, MPU6050_ADDR, MPU6050_ACCEL,
                          I2C_MEMADD_SIZE_8BIT, data, 14, 100);
        tk_sig_sem(i2c_mux_mtx_id, 1);

        ax = (data[0] << 8) | data[1];
        ay = (data[2] << 8) | data[3];
        az = (data[4] << 8) | data[5];
        gx = (data[8] << 8) | data[9];
        gy = (data[10] << 8) | data[11];
        gz = (data[12] << 8) | data[13];

        tm_printf((UB*)"ACC: %6d %6d %6d | GYRO: %6d %6d %6d\r\n",
                  ax, ay, az, gx, gy, gz);
        tk_dly_tsk(200);
    }
}


LOCAL void read_ina219_1(INT stacd, void *exinf)
{
    const uint8_t dev_addr = INA219_ADDR;   // 0x40 << 1
    const uint8_t mux_ch   = MUX_CH_INA219_1;
    uint8_t data[2];
    int16_t shunt_raw, current_raw, power_raw, bus_raw;
    int32_t bus_mV, shunt_uV, current_mA, power_mW;
    HAL_StatusTypeDef ret;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(mux_ch);

    uint8_t cfg[] = {INA219_CONFIG, 0x39, 0x9F};
    ret = HAL_I2C_Master_Transmit(&hi2c1, dev_addr, cfg, 3, 100);
    if (ret != HAL_OK) {
        tm_printf((UB*)"INA219 ch%d config FAIL\r\n", mux_ch);
    }

    uint8_t cal[] = {INA219_CALIB, 0x10, 0x00};
    HAL_I2C_Master_Transmit(&hi2c1, dev_addr, cal, 3, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);
    tk_dly_tsk(100);

    while (1) {
        tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
        pca9548a_select_channel(mux_ch);

        ret = HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_BUS_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        if (ret != HAL_OK) { tk_sig_sem(i2c_mux_mtx_id, 1); tk_dly_tsk(500); continue; }
        bus_raw = (data[0] << 8) | data[1];
        bus_mV = (bus_raw >> 3) * 4;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_SHUNT_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        shunt_raw = (data[0] << 8) | data[1];
        shunt_uV = shunt_raw * 10;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_CURRENT,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        current_raw = (data[0] << 8) | data[1];
        current_mA = current_raw;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_POWER,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        power_raw = (data[0] << 8) | data[1];
        power_mW = power_raw * 2;
        tk_sig_sem(i2c_mux_mtx_id, 1);

        tm_printf((UB*)"[ch%d 0x40] Bus: %ld.%03ld V | Shunt: %ld.%03ld mV | Current: %ld.%ld mA | Power: %ld mW\r\n",
                  mux_ch,
                  bus_mV / 1000, abs(bus_mV % 1000),
                  shunt_uV / 1000, abs(shunt_uV % 1000),
                  current_mA / 10, abs(current_mA % 10),
                  power_mW);
        tk_dly_tsk(500);
    }
}

LOCAL void read_ina219_2(INT stacd, void *exinf)
{
    const uint8_t dev_addr = 0x44 << 1;
    const uint8_t mux_ch   = MUX_CH_INA219_2;
    uint8_t data[2];
    int16_t shunt_raw, current_raw, power_raw, bus_raw;
    int32_t bus_mV, shunt_uV, current_mA, power_mW;
    HAL_StatusTypeDef ret;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(mux_ch);

    uint8_t cfg[] = {INA219_CONFIG, 0x39, 0x9F};
    ret = HAL_I2C_Master_Transmit(&hi2c1, dev_addr, cfg, 3, 100);
    if (ret != HAL_OK) {
        tm_printf((UB*)"INA219 ch%d config FAIL\r\n", mux_ch);
    }

    uint8_t cal[] = {INA219_CALIB, 0x10, 0x00};
    HAL_I2C_Master_Transmit(&hi2c1, dev_addr, cal, 3, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);
    tk_dly_tsk(100);

    while (1) {
        tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
        pca9548a_select_channel(mux_ch);

        ret = HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_BUS_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        if (ret != HAL_OK) { tk_sig_sem(i2c_mux_mtx_id, 1); tk_dly_tsk(500); continue; }
        bus_raw = (data[0] << 8) | data[1];
        bus_mV = (bus_raw >> 3) * 4;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_SHUNT_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        shunt_raw = (data[0] << 8) | data[1];
        shunt_uV = shunt_raw * 10;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_CURRENT,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        current_raw = (data[0] << 8) | data[1];
        current_mA = current_raw;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_POWER,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        power_raw = (data[0] << 8) | data[1];
        power_mW = power_raw * 2;
        tk_sig_sem(i2c_mux_mtx_id, 1);

        tm_printf((UB*)"[ch%d 0x44] Bus: %ld.%03ld V | Shunt: %ld.%03ld mV | Current: %ld.%ld mA | Power: %ld mW\r\n",
                  mux_ch,
                  bus_mV / 1000, abs(bus_mV % 1000),
                  shunt_uV / 1000, abs(shunt_uV % 1000),
                  current_mA / 10, abs(current_mA % 10),
                  power_mW);
        tk_dly_tsk(500);
    }
}


/* fungsi usermain */
EXPORT INT usermain(void)
{
    tm_putstring((UB*)"Start User-main program.\n");
    /* Buat & Jalankan Task */
    com1_id = tk_cre_tsk(&ctsk_com1);
    tk_sta_tsk(com1_id, 0);

    // read_enc1_id = tk_cre_tsk(&ctsk_enc1);
    // tk_sta_tsk(read_enc1_id, 0);

    // read_enc2_id = tk_cre_tsk(&ctsk_enc2);
    // tk_sta_tsk(read_enc2_id, 0);

    motor1_id = tk_cre_tsk(&ctsk_motor1);
    tk_sta_tsk(motor1_id, 0);

    // mpu6050_id = tk_cre_tsk(&ctsk_mpu6050);
    // tk_sta_tsk(mpu6050_id, 0);

    ina219_1_id = tk_cre_tsk(&ctsk_ina219_1);
    tk_sta_tsk(ina219_1_id, 0);  // INA219 #1 di I2C3, addr 0x40

    ina219_2_id = tk_cre_tsk(&ctsk_ina219_2);
    tk_sta_tsk(ina219_2_id, 0);  // INA219 #2 di I2C3, addr 0x41 (A0=VCC)

    tk_slp_tsk(TMO_FEVR);
    return 0;
}
