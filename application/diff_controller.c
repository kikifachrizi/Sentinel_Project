#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#include "lib/diff_controller.h"
#define MAX_PWM 499

SetPointInfo leftPID = { .enc = &enc1 , .Kp = 20 , .Ki = 0 , .Kd = 12 , .Ko = 50};
SetPointInfo rightPID = { .enc = &enc2, .Kp = 20 , .Ki = 0 , .Kd = 12 , .Ko = 50 };

EXPORT void resetPID(SetPointInfo *pid){
    pid->TargetTicksPerFrame = 0.0;
    readEncoder(pid->enc);
    pid->Encoder = pid->enc->counterVal;
    pid->PrevEnc = pid->Encoder;
    pid->output = 0;
    pid->PrevInput = 0;
    pid->Iterm = 0;
}

EXPORT void resetAllPID(){
    resetPID(&leftPID);
    resetPID(&rightPID);
}

EXPORT void doPID(SetPointInfo *pid){
    long Perror;
    long output;
    int input;

    //update encoder reading
    readEncoder(pid->enc);
    pid->Encoder = pid->enc->counterVal;

    input = pid->Encoder - pid->PrevEnc;
    Perror = pid->TargetTicksPerFrame - input;
    output = (pid->Kp * Perror - pid->Kd * (input - pid->PrevInput) + pid->Iterm) / pid->Ko;
    
    pid->PrevEnc = pid->Encoder;
    output += pid->output;

    if(output >= MAX_PWM){
        output = MAX_PWM;
    } else if(output <= -MAX_PWM){
        output = -MAX_PWM;
    }else{
        pid->Iterm += pid->Ki * Perror;
    }

    pid->output = output;
    pid->PrevInput = input;
}

EXPORT void updatePID(){
    doPID(&leftPID);
    doPID(&rightPID);
}