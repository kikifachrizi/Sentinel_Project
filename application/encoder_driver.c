#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#include "lib/encoder.h"

EncoderState enc1 = { .htim = &htim2 };
EncoderState enc2 = { .htim = &htim3 };

EXPORT void readEncoder(EncoderState *enc){
    enc->counterVal = enc->htim;
    if(enc->counterVal != enc->pastCounterVal) {
        enc->angleVal = (360 / 2400.0) * ((float)enc->counterVal);
        sprintf(enc->printMsg, "Counter 1: %d, Angle: %.2f\r\n", enc->counterVal, enc->angleVal);
        // HAL_UART_Transmit(&huart1, (uint8_t*)enc->printMsg, strlen(enc->printMsg), 300); diganti fungsi yang mengirim ke huart1
    }
    enc->pastCounterVal = enc->counterVal;
    tk_dly_tsk(100);
}

EXPORT void resetEncoder(EncoderState *enc){
    enc->counterVal = 0;
}

EXPORT void resetEncoders(){
    resetEncoder(enc1);
    resetEncoder(enc2);
}