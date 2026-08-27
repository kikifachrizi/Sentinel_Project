#include <tk/tkernel.h>
#include <stdint.h>
#include <math.h>
#include "stm32h5xx_hal.h"
#include "sentinel_features.h"
#include "diff_controller.h" /* leftPID/rightPID.u_db_fwd/kv_num_fwd/u_db_rev/kv_num_rev */

/* ==========================================================================
 * Ring buffer mentah + fitur turunan per-frame. Semua static (.bss), tidak
 * ada yang di stack pidTask.
 *
 * DIVERIFIKASI terhadap feature_names.txt + preprocess_v2.py (sekarang ada
 * di workspace) - ini bukan lagi interpretasi/tebakan, tapi hasil cocokkan
 * baris-per-baris dengan referensi Python:
 *
 * 1. "sgn" DIKONFIRMASI satu nilai (dari tgtL SAJA: np.sign(tgtL), 0->+1),
 *    dipakai untuk residL, residR, slipL, DAN slipR - BUKAN per sisi.
 *    (Sesi sebelumnya saya pakai sgnL/sgnR terpisah - itu SALAH, sudah
 *    diperbaiki di sini.)
 * 2. "db" di kv_eff<S> dikonfirmasi searah tgtS (u_ff_pred juga begitu,
 *    beda dari sgn resid yang cuma pakai tgtL) - sudah benar sebelumnya.
 * 3. ax_baseline DIKONFIRMASI BUKAN dari histori sebelum moving=1 - Python
 *    hitung dari rata-rata 5 BARIS PERTAMA window/sesi itu sendiri
 *    (`s.iloc[:5].mean()`, di-broadcast konstan ke semua baris grup lewat
 *    .transform()). Online (streaming) tidak bisa tahu rata-rata 5 sampel
 *    pertama SEBELUM sampel ke-5 itu sendiri tiba (offline py itu batch,
 *    boleh "menengok ke depan"; firmware ini kausal/real-time) - jadi
 *    dipakai pendekatan rata-rata BERJALAN dari sampel ke-1 s/d ke-5,
 *    lalu DIBEKUKAN persis di rata-rata 5 sampel itu (sama dengan offline
 *    MULAI sampel ke-5). Sampel ke 1-4 pakai rata-rata parsial (mendekati,
 *    bukan identik dengan offline) - satu-satunya penyimpangan yang tersisa
 *    dari referensi, dan cuma menyentuh ~4 frame pertama tiap sesi (0.2s
 *    dari total sesi yang biasanya jauh lebih panjang). Sekaligus
 *    menghapus burst-read IMU sebelum moving=1 dari revisi sebelumnya
 *    (tidak perlu lagi, sekalian hilangkan beban I2C ekstra di rising edge).
 * 4. Urutan 84 fitur di buildFeatureVector() DIKONFIRMASI cocok persis
 *    dengan feature_names.txt (channel-major: mean,std,min,max,valid per
 *    dari 16 kanal di AGG python, lalu corr_pvL,corr_pvR,tgt_abs,is_rev).
 * ========================================================================== */

typedef struct {
    double residL[SENTINEL_WINDOW],       residR[SENTINEL_WINDOW];
    double resid_sum[SENTINEL_WINDOW];
    double track_err[SENTINEL_WINDOW];
    double kv_effL[SENTINEL_WINDOW];      uint8_t kv_effL_ok[SENTINEL_WINDOW];
    double kv_effR[SENTINEL_WINDOW];      uint8_t kv_effR_ok[SENTINEL_WINDOW];
    double cur_per_pwmL[SENTINEL_WINDOW]; uint8_t cur_per_pwmL_ok[SENTINEL_WINDOW];
    double cur_per_pwmR[SENTINEL_WINDOW]; uint8_t cur_per_pwmR_ok[SENTINEL_WINDOW];
    double cur_per_velL[SENTINEL_WINDOW]; uint8_t cur_per_velL_ok[SENTINEL_WINDOW];
    double cur_per_velR[SENTINEL_WINDOW]; uint8_t cur_per_velR_ok[SENTINEL_WINDOW];
    double cur_asym[SENTINEL_WINDOW];
    double slipL[SENTINEL_WINDOW]; /* selalu valid (Python fillna(0) di diff pertama, bukan exclude) */
    double slipR[SENTINEL_WINDOW];
    double a_body[SENTINEL_WINDOW];
    double gz_dps[SENTINEL_WINDOW];
    double ay[SENTINEL_WINDOW];
    /* mentah, dibutuhkan utk corr_pv dan tgt_abs/is_rev */
    double pwmL[SENTINEL_WINDOW], pwmR[SENTINEL_WINDOW];
    double velL[SENTINEL_WINDOW], velR[SENTINEL_WINDOW];
    double tgtL[SENTINEL_WINDOW];
} SentinelWindow;

static SentinelWindow s_win;
static uint32_t s_count;       /* jumlah entry terisi (maks SENTINEL_WINDOW) */
static uint32_t s_head;        /* index tempat entry BERIKUTNYA ditulis (circular) */
static uint32_t s_pushCounter; /* increment tiap sentinelPushFrame(), untuk gate "tiap 10 frame" */

static long   s_prevVelL, s_prevVelR;
static uint8_t s_havePrev;

/* ax_baseline: rata-rata berjalan dari sampel ke-1..5 sesi ini, beku
 * setelah sampel ke-5 (lihat catatan #3 di atas). */
static double   s_axBaselineSum;
static uint32_t s_axBaselineCount;

static int      s_votedClass = -1;
static int      s_voteHistory[SENTINEL_VOTE_N];
static uint32_t s_inferCount;

static uint32_t s_featMin = 0xFFFFFFFFu, s_featMax = 0u; static uint64_t s_featSum; static uint32_t s_featCnt;
static uint32_t s_modelMin = 0xFFFFFFFFu, s_modelMax = 0u; static uint64_t s_modelSum; static uint32_t s_modelCnt;

/* Feedforward diprediksi ULANG di sini dengan ffScalePct DIPAKSA 100 (bukan
 * nilai runtime global) - PERSIS u_ff_pred() di preprocess_v2.py:
 * u = (db*KV_DEN + kv*mag)/KV_DEN = db + kv*mag/KV_DEN, lalu diberi tanda
 * sign(tgt). u_db/kv_num dibaca dari struct AKTIF (leftPID/rightPID). */
static double sentinelFeedforwardPred(long tgt, long db_fwd, long kv_fwd, long db_rev, long kv_rev){
    if (tgt == 0) return 0.0;
    double mag = (tgt > 0) ? (double)tgt : (double)(-tgt);
    double db  = (tgt > 0) ? (double)db_fwd : (double)db_rev;
    double kv  = (tgt > 0) ? (double)kv_fwd : (double)kv_rev;
    double u = db + kv * mag / 100.0; /* KV_DEN=100, ffScalePct=100 tetap -> faktor skala jadi 1 */
    return (tgt < 0) ? -u : u;
}

EXPORT void sentinelBeginSession(void){
    s_count           = 0u;
    s_head            = 0u;
    s_pushCounter     = 0u;
    s_havePrev        = 0u;
    s_axBaselineSum   = 0.0;
    s_axBaselineCount = 0u;
}

EXPORT void sentinelPushFrame(long tgtL, long tgtR, long pwmL, long pwmR,
                               int velL, int velR, long curL, long curR,
                               int16_t ax, int16_t ay, int16_t gz)
{
    uint32_t idx = s_head;

    /* KOREKSI: satu sgn (dari tgtL saja), dipakai utk KEDUA sisi - lihat
     * preprocess_v2.py: sgn = np.sign(df.tgtL).replace(0, 1), dipakai untuk
     * resid{L,R} dan slip{L,R} keduanya, BUKAN sgnL/sgnR terpisah. */
    long sgn = (tgtL > 0) ? 1L : ((tgtL < 0) ? -1L : 1L);

    double uffL = sentinelFeedforwardPred(tgtL, leftPID.u_db_fwd,  leftPID.kv_num_fwd,  leftPID.u_db_rev,  leftPID.kv_num_rev);
    double uffR = sentinelFeedforwardPred(tgtR, rightPID.u_db_fwd, rightPID.kv_num_fwd, rightPID.u_db_rev, rightPID.kv_num_rev);

    double residL = ((double)pwmL - uffL) * (double)sgn;
    double residR = ((double)pwmR - uffR) * (double)sgn;
    s_win.residL[idx] = residL;
    s_win.residR[idx] = residR;
    s_win.resid_sum[idx] = residL + residR;
    s_win.track_err[idx] = fabs((double)velL - (double)tgtL) + fabs((double)velR - (double)tgtR);

    double dbL = (tgtL > 0) ? (double)leftPID.u_db_fwd  : (double)leftPID.u_db_rev;
    double dbR = (tgtR > 0) ? (double)rightPID.u_db_fwd : (double)rightPID.u_db_rev;

    if (velL >= 5 || velL <= -5){
        double absVelL = (velL >= 0) ? (double)velL : (double)(-velL);
        double absPwmL = (pwmL >= 0) ? (double)pwmL : (double)(-pwmL);
        s_win.kv_effL[idx] = (absPwmL - dbL) / absVelL;
        s_win.kv_effL_ok[idx] = 1u;
    } else { s_win.kv_effL[idx] = 0.0; s_win.kv_effL_ok[idx] = 0u; }

    if (velR >= 5 || velR <= -5){
        double absVelR = (velR >= 0) ? (double)velR : (double)(-velR);
        double absPwmR = (pwmR >= 0) ? (double)pwmR : (double)(-pwmR);
        s_win.kv_effR[idx] = (absPwmR - dbR) / absVelR;
        s_win.kv_effR_ok[idx] = 1u;
    } else { s_win.kv_effR[idx] = 0.0; s_win.kv_effR_ok[idx] = 0u; }

    if (pwmL != 0){
        double absPwmL = (pwmL >= 0) ? (double)pwmL : (double)(-pwmL);
        s_win.cur_per_pwmL[idx] = (double)curL / absPwmL;
        s_win.cur_per_pwmL_ok[idx] = 1u;
    } else { s_win.cur_per_pwmL[idx] = 0.0; s_win.cur_per_pwmL_ok[idx] = 0u; }

    if (pwmR != 0){
        double absPwmR = (pwmR >= 0) ? (double)pwmR : (double)(-pwmR);
        s_win.cur_per_pwmR[idx] = (double)curR / absPwmR;
        s_win.cur_per_pwmR_ok[idx] = 1u;
    } else { s_win.cur_per_pwmR[idx] = 0.0; s_win.cur_per_pwmR_ok[idx] = 0u; }

    if (velL != 0){
        double absVelL = (velL >= 0) ? (double)velL : (double)(-velL);
        s_win.cur_per_velL[idx] = (double)curL / absVelL;
        s_win.cur_per_velL_ok[idx] = 1u;
    } else { s_win.cur_per_velL[idx] = 0.0; s_win.cur_per_velL_ok[idx] = 0u; }

    if (velR != 0){
        double absVelR = (velR >= 0) ? (double)velR : (double)(-velR);
        s_win.cur_per_velR[idx] = (double)curR / absVelR;
        s_win.cur_per_velR_ok[idx] = 1u;
    } else { s_win.cur_per_velR[idx] = 0.0; s_win.cur_per_velR_ok[idx] = 0u; }

    s_win.cur_asym[idx] = (double)curL - (double)curR;

    /* KOREKSI ax_baseline: rata-rata berjalan sampel 1..5 sesi ini, beku
     * setelah sampel ke-5 - lihat catatan #3 di atas file ini. */
    if (s_axBaselineCount < 5u){
        s_axBaselineSum += (double)ax;
        s_axBaselineCount++;
    }
    double axBaseline = s_axBaselineSum / (double)s_axBaselineCount; /* count>=1 terjamin (baris di atas jalan dulu) */
    double a_body = -((double)ax - axBaseline) / 16384.0 * 9.81;
    s_win.a_body[idx] = a_body;

    /* KOREKSI slip: TIDAK PERNAH "invalid" - diff frame pertama sesi = 0
     * (persis .diff().fillna(0) di Python), bukan dikecualikan dari agregasi. */
    double aL, aR;
    if (s_havePrev){
        aL = ((double)velL - (double)s_prevVelL) * 0.268;
        aR = ((double)velR - (double)s_prevVelR) * 0.268;
    } else {
        aL = 0.0; aR = 0.0;
    }
    s_win.slipL[idx] = (aL - a_body) * (double)sgn;
    s_win.slipR[idx] = (aR - a_body) * (double)sgn;
    s_prevVelL = velL; s_prevVelR = velR; s_havePrev = 1u;

    s_win.gz_dps[idx] = (double)gz / 131.0;
    s_win.ay[idx]     = (double)ay;

    s_win.pwmL[idx] = (double)pwmL; s_win.pwmR[idx] = (double)pwmR;
    s_win.velL[idx] = (double)velL; s_win.velR[idx] = (double)velR;
    s_win.tgtL[idx] = (double)tgtL;

    s_head = (s_head + 1u) % SENTINEL_WINDOW;
    if (s_count < SENTINEL_WINDOW) s_count++;
    s_pushCounter++;
}

EXPORT uint8_t sentinelInferenceDue(void){
    return (s_count >= SENTINEL_WINDOW) &&
           (s_pushCounter > 0u) &&
           ((s_pushCounter % SENTINEL_INFER_EVERY) == 0u);
}

/* mean/std/min/max/valid dari sample yang VALID saja (ok==NULL berarti semua
 * valid - dipakai utk residL/R, resid_sum, track_err, cur_asym, slipL/R,
 * a_body, gz_dps, ay: semuanya TIDAK PERNAH NaN di preprocess_v2.py).
 * valid = n_valid / SENTINEL_WINDOW persis seperti Python (v/WINDOW, BUKAN
 * dibagi s_count). */
static void aggStat(const double *arr, const uint8_t *ok, uint32_t count, uint32_t head,
                     double *mean, double *std, double *min, double *max, double *valid)
{
    uint32_t n = 0u;
    double sum = 0.0, sumsq = 0.0, mn = 0.0, mx = 0.0;
    uint8_t first = 1u;

    for (uint32_t i = 0u; i < count; i++){
        uint32_t idx = (head + SENTINEL_WINDOW - count + i) % SENTINEL_WINDOW;
        if (ok != NULL && !ok[idx]) continue;
        double v = arr[idx];
        sum += v; sumsq += v * v;
        if (first){ mn = v; mx = v; first = 0u; }
        else { if (v < mn) mn = v; if (v > mx) mx = v; }
        n++;
    }

    if (n == 0u){
        *mean = 0.0; *std = 0.0; *min = 0.0; *max = 0.0; *valid = 0.0;
        return;
    }
    double m = sum / (double)n;
    double var = (sumsq / (double)n) - (m * m);
    if (var < 0.0) var = 0.0; /* guard pembulatan floating point */
    *mean  = m;
    *std   = sqrt(var);
    *min   = mn;
    *max   = mx;
    *valid = (double)n / (double)SENTINEL_WINDOW;
}

static double pearsonCorr(const double *x, const double *y, uint32_t count, uint32_t head){
    if (count < 2u) return 0.0;
    double sx = 0.0, sy = 0.0;
    for (uint32_t i = 0u; i < count; i++){
        uint32_t idx = (head + SENTINEL_WINDOW - count + i) % SENTINEL_WINDOW;
        sx += x[idx]; sy += y[idx];
    }
    double mx = sx / (double)count, my = sy / (double)count;
    double sxx = 0.0, syy = 0.0, sxy = 0.0;
    for (uint32_t i = 0u; i < count; i++){
        uint32_t idx = (head + SENTINEL_WINDOW - count + i) % SENTINEL_WINDOW;
        double dx = x[idx] - mx, dy = y[idx] - my;
        sxx += dx * dx; syy += dy * dy; sxy += dx * dy;
    }
    double stdx = sqrt(sxx / (double)count), stdy = sqrt(syy / (double)count);
    if (stdx < 1e-9 || stdy < 1e-9) return 0.0; /* persis threshold Python */
    return sxy / (sqrt(sxx) * sqrt(syy));
}

/* Urutan DIKONFIRMASI cocok feature_names.txt - lihat catatan #4 di atas file ini. */
static void buildFeatureVector(double *input /* [SENTINEL_N_FEATURES] */){
    int k = 0;
    double mean, std, mn, mx, valid;

#define SENTINEL_AGG(field, okfield) \
    aggStat(s_win.field, okfield, s_count, s_head, &mean, &std, &mn, &mx, &valid); \
    input[k++] = mean; input[k++] = std; input[k++] = mn; input[k++] = mx; input[k++] = valid;

    SENTINEL_AGG(residL,        NULL)
    SENTINEL_AGG(residR,        NULL)
    SENTINEL_AGG(resid_sum,     NULL)
    SENTINEL_AGG(track_err,     NULL)
    SENTINEL_AGG(kv_effL,       s_win.kv_effL_ok)
    SENTINEL_AGG(kv_effR,       s_win.kv_effR_ok)
    SENTINEL_AGG(cur_per_pwmL,  s_win.cur_per_pwmL_ok)
    SENTINEL_AGG(cur_per_pwmR,  s_win.cur_per_pwmR_ok)
    SENTINEL_AGG(cur_per_velL,  s_win.cur_per_velL_ok)
    SENTINEL_AGG(cur_per_velR,  s_win.cur_per_velR_ok)
    SENTINEL_AGG(cur_asym,      NULL)
    SENTINEL_AGG(slipL,         NULL) /* KOREKSI: dulu s_win.slipL_ok, sekarang selalu valid */
    SENTINEL_AGG(slipR,         NULL) /* KOREKSI: dulu s_win.slipR_ok, sekarang selalu valid */
    SENTINEL_AGG(a_body,        NULL)
    SENTINEL_AGG(gz_dps,        NULL)
    SENTINEL_AGG(ay,            NULL)
#undef SENTINEL_AGG

    input[k++] = pearsonCorr(s_win.pwmL, s_win.velL, s_count, s_head);
    input[k++] = pearsonCorr(s_win.pwmR, s_win.velR, s_count, s_head);

    double sumAbs = 0.0;
    uint32_t revCount = 0u;
    for (uint32_t i = 0u; i < s_count; i++){
        uint32_t idx = (s_head + SENTINEL_WINDOW - s_count + i) % SENTINEL_WINDOW;
        double t = s_win.tgtL[idx];
        sumAbs += (t >= 0.0) ? t : -t;
        if (t < 0.0) revCount++;
    }
    input[k++] = (s_count > 0u) ? (sumAbs / (double)s_count) : 0.0;                 /* tgt_abs */
    input[k++] = (s_count > 0u) ? ((double)revCount / (double)s_count) : 0.0;       /* is_rev */

    /* k harus == SENTINEL_N_FEATURES (84) di titik ini - lihat sentinel_model.h */
}

EXPORT void sentinelRunInference(void){
    static double input[SENTINEL_N_FEATURES];
    static double output[SENTINEL_N_CLASSES];
    uint32_t cycPerUs = SystemCoreClock / 1000000u;
    if (cycPerUs == 0u) cycPerUs = 1u;

    uint32_t t0 = DWT->CYCCNT;
    buildFeatureVector(input);
    uint32_t t1 = DWT->CYCCNT;

    sentinel_rf50x10(input, output);
    uint32_t t2 = DWT->CYCCNT;

    int best = 0;
    for (int c = 1; c < SENTINEL_N_CLASSES; c++){
        if (output[c] > output[best]) best = c;
    }

    for (int i = SENTINEL_VOTE_N - 1; i > 0; i--) s_voteHistory[i] = s_voteHistory[i - 1];
    s_voteHistory[0] = best;
    s_inferCount++;

    int counts[SENTINEL_N_CLASSES] = {0, 0, 0, 0};
    for (int i = 0; i < SENTINEL_VOTE_N; i++){
        if (s_voteHistory[i] >= 0) counts[s_voteHistory[i]]++;
    }
    int maxCount = -1;
    for (int c = 0; c < SENTINEL_N_CLASSES; c++){
        if (counts[c] > maxCount) maxCount = counts[c];
    }
    int numAtMax = 0, winner = -1;
    for (int c = 0; c < SENTINEL_N_CLASSES; c++){
        if (counts[c] == maxCount){ numAtMax++; winner = c; }
    }
    if (numAtMax == 1) s_votedClass = winner;
    /* kalau seri: s_votedClass TIDAK diubah - hysteresis alami, sesuai spec */

    uint32_t cycFeat  = t1 - t0;
    uint32_t cycModel = t2 - t1;
    if (cycFeat < s_featMin) s_featMin = cycFeat;
    if (cycFeat > s_featMax) s_featMax = cycFeat;
    s_featSum += cycFeat; s_featCnt++;
    if (cycModel < s_modelMin) s_modelMin = cycModel;
    if (cycModel > s_modelMax) s_modelMax = cycModel;
    s_modelSum += cycModel; s_modelCnt++;
}

EXPORT void sentinelGetStatus(SentinelStatus *out){
    uint32_t cycPerUs = SystemCoreClock / 1000000u;
    if (cycPerUs == 0u) cycPerUs = 1u;

    out->votedClass = s_votedClass;
    for (int i = 0; i < SENTINEL_VOTE_N; i++) out->voteHistory[i] = s_voteHistory[i];
    out->inferCount = s_inferCount;

    out->featMinUs  = (s_featCnt > 0u) ? (s_featMin / cycPerUs) : 0u;
    out->featMaxUs  = (s_featCnt > 0u) ? (s_featMax / cycPerUs) : 0u;
    out->featMeanUs = (s_featCnt > 0u) ? (uint32_t)((s_featSum / s_featCnt) / cycPerUs) : 0u;

    out->modelMinUs  = (s_modelCnt > 0u) ? (s_modelMin / cycPerUs) : 0u;
    out->modelMaxUs  = (s_modelCnt > 0u) ? (s_modelMax / cycPerUs) : 0u;
    out->modelMeanUs = (s_modelCnt > 0u) ? (uint32_t)((s_modelSum / s_modelCnt) / cycPerUs) : 0u;
}
