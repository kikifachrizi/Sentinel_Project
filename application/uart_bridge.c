#include <tk/tkernel.h>
#include <tm/tmonitor.h>
#include "stm32h5xx_hal.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lib/uart_bridge.h"
#include "lib/commands.h"

UartBridge com_pi = {.huart = &huart1, .name = "raspi"};
UartBridge debug = {.huart = &huart2, .name = "monitor"};

const int PID_INTERVAL = 1000 / PID_RATE;
unsigned long nextPID = PID_INTERVAL;
long lastMotorCommand = AUTO_STOP_INTERVAL;

EXPORT void vcpMonitor(const char *label,const char *msg){
    char out[220];
    snprintf(out, sizeof(out), "[%s] %s\r\n",label,msg); //this the one who pile the data through buffer
    HAL_UART_Transmit(debug.huart, (uint8_t*)out, strlen(out), 300); // this the one who sent to VCP
}

EXPORT void readCom(UartBridge *com){
    if (HAL_UART_Receive(com->huart, &com->rx_byte , 1, 100) == HAL_OK) {
        if (com->rx_byte == '\r' || com->rx_byte == '\n') {
            com->rxBuf[com->rxIndex] = '\0'; //closed the string
            if(com->rxIndex > 0){//this line tell buffer not empty
                vcpMonitor(com->name, com->rxBuf);
                parseCommand(com);
                runCommand(com);
            }
            com->rxIndex = 0;
        } else if (com->rxIndex < sizeof(com->rxBuf) - 1){
            com->rxBuf[com->rxIndex++] = com->rx_byte;
        }
    }
}


EXPORT void writeCom(UartBridge *com, const char *msg){
    HAL_UART_Transmit(com->huart, (uint8_t*)msg, strlen(msg), 300); 
}

EXPORT void parseCommand(UartBridge *com){
    sscanf(com->rxBuf, "%c %15s %15s", &com->cmd, com->argv1, com->argv2);
    com->arg1 = atol(com->argv1);
    com->arg2 = atol(com->argv2);
}