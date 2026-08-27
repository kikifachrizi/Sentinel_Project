#include <tk/tkernel.h>
#include "stm32h5xx_hal.h"

#include "lib/diff_controller.h"

uint8_t moving = 0;
long ffScalePct = 100;
/* u_db_fwd/rev, kv_num_fwd/rev: hasil pengukuran static sweep - jangan diubah */
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

/* Feedforward, sebagai fungsi murni (tanpa efek samping) supaya doPID() dan
 * logTest() (telemetry uffL/uffR) memakai satu sumber kebenaran yang sama -
 * tidak ada duplikasi rumus yang bisa drift kalau salah satu diubah nanti. */
EXPORT long computeFeedforward(SetPointInfo *pid){
    // ==== Feedforward: u_ff = (u_db + k_v*|target|) * ffScalePct, bertanda ====
    long u_ff = 0;
    if (pid->TargetTicksPerFrame != 0) {
        long tgt = pid->TargetTicksPerFrame;
        long mag = (tgt > 0) ? tgt : -tgt;

        long u_db   = (tgt > 0) ? pid->u_db_fwd   : pid->u_db_rev;
        long kv_num = (tgt > 0) ? pid->kv_num_fwd : pid->kv_num_rev;

        // Satu pembagian di akhir: presisi maksimal, tanpa float.
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

    long u_ff = computeFeedforward(pid); /* jalur paralel - TIDAK PERNAH ditulis ke pid->output */

    output = (pid->Kp * Perror - pid->Kd * (input - pid->PrevInput) + pid->Iterm) / pid->Ko;

    pid->PrevEnc = pid->Encoder;
    output += pid->output; /* akumulator PI murni - TANPA u_ff, sama seperti sebelumnya */

    /* REVISI: clamp akumulator ke HEADROOM yang tersisa setelah u_ff, bukan
     * ke +-MAX_PWM absolut. Velocity form (output += ...) berarti pid->output
     * ITU SENDIRI adalah integrator - dengan Ki=0, Iterm selalu nol dan
     * anti-windup berbasis Iterm di bawah tidak pernah aktif. Clamp lama
     * (+-MAX_PWM absolut) cuma benar selama output==pwm_final; begitu u_ff
     * jadi jalur terpisah, akumulator bisa terus menumpuk di atas apa yang
     * sebenarnya bisa dieksekusi (pwm_final sudah mentok duluan) - clamp di
     * bawah ini yang mencegahnya. Lebar jendela (hi-lo) selalu 2*MAX_PWM
     * konstan berapa pun u_ff, jadi hi selalu > lo (tidak pernah invalid). */
    long hi =  MAX_PWM - u_ff;
    long lo = -MAX_PWM - u_ff;
    if(output > hi){
        output = hi;
    } else if(output < lo){
        output = lo;
    }

    pid->output = output; /* state akumulator PI - TANPA u_ff, supaya tidak double-counted frame berikutnya */

    long pwm_final = u_ff + pid->output;

    /* Safety net: secara matematis sudah redundan (headroom clamp di atas
     * menjamin pwm_final ada di dalam +-MAX_PWM), dipertahankan murah untuk
     * melindungi kalau urutan/rumus di atas berubah lagi nanti. */
    if(pwm_final >= MAX_PWM){
        pwm_final = MAX_PWM;
    } else if(pwm_final <= -MAX_PWM){
        pwm_final = -MAX_PWM;
    } else {
        /* Anti-windup: gate Iterm terhadap saturasi PWM FINAL - tidak diubah.
         * (Inert selama Ki=0, tapi tetap disiapkan kalau Ki dipakai nanti.) */
        pid->Iterm += pid->Ki * Perror;
    }

    pid->PrevInput = input;
    setMotorSpeed(pid->motor, pwm_final);
}

EXPORT void updatePID(){
    doPID(&leftPID);
    doPID(&rightPID);
}