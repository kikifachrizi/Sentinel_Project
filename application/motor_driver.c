#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#include "lib/motor_driver.h"

EXPORT void initMotorController(){

}

EXPORT void setMotorSpeed(int i,int spd){

}

EXPORT void setMotorSpeeds(int leftSpeed, int rightSpeed){

}

EXPORT void testMotor(){
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, 0);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_10, 1);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_12, 1);
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
        TIM4->CCR1 = 500;
        TIM8->CCR2 = 500;
        HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1);
        HAL_TIM_PWM_Start(&htim8, TIM_CHANNEL_2);
        tk_dly_tsk(5000);


        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, 0);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_10, 0);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_12, 0);
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
        TIM4->CCR1 = 0;
        TIM8->CCR2 = 0;
        tk_dly_tsk(3000);

        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, 1);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_10, 0);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_12, 0);
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
        TIM4->CCR1 = 300;
        TIM8->CCR2 = 300;
        HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1);
        HAL_TIM_PWM_Start(&htim8, TIM_CHANNEL_2);
        tk_dly_tsk(5000);

        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, 0);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_10, 0);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_12, 0);
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
        TIM4->CCR1 = 0;
        TIM8->CCR2 = 0;
        tk_dly_tsk(3000);
}