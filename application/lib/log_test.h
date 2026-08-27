#ifndef LOG_TEST_H
#define LOG_TEST_H
#include <tk/tkernel.h>

extern volatile uint8_t logActive;
extern volatile uint8_t logSilent; /* Fase 1: 1 = run logTest's 10s window but skip writeCom() (no CSV) */
extern long logTargetL, logTargetR;

/* Fase 1 feedforward calib: STATIC_SWEEP ('s') params, consumed by the
 * same logTest task (no new task) via a flag, same pattern as logActive. */
extern volatile uint8_t sweepActive;
extern int sweepMotorId;   /* 0 = kiri (enc1/motorLeft), 1 = kanan (enc2/motorRight) */
extern int sweepDir;       /* 1 = maju, -1 = mundur */
extern int sweepPwmStart;
extern int sweepPwmStep;
extern int sweepPwmEnd;
extern int sweepHoldMs;

/* IMU_DIAG ('k'): same pattern - flag consumed by logTest task, no new task.
 * Blocks ~10s (streaming section of diagIMU()); motor commands are refused
 * while this is set (see runCommand() in commands.c). */
extern volatile uint8_t imuDiagActive;

/* DATA_COLLECT ('d'): unlike sweepActive/imuDiagActive (consumed by
 * logTest), this flag is consumed INSIDE pidTask itself - a CSV row must be
 * emitted for every ACTUAL doPID() execution, not on an independently
 * clocked sampler, so the logging has to live in the same iteration that
 * calls updatePID(). See pidTask() in app_main.c. Still "no new task". */
extern volatile uint8_t dataCollectActive;
extern int  dcPattern;   /* 1..5 */
extern int  dcSurface;   /* 0=NORMAL 1=TEXTURED 2=LOW_TRACTION 3=LOADED */
extern long dcRunId;

#endif