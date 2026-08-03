#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"
#include "lib/commands.h"
#include "lib/uart_bridge.h"
#include "lib/motor_driver.h"
#include "lib/diff_controller.h"

EXPORT void runCommand(UartBridge *com){
    switch(com->cmd){
        case MOTOR_RAW_PWM:
            moving = 0;
            setMotorSpeeds(com->arg1, com->arg2);
            break;
        case MOTOR_SPEEDS:
            moving = 1;
            leftPID.TargetTicksPerFrame = com->arg1;
            rightPID.TargetTicksPerFrame = com->arg2;
            break;
        case READ_ENCODERS:
            debugEncoder(&enc1);
            debugEncoder(&enc2);
            break;
        case RESET_ENCODERS:
            resetEncoders();
            resetAllPID();
    }
}