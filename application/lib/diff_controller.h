#ifndef DIFF_CONTROLLER_H
#define DIFF_CONTROLLER_H
#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#include "uart_bridge.h"
#include "encoder.h"
#include "motor_driver.h"

#define MAX_PWM 499                             
#define KV_DEN  100     

typedef struct{
    EncoderState *enc;
    MotorController *motor;
    float Kp, Ki, Kd, Ko;
    long TargetTicksPerFrame;
    long Encoder;
    long PrevEnc;
    int PrevInput;
    int output;
    int Iterm;
    unsigned char PID_rate;
    long u_db_fwd, u_db_rev;      
    long kv_num_fwd, kv_num_rev;  
} SetPointInfo;

extern SetPointInfo leftPID , rightPID;
extern uint8_t moving;
extern long ffScalePct; /* feedforward scale in percent (0..150), applies to all motors */

EXPORT void resetPID(SetPointInfo *pid);
EXPORT void resetAllPID();
EXPORT void doPID(SetPointInfo *pid);
EXPORT void updatePID();
EXPORT long computeFeedforward(SetPointInfo *pid); /* pure fn: u_ff for pid's CURRENT TargetTicksPerFrame/ffScalePct - shared by doPID() and logTest() telemetry, single source of truth */
#endif
