#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"
#include "lib/commands.h"
#include "lib/uart_bridge.h"
#include "lib/motor_driver.h"
#include "lib/diff_controller.h"
#include <stdio.h>

EXPORT void runCommand(UartBridge *com){
    switch(com->cmd){
        case MOTOR_RAW_PWM:
            moving = 0;
            setMotorSpeeds(com->arg1, com->arg2);
            writeCom(com, "OK\r\n");
            break;
        case MOTOR_SPEEDS:
            moving = 1;
            leftPID.TargetTicksPerFrame = com->arg1;
            rightPID.TargetTicksPerFrame = com->arg2;
            writeCom(com, "OK\r\n");
            break;
        case READ_ENCODERS: {
            char reply[32];
            readEncoder(&enc1);
            readEncoder(&enc2);
            snprintf(reply, sizeof(reply), "%ld %ld\r\n", enc1.counterVal, enc2.counterVal);
            writeCom(com, reply);
            break;
        }
        case RESET_ENCODERS:
            resetEncoders();
            resetAllPID();
            writeCom(com, "OK\r\n");
            break;
    }
}