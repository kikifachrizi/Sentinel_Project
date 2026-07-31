#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#define MPU6050_WHO_AM_I 0x75
#define MPU6050_PWR_MGMT 0x6B
#define MPU6050_ACCEL 0x3B
#define MPU6050_GYRO 0x43

#define INA219_CONFIG 0x00
#define INA219_SHUNT_V 0x01
#define INA219_BUS_V 0x02
#define INA219_POWER 0x03
#define INA219_CURRENT 0x04
#define INA219_CALIB 0x05


typedef struct {
    I2C_HandleTypeDef *hi2c;
    uint8_t addr;
    uint8_t muxChannel; //channel on mux, show this sensor connected
    int16_t ax, ay, az;
    int16_t gx, gy, gz;
} IMUSensor;

typedef struct {
    I2C_HandleTypeDef *hi2c;
    uint8_t addr;
    uint8_t muxChannel;
    const char *label;
    int32_t bus_mV, shunt_uV, current_mA, power_mW;
} INASensor;

typedef struct {
    I2C_HandleTypeDef *hi2c;
    uint8_t addr;
} MUX;

extern INASensor ina1, ina2;
extern I2C_HandleTypeDef hi2c1; // for pca i2c mux
extern MUX mux;
extern IMUSensor imu;

EXPORT void initSensors(void);
EXPORT void initMpu6050(IMUSensor *imu);
EXPORT void initINA219(INASensor *ina);

EXPORT void readINA219(INASensor *ina);
EXPORT void readMPU6050(IMUSensor *imu);
EXPORT void debugINA219(INASensor *ina);
EXPORT void debugMPU6050(IMUSensor *imu);