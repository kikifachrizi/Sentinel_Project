#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"
#include <stdio.h>

#include "lib/encoder.h"
#include "lib/uart_bridge.h"

EncoderState enc1 = { .htim = &htim2, .label = "1" };
EncoderState enc2 = { .htim = &htim3,  .label = "2" };

EXPORT void initEncoder(EncoderState *enc){
    HAL_TIM_Encoder_Start(enc->htim, TIM_CHANNEL_ALL);
}

EXPORT void readEncoder(EncoderState *enc){
    enc->counterVal = __HAL_TIM_GET_COUNTER(enc->htim); 
    enc->angleVal = (360 / 2400.0) * ((float)enc->counterVal);
}

EXPORT void resetEncoder(EncoderState *enc){
    enc->counterVal = 0;
}

EXPORT void resetEncoders(){
    resetEncoder(&enc1);
    resetEncoder(&enc2);
}

EXPORT void debugEncoder(EncoderState *enc){
    if (enc->counterVal != enc->pastCounterVal) {
        sprintf(enc->printMsg, "%s: %ld, %.2f\r\n", enc->label, enc->counterVal, enc->angleVal);
        writeCom(&com_pi, enc->printMsg);
    }
    enc->pastCounterVal = enc->counterVal;
}