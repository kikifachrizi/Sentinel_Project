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

/* Interrupt-driven RX: the ISR captures each byte as it arrives regardless
 * of what task is running, avoiding the single-byte RDR overrun that a
 * blocking HAL_UART_Receive() poll would hit while pidTask holds the CPU.
 * readCom() just drains this software ring buffer (non-blocking). com_pi
 * (huart1) only - debug/huart2 never receives. */
#define UART_RX_RING_SIZE 64
EXPORT void uartRxStart(void); /* arm HAL_UART_Receive_IT() - call once from usermain() after huart1 is ready */
EXPORT void uartRxIsrPush(void); /* call only from HAL_UART_RxCpltCallback() (ISR context) - see stm32h5xx_it.c */
#endif