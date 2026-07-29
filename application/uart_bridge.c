#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#include <stdio.h>
#include <string.h>

#include "lib/uart_bridge.h"

UartBridge com_pi = {.huart = &huart2, .name = "raspi"};
UartBridge debug = {.huart = &huart1, .name = "monitor"};

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
                // parse command working here
                vcpMonitor(com->name, com->rxBuf);
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