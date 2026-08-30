#ifndef SENTINEL_FEATURES_H
#define SENTINEL_FEATURES_H
#include <tk/tkernel.h>
#include <stdint.h>
#include "sentinel_model.h"

#define SENTINEL_WINDOW       20  /* 1 detik @ 20Hz - ring buffer */
#define SENTINEL_INFER_EVERY  10  /* jalankan inferensi tiap 10 frame (0.5s) */
#define SENTINEL_VOTE_N        5  /* voting mayoritas dari 5 hasil inferensi terakhir */

#define SENTINEL_CLASS_NORMAL       0
#define SENTINEL_CLASS_TEXTURED     1 /* "KAIN" di KONTEKS */
#define SENTINEL_CLASS_LOW_TRACTION 2 /* "BANNER" di KONTEKS */
#define SENTINEL_CLASS_LOADED       3

/* GAIN SCHEDULING: tabel Kp/Kd per kelas hasil klasifikasi (diukur dari
 * eksperimen - lihat SENTINEL_GAINS[] di sentinel_features.c). Ki dan Ko
 * SENGAJA TIDAK ada di sini - keduanya tetap (Ki=0, Ko=50) untuk semua
 * kelas, tidak pernah diubah gain scheduling. */
typedef struct { int Kp; int Kd; } GainSet;

/* Dipanggil dari pidTask persis di rising edge moving (0->1), SEBELUM
 * frame pertama dari sesi baru di-push. Reset window + tangkap ax_baseline.
 * Fungsi biasa (bukan task) - lihat sentinel_features.c untuk interpretasi
 * "5 frame sebelum moving=1" (di-flag sebagai perlu verifikasi). */
EXPORT void sentinelBeginSession(void);

/* Dipanggil dari pidTask tiap iterasi SELAMA moving==1, setelah PWM final +
 * pembacaan sensor frame ini sudah fresh (curL/R dari INA219, ax/ay/gz dari
 * IMU). Menghitung fitur per-frame dan menyimpannya ke ring buffer - murni
 * aritmatika, tidak menyentuh doPID/updatePID/computeFeedforward. */
EXPORT void sentinelPushFrame(long tgtL, long tgtR, long pwmL, long pwmR,
                               int velL, int velR, long curL, long curR,
                               int16_t ax, int16_t ay, int16_t gz);

/* Dipanggil dari task inferensi TERPISAH (sentinelTask, prioritas lebih
 * rendah dari pidTask) - true kalau window sudah penuh (20 frame) DAN sudah
 * waktunya (kelipatan 10 frame sejak push terakhir yang men-trigger ini). */
EXPORT uint8_t sentinelInferenceDue(void);

/* Membangun 84 fitur dari window saat ini, panggil sentinel_rf50x10(),
 * voting, catat instrumentasi DWT. Dipanggil dari sentinelTask, BUKAN
 * pidTask - inilah yang menjaga periode 50ms pidTask tidak terganggu. */
EXPORT void sentinelRunInference(void);

typedef struct {
    int      votedClass;                   /* -1 = belum ada hasil voting */
    int      voteHistory[SENTINEL_VOTE_N]; /* [0] = hasil inferensi paling baru, -1 = belum terisi */
    uint32_t inferCount;                   /* total window yang sudah diinferensi sejak boot */
    uint32_t featMinUs, featMaxUs, featMeanUs;   /* waktu bangun 84 fitur dari window */
    uint32_t modelMinUs, modelMaxUs, modelMeanUs; /* waktu sentinel_rf50x10() saja */
} SentinelStatus;

/* Untuk command CLASSIFY_STATUS ('c'). Aman dipanggil dari task mana pun -
 * cuma membaca state static, tidak ada efek samping. */
EXPORT void sentinelGetStatus(SentinelStatus *out);

#endif
