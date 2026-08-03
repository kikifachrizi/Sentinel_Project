#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#include "lib/motor_driver.h"

MotorController motorLeft = {
        .htim = &htim8, .pwmChannel = TIM_CHANNEL_2,
        .dir1Port = GPIOA, .dir1Pin = GPIO_PIN_5,
        .dir2Port = GPIOC, .dir2Pin = GPIO_PIN_12,
};

MotorController motorRight = {
        .htim = &htim4, .pwmChannel = TIM_CHANNEL_1,
        .dir1Port = GPIOC, .dir1Pin = GPIO_PIN_4,
        .dir2Port = GPIOC, .dir2Pin = GPIO_PIN_10,
};

EXPORT void initMotorController(MotorController *motor){
        HAL_TIM_PWM_Start(motor->htim, motor->pwmChannel);
}

EXPORT void setMotorSpeed(MotorController *motor ,int spd){
        if(spd >= 0){
                HAL_GPIO_WritePin(motor->dir1Port, motor->dir1Pin,GPIO_PIN_SET);
                HAL_GPIO_WritePin(motor->dir2Port, motor->dir2Pin,GPIO_PIN_RESET);
        } else {
                HAL_GPIO_WritePin(motor->dir1Port, motor->dir1Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(motor->dir2Port, motor->dir2Pin, GPIO_PIN_SET);
                spd = -spd;
        }
        __HAL_TIM_SET_COMPARE(motor->htim, motor->pwmChannel, (uint32_t)spd);
}

EXPORT void setMotorSpeeds(int leftSpeed, int rightSpeed){
        setMotorSpeed(&motorLeft, leftSpeed);
        setMotorSpeed(&motorRight, rightSpeed);
}
