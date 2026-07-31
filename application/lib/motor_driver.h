#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H
#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

extern TIM_HandleTypeDef htim4; // motor 1
extern TIM_HandleTypeDef htim8; // motor 2

typedef struct{
    TIM_HandleTypeDef *htim;
    GPIO_TypeDef *dir1Port;
    GPIO_TypeDef *dir2Port;
    uint32_t pwmChannel;
    uint16_t dir1Pin;
    uint16_t dir2Pin;
} MotorController;

extern MotorController motorLeft , motorRight;

EXPORT void initMotorController(MotorController *motor);
EXPORT void setMotorSpeed(MotorController *motor, int spd);
EXPORT void setMotorSpeeds(int leftSpeed, int rightSpeed);
#endif