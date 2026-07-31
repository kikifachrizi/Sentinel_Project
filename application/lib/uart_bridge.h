#ifndef UART_BRIDGE_H
#define UART_BRIDGE_H
#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

//PID States
#define PID_RATE 30 //Hz
#define AUTO_STOP_INTERVAL 2000

extern const int PID_INTERVAL;
extern unsigned long nextPID;
extern long lastMotorCommand;

typedef struct{
    UART_HandleTypeDef *huart;
    uint8_t rx_byte;
    char rxBuf[64];
    uint8_t rxIndex;
    char name[10];
    char cmd;
    char argv1[16], argv2[16];
    long arg1, arg2;
    uint8_t arg, index;
} UartBridge;

extern UartBridge com_pi;
extern UartBridge debug;
extern UART_HandleTypeDef huart1; // vcp (virtual com port)
extern UART_HandleTypeDef huart2; // com1

EXPORT void vcpMonitor(const char *label , const char *msg); //function for serial monitor (send data to terminal for debugging)
EXPORT void writeCom(UartBridge *com, const char *msg); // function for send data to other device
EXPORT void readCom(UartBridge *com); // function for read data from other device
EXPORT void parseCommand(UartBridge *com);
#endif