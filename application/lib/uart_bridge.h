#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

typedef struct{
    UART_HandleTypeDef *huart;
    uint8_t rx_byte;
    char rxBuf[64];
    uint8_t rxIndex;
    char name[10];
} UartBridge;

extern UartBridge com_pi;
extern UartBridge debug;
extern UART_HandleTypeDef huart1; // vcp (virtual com port)
extern UART_HandleTypeDef huart2; // com1

EXPORT void vcpMonitor(const char *label , const char *msg); //function for serial monitor (send data to terminal for debugging)
EXPORT void writeCom(UartBridge *com, const char *msg); // function for send data to other device
EXPORT void readCom(UartBridge *com); // function for read data from other device