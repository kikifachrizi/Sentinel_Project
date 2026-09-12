#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#include "lib/diff_controller.h"

uint8_t moving = 0;
long ffScalePct = 100;
/* u_db_fwd/rev, kv_num_fwd/rev: measured via static sweep - don't hand-edit */
SetPointInfo leftPID = { .enc = &enc1 , .motor = &motorLeft, .Kp = 70 , .Ki = 0 , .Kd = 110 , .Ko = 50,
                          .u_db_fwd = 157, .kv_num_fwd = 178, .u_db_rev = 142, .kv_num_rev = 190 };
SetPointInfo rightPID = { .enc = &enc2, .motor = &motorRight, .Kp = 70 , .Ki = 0 , .Kd = 110 , .Ko = 50,
                           .u_db_fwd = 146, .kv_num_fwd = 155, .u_db_rev = 100, .kv_num_rev = 201 };

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

/* Pure function so doPID() and logTest()'s telemetry share one source of
 * truth for the feedforward term instead of duplicating the formula. */
EXPORT long computeFeedforward(SetPointInfo *pid){
    // u_ff = (u_db + k_v*|target|) * ffScalePct, signed to match target direction
    long u_ff = 0;
    if (pid->TargetTicksPerFrame != 0) {
        long tgt = pid->TargetTicksPerFrame;
        long mag = (tgt > 0) ? tgt : -tgt;

        long u_db   = (tgt > 0) ? pid->u_db_fwd   : pid->u_db_rev;
        long kv_num = (tgt > 0) ? pid->kv_num_fwd : pid->kv_num_rev;

        // single division at the end for max precision, no floats
        u_ff = ((u_db * KV_DEN + kv_num * mag) * ffScalePct) / (KV_DEN * 100L);

        if (tgt < 0) u_ff = -u_ff;
    }
    return u_ff;
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

    long u_ff = computeFeedforward(pid); /* parallel path - never written into pid->output */

    output = (pid->Kp * Perror - pid->Kd * (input - pid->PrevInput) + pid->Iterm) / pid->Ko;

    pid->PrevEnc = pid->Encoder;
    output += pid->output; /* pure PI accumulator - without u_ff */

    /* Velocity form means pid->output IS the integrator (Ki=0, so Iterm-based
     * anti-windup below never fires). Clamp the accumulator to whatever
     * headroom remains after u_ff, not to +-MAX_PWM absolute, so it can't keep
     * accumulating past what's actually executable once u_ff is a separate
     * path. Window width (hi-lo) is a constant 2*MAX_PWM regardless of u_ff,
     * so hi is always > lo. */
    long hi =  MAX_PWM - u_ff;
    long lo = -MAX_PWM - u_ff;
    if(output > hi){
        output = hi;
    } else if(output < lo){
        output = lo;
    }

    pid->output = output; /* PI accumulator state - without u_ff, so it isn't double-counted next frame */

    long pwm_final = u_ff + pid->output;

    /* Redundant given the headroom clamp above, kept as a cheap safety net
     * in case the ordering/formula above changes later. */
    if(pwm_final >= MAX_PWM){
        pwm_final = MAX_PWM;
    } else if(pwm_final <= -MAX_PWM){
        pwm_final = -MAX_PWM;
    } else {
        /* Anti-windup: gates Iterm on final PWM saturation. Inert while Ki=0,
         * kept ready for if Ki is used later. */
        pid->Iterm += pid->Ki * Perror;
    }

    pid->PrevInput = input;
    setMotorSpeed(pid->motor, pwm_final);
}

EXPORT void updatePID(){
    doPID(&leftPID);
    doPID(&rightPID);
}
