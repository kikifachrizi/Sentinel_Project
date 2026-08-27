#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"
#include "uart_bridge.h" /* for diagINA219()'s UartBridge* - see sensors.c */

#define MPU6050_WHO_AM_I 0x75
#define MPU6050_PWR_MGMT 0x6B
#define MPU6050_ACCEL 0x3B
#define MPU6050_GYRO 0x43

#define MPU6050_SMPLRT_DIV   0x19
#define MPU6050_DLPF_CONFIG  0x1A /* datasheet calls this register "CONFIG" - renamed here to not clash with INA219_CONFIG */
#define MPU6050_GYRO_CONFIG  0x1B
#define MPU6050_ACCEL_CONFIG 0x1C

/* IMU_DIAG ('k'): explicit, VERIFIED config - written then read back, same
 * H1 lesson as INA219 (don't trust a write silently landed). These values
 * are the chip's own power-on-reset defaults (0x00 each) - a deliberately
 * neutral choice, not a new range picked without discussion; see sensors.c. */
#define MPU6050_SMPLRT_DIV_VALUE   0x00
#define MPU6050_DLPF_CONFIG_VALUE  0x03 /* DLPF off -> gyro output rate 8kHz */
#define MPU6050_GYRO_CONFIG_VALUE  0x00 /* FS_SEL=0    -> +-250 deg/s, 131.0 LSB/(deg/s) */
#define MPU6050_ACCEL_CONFIG_VALUE 0x00 /* AFS_SEL=0   -> +-2g,        16384 LSB/g */

#define INA219_CONFIG 0x00
#define INA219_SHUNT_V 0x01
#define INA219_BUS_V 0x02
#define INA219_POWER 0x03
#define INA219_CURRENT 0x04
#define INA219_CALIB 0x05

/* Single source of truth for what initINA219() writes AND what INA_DIAG
 * expects to read back from 0x05 - see sensors.c for derivation.
 * CAL=0x1000: R_SHUNT=0.1ohm (confirmed via multimeter), Max_Expected_Current=3.2A,
 * Current_LSB=0.1mA/bit - verified against multimeter to <1mA, see sensors.c. */
#define INA219_CONFIG_VALUE 0x399F
#define INA219_CAL_VALUE    0x1000


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
    int32_t current_raw;        /* last raw CURRENT register (0x04), sign-extended, NO offset/scale applied - for diagnostics (REGRESI report) */
    int32_t current_offset_raw; /* zero-current bias in RAW register units (NOT mA - see current_mA derivation in readINA219()), auto-measured once per sensor in initINA219() while motors are guaranteed off */
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

EXPORT HAL_StatusTypeDef readINA219(INASensor *ina); /* MASALAH 1 fix: reports whether ALL 4 registers were freshly read this call - guards every read now, not just the first, so a mid-sequence failure can't leave a field holding stale reused-buffer content. Old void-ignoring call sites still compile unchanged. */
EXPORT HAL_StatusTypeDef readMPU6050(IMUSensor *imu); /* MASALAH 1 fix: previously never checked the I2C read status - a failed read left ax..gz holding UNINITIALIZED STACK GARBAGE, not stale-but-real data. Now returns status and leaves ax..gz untouched on failure. */
EXPORT void debugINA219(INASensor *ina);
EXPORT void debugMPU6050(IMUSensor *imu);
EXPORT void diagINA219(INASensor *ina, UartBridge *com); /* raw register/I2C diagnostic - written back via writeCom(com,...), NOT tm_printf, so it lands on the same port the 'j' request came in on */
EXPORT int16_t readShuntRawIndependent(INASensor *ina); /* standalone I2C read of reg 0x01, deliberately NOT sharing code with readINA219() - see sensors.c */
EXPORT void diagIMU(IMUSensor *imu, UartBridge *com); /* identity/config verify + 10s raw stream + timing, see sensors.c. Blocks ~10s - call from a task, not comTask. */