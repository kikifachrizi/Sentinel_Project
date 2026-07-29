#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#include "uart_bridge.h"
#include "encoder.h"
#include "motor_driver.h"

typedef struct{
    EncoderState *enc;
    float Kp, Ki, Kd, Ko;
    long TargetTicksPerFrame;
    long Encoder;
    long PrevEnc;
    int PrevInput;
    int output;
    int Iterm;
    unsigned char PID_rate;
} SetPointInfo;

extern SetPointInfo leftPID , rightPID;

EXPORT void resetPID(SetPointInfo *pid);
EXPORT void resetAllPID();
EXPORT void doPID(SetPointInfo *pid);
EXPORT void updatePID();