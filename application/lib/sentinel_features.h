#ifndef SENTINEL_FEATURES_H
#define SENTINEL_FEATURES_H
#include <tk/tkernel.h>
#include <stdint.h>
#include "sentinel_model.h"

#define SENTINEL_WINDOW       20  /* 1 second @ 20Hz - ring buffer */
#define SENTINEL_INFER_EVERY  10  /* run inference every 10 frames (0.5s) */
#define SENTINEL_VOTE_N        5  /* majority vote over the last 5 inferences */

#define SENTINEL_CLASS_NORMAL       0
#define SENTINEL_CLASS_TEXTURED     1
#define SENTINEL_CLASS_LOW_TRACTION 2
#define SENTINEL_CLASS_LOADED       3

/* GAIN SCHEDULING: Kp/Kd per classified surface class (measured
 * experimentally - see SENTINEL_GAINS[] in sentinel_features.c). Ki and Ko
 * are deliberately absent here - they stay fixed (Ki=0, Ko=50) for every
 * class, never touched by gain scheduling. */
typedef struct { int Kp; int Kd; } GainSet;

/* Called from pidTask on the moving rising edge (0->1), before the new
 * session's first frame is pushed. Resets the window and captures ax_baseline. */
EXPORT void sentinelBeginSession(void);

/* Called from pidTask every iteration while moving==1, after this frame's
 * final PWM and sensor readings are fresh. Computes per-frame features and
 * stores them in the ring buffer - pure arithmetic, doesn't touch
 * doPID/updatePID/computeFeedforward. */
EXPORT void sentinelPushFrame(long tgtL, long tgtR, long pwmL, long pwmR,
                               int velL, int velR, long curL, long curR,
                               int16_t ax, int16_t ay, int16_t gz);

/* Called from the separate inference task (sentinelTask, lower priority than
 * pidTask) - true when the window is full (20 frames) and it's time
 * (a multiple of 10 frames since the last push that triggered this). */
EXPORT uint8_t sentinelInferenceDue(void);

/* Builds the 84 features from the current window, calls sentinel_rf50x10(),
 * votes, and records DWT timing. Called from sentinelTask, not pidTask, so
 * pidTask's 50ms period stays undisturbed. */
EXPORT void sentinelRunInference(void);

typedef struct {
    int      votedClass;                   /* -1 = no vote yet */
    int      voteHistory[SENTINEL_VOTE_N]; /* [0] = most recent inference, -1 = unfilled */
    uint32_t inferCount;                   /* total windows inferred since boot */
    uint32_t featMinUs, featMaxUs, featMeanUs;   /* time to build the 84 features */
    uint32_t modelMinUs, modelMaxUs, modelMeanUs; /* time for sentinel_rf50x10() alone */
} SentinelStatus;

/* For command CLASSIFY_STATUS ('c'). Safe to call from any task - only
 * reads static state, no side effects. */
EXPORT void sentinelGetStatus(SentinelStatus *out);

#endif
