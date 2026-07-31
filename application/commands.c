#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"
#include "lib/commands.h"
#include "lib/uart_bridge.h"
#include "lib/motor_driver.h"
#include "lib/diff_controller.h"

EXPORT void runCommand(UartBridge *com){
    switch(com->cmd){
        case MOTOR_RAW_PWM:
            setMotorSpeeds(com->arg1, com->arg2);
            break;
        case MOTOR_SPEEDS:
            leftPID.TargetTicksPerFrame = com->arg1;
            rightPID.TargetTicksPerFrame = com->arg2;
            break;
    }
}