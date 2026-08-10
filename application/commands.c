#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"
#include "lib/commands.h"
#include "lib/uart_bridge.h"
#include "lib/motor_driver.h"
#include "lib/diff_controller.h"
#include "lib/sensors.h"
#include "lib/log_test.h"
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
            snprintf(reply, sizeof(reply), "%ld %ld %ld %ld\r\n", enc1.counterVal, enc2.counterVal, leftPID.output , rightPID.output);
            writeCom(com, reply);
            break;
        }
        case RESET_ENCODERS:
            resetEncoders();
            resetAllPID();
            writeCom(com, "OK\r\n");
            break;
        case UPDATE_PID: {
            int p , i , d, o;
            if(sscanf(com->argv1, "%d:%d:%d:%d", &p,&i,&d,&o) == 4){
                leftPID.Kp = p; leftPID.Ki = i; leftPID.Kd = d; leftPID.Ko = o;
                rightPID.Kp = p; rightPID.Ki = i; rightPID.Kd = d; rightPID.Ko = o;
                writeCom(com, "OK\r\n"); 
            }
            break;
        }
        case READ_IMU: {
            char reply[80];
            readMPU6050(&imu);
            snprintf(reply, sizeof(reply), "%d %d %d %d %d %d\r\n", imu.ax, imu.ay, imu.az , imu.gx, imu.gy ,imu.gz);
            writeCom(com, reply);
            break;
        }

        case READ_INA219: {
            char reply[100];
            readINA219(&ina1);
            readINA219(&ina2);
            snprintf(reply, sizeof(reply), "%ld %ld %ld %ld\r\n", ina1.current_mA, ina1.power_mW , ina2.current_mA, ina2.power_mW);
            writeCom(com, reply);
            break;
        }

        case PING:
            writeCom(com, "OK\r\n");
            break;
        
        case GET_BAUDRATE: {
            char reply[16];
            snprintf(reply, sizeof(reply), "%lu\r\n", com->huart->Init.BaudRate);
            writeCom(com, reply);
            break;
        }
        case LOG_TEST:
            logTargetL = com->arg1;
            logTargetR = com->arg2;
            logActive = 1;
            writeCom(com, "OK\r\n");
            break;
    }
}