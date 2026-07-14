# Sentinel Project (Low level system docs)
this repository for Sentinel project (enhanced for TIFA) using mT-Kernel 3.0 and TiniyML for AI-based ccontrolling system enhancement
# Pin Configuration
---
### Serial Com
##### VCP
- USART2 (PA2/PA3) connected to the STLINKV3EC Virtual COM port.
##### External Com port
- RX = PB15
- TX = PB14

### Motor DC
###### Right Motor :
- dir1 = PC10
- dir2 = PC4
- pwm = PB6
###### Left Motor :
- dir1 = PA5
- dir2 = PC12
- pwm = PB13

### Encoder 
###### Right Encoder :
- ch1 = PA7
- ch2 = PA6
###### Left Encoder :
- ch1 = PA0
- ch2 = PA1

### PCA9548A
##### I2C
- SDA = PB7
- SCL = PB8

### MPU6050
- ###### Connected to SDA_Ch1 & SCL_Ch1 PCA9548A

### INA219 x 2 unit
- ###### Connected to SDA_Ch2 & SCL_Ch2 PCA9548A

### External Power System for NUCLEO-H533RE

# System Architecture 




## Sentinel resources : 
### MPU6050 (I2C) → micro testing
- https://dev.to/carolineee/how-to-code-mpu-6050-on-stm32cubeide-1lle
- https://github.com/MarcoMiglio/stm32_mpu6050

### PCA9548A (I2C) → micro testing
- https://www.micropeta.com/video110
- https://github.com/jtainer/i2c-mux

### INA219 (I2C) → micro testing
- https://github.com/thibeaux/STM32_INA219_Library/tree/main

---

### How to add tinyML model to mT-kernel 3.0
### Communicate STM32 NUCLEO-H533RE → Raspberry Pi 5 (ROS2 Jazzy)

---
## Pure need my logic not AI
### PID on mT-kernel 3.0
### Combined PID + tinyML for friction optimization
---
### decide fusion sensor on ROS2 or mT-kernel 3.0
### get all data 
- IMU
- Current Sensor
- Odometry
- Lidar