#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#define MPU6050_ADDR 0x68 << 1
#define MPU6050_WHO_AM_I 0x75
#define MPU6050_PWR_MGMT 0x6B
#define MPU6050_ACCEL 0x3B
#define MPU6050_GYRO 0x43

#define INA219_ADDR 0x40 << 1
#define INA219_CONFIG 0x00
#define INA219_SHUNT_V 0x01
#define INA219_BUS_V 0x02
#define INA219_POWER 0x03
#define INA219_CURRENT 0x04
#define INA219_CALIB 0x05