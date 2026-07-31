#include <tk/tkernel.h>
#include <tm/tmonitor.h>
#include <stdlib.h>
#include "stm32h5xx_hal.h"
#include "lib/sensors.h"

MUX mux = { .hi2c = &hi2c1 , .addr = 0x70 << 1};
IMUSensor imu = { .hi2c = &hi2c1 , .addr = 0x68 << 1 , .muxChannel = 0};
INASensor ina1 = { .hi2c = &hi2c1 , .addr = 0x40 << 1, .muxChannel = 1 };
INASensor ina2 = { .hi2c = &hi2c1 , .addr = 0x44 << 1, .muxChannel = 2 };

LOCAL ID i2c_mux_mtx_id;
LOCAL T_CSEM csem_i2c_mux = { .isemcnt = 1, .maxsem = 1 , .sematr = TA_TFIFO };

EXPORT void initSensors(void){
    i2c_mux_mtx_id = tk_cre_sem(&csem_i2c_mux);
}

static HAL_StatusTypeDef pca9548a_select_channel(MUX *mux,uint8_t channel)
{
    uint8_t ch_mask = (1 << channel);
    return HAL_I2C_Master_Transmit(mux->hi2c, mux->addr, &ch_mask, 1, 100);
}

EXPORT void initMpu6050(IMUSensor *imu){
    uint8_t who_am_i;
    uint8_t buf[2];
    
    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(&mux,imu->muxChannel);
    
    buf[0] = MPU6050_PWR_MGMT;
    buf[1] = 0x00;
    HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, buf, 2, 100);
    
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_WHO_AM_I,I2C_MEMADD_SIZE_8BIT, &who_am_i, 1, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);
    
    tm_printf((UB*)"MPU6050 (ch%d) WHO_AM_I: 0x%02X\r\n", imu->muxChannel, who_am_i);
    tk_dly_tsk(100);
}

EXPORT void initINA219(INASensor *ina){
    const uint8_t dev_addr = ina->addr;   // 0x40 << 1
    const uint8_t mux_ch   = ina->muxChannel;

    HAL_StatusTypeDef ret;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(&mux,mux_ch);

    uint8_t cfg[] = {INA219_CONFIG, 0x39, 0x9F};
    ret = HAL_I2C_Master_Transmit(ina->hi2c, dev_addr, cfg, 3, 100);
    if (ret != HAL_OK) {
        tm_printf((UB*)"INA219 ch%d config FAIL\r\n", mux_ch);
    }

    uint8_t cal[] = {INA219_CALIB, 0x10, 0x00};
    HAL_I2C_Master_Transmit(ina->hi2c, dev_addr, cal, 3, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);
    tk_dly_tsk(100);
}

EXPORT void readMPU6050(IMUSensor *imu)
{
    uint8_t data[14];
    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(&mux,imu->muxChannel);
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_ACCEL,
                        I2C_MEMADD_SIZE_8BIT, data, 14, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);

    imu->ax = (data[0] << 8) | data[1];
    imu->ay = (data[2] << 8) | data[3];
    imu->az = (data[4] << 8) | data[5];
    imu->gx = (data[8] << 8) | data[9];
    imu->gy = (data[10] << 8) | data[11];
    imu->gz = (data[12] << 8) | data[13];
}

EXPORT void readINA219(INASensor *ina)
{
    uint8_t data[2];
    int16_t shunt_raw, current_raw, power_raw, bus_raw;
    const uint8_t mux_ch   = ina->muxChannel;
    const uint8_t dev_addr = ina->addr;   // 0x40 << 1
    HAL_StatusTypeDef ret;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(&mux,mux_ch);

    ret = HAL_I2C_Mem_Read(ina->hi2c, dev_addr, INA219_BUS_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);

    if (ret != HAL_OK) { 
        tk_sig_sem(i2c_mux_mtx_id, 1); 
        return;
    }

    bus_raw = (data[0] << 8) | data[1];
    ina->bus_mV = (bus_raw >> 3) * 4;

    HAL_I2C_Mem_Read(ina->hi2c, dev_addr, INA219_SHUNT_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
    shunt_raw = (data[0] << 8) | data[1];
    ina->shunt_uV = shunt_raw * 10;

    HAL_I2C_Mem_Read(ina->hi2c, dev_addr, INA219_CURRENT,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
    current_raw = (data[0] << 8) | data[1];
    ina->current_mA = current_raw;

    HAL_I2C_Mem_Read(ina->hi2c, dev_addr, INA219_POWER,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
    power_raw = (data[0] << 8) | data[1];
    ina->power_mW = power_raw * 2;
    tk_sig_sem(i2c_mux_mtx_id, 1);

}

EXPORT void debugINA219(INASensor *ina){
    tm_printf((UB*)"[ch%d 0x40] Bus: %ld.%03ld V | Shunt: %ld.%03ld mV | Current: %ld.%ld mA | Power: %ld mW\r\n",
    ina->muxChannel,
    ina->bus_mV / 1000, abs(ina->bus_mV % 1000),
    ina->shunt_uV / 1000, abs(ina->shunt_uV % 1000),
    ina->current_mA / 10, abs(ina->current_mA % 10),
    ina->power_mW);    
}

EXPORT void debugMPU6050(IMUSensor *imu){
    tm_printf((UB*)"ACC: %6d %6d %6d | GYRO: %6d %6d %6d\r\n",
                imu->ax, imu->ay, imu->az, imu->gx, imu->gy, imu->gz);
}
