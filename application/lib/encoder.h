#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

typedef struct {
    TIM_HandleTypeDef *htim;
    int32_t counterVal = 0;
    int32_t pastCounterVal = 0;
    int32_t angleVal = 0;
    char printMsg[200]={'\0'};
}EncoderState;

extern EncoderState enc1 enc2;
EXPORT void readEncoder(EncoderState *enc);
EXPORT void resetEncoder(EncoderState *enc);
EXPORT void resetEncoders();
