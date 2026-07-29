#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

typedef struct {
    TIM_HandleTypeDef *htim;
    int32_t counterVal;
    int32_t pastCounterVal;
    const char *label;
    float angleVal;
    char printMsg[200];
}EncoderState;

extern TIM_HandleTypeDef htim2; // for encoder 1
extern TIM_HandleTypeDef htim3; //for encoder 2
extern EncoderState enc1 ,enc2;

EXPORT void initEncoder(EncoderState *enc);
EXPORT void readEncoder(EncoderState *enc);
EXPORT void resetEncoder(EncoderState *enc);
EXPORT void resetEncoders();
EXPORT void debugEncoder(EncoderState *enc);