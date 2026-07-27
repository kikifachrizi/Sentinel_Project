#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

extern TIM_HandleTypeDef htim4; // motor 1
extern TIM_HandleTypeDef htim8; // motor 2
extern void MX_GPIO_Init(void); // motor direction high/low
extern void MX_TIM4_Init(void); // motor 1 pwm pin
extern void MX_TIM8_Init(void); // motor 2 pwm pin

#define DIR1_LEFT_PIN GPIO_PIN_4
#define DIR2_LEFT_PIN GPIO_PIN_10
#define DIR1_RIGHT_PIN GPIO_PIN_12
#define DIR2_RIGHT_PIN GPIO_PIN_5

EXPORT void initMotorController();
EXPORT void setMotorSpeed(int i, int spd);
EXPORT void setMotorSpeeds(int leftSpeed, int rightSpeed);
EXPORT void testMotor();