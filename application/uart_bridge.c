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

/* FIX RX starvation - lihat catatan panjang di uart_bridge.h. Ring buffer
 * single-producer (ISR, uartRxIsrPush())/single-consumer (comTask, readCom())
 * - aman tanpa mutex: ISR cuma tulis s_rxHead, task cuma tulis s_rxTail,
 * masing-masing cuma BACA index milik pihak lain untuk cek kosong/penuh.
 * Semua index uint8_t (store/load 1 instruksi, atomik terhadap ISR di
 * Cortex-M33 - tidak ada baca-ubah-tulis lintas ISR/task). */
static volatile uint8_t s_rxRing[UART_RX_RING_SIZE];
static volatile uint8_t s_rxHead;
static volatile uint8_t s_rxTail;
static volatile uint8_t s_rxByteIt; /* landing byte utk HAL_UART_Receive_IT() - com_pi/huart1 saja */

EXPORT void uartRxStart(void){
    HAL_UART_Receive_IT(com_pi.huart, (uint8_t*)&s_rxByteIt, 1);
}

EXPORT void uartRxIsrPush(void){
    uint8_t next = (uint8_t)((s_rxHead + 1u) % UART_RX_RING_SIZE);
    if (next != s_rxTail) { /* buffer tidak penuh - kalau penuh, byte ini didrop (jarang, 64 byte cukup) */
        s_rxRing[s_rxHead] = s_rxByteIt;
        s_rxHead = next;
    }
    HAL_UART_Receive_IT(com_pi.huart, (uint8_t*)&s_rxByteIt, 1); /* re-arm SELALU, walau buffer penuh */
}

EXPORT void readCom(UartBridge *com){
    if (s_rxTail == s_rxHead) return; /* non-blocking: belum ada byte baru */
    com->rx_byte = s_rxRing[s_rxTail];
    s_rxTail = (uint8_t)((s_rxTail + 1u) % UART_RX_RING_SIZE);

    /* Logika di bawah ini TIDAK diubah - persis sama seperti versi polling
     * sebelumnya, cuma sumber com->rx_byte yang berubah (ring buffer,
     * bukan HAL_UART_Receive() langsung). */
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


EXPORT void writeCom(UartBridge *com, const char *msg){
    HAL_UART_Transmit(com->huart, (uint8_t*)msg, strlen(msg), 300); 
}

EXPORT void parseCommand(UartBridge *com){
    sscanf(com->rxBuf, "%c %15s %15s", &com->cmd, com->argv1, com->argv2);
    com->arg1 = atol(com->argv1);
    com->arg2 = atol(com->argv2);
}