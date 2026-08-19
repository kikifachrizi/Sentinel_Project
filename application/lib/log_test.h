#ifndef LOG_TEST_H
#define LOG_TEST_H
#include <tk/tkernel.h>

extern volatile uint8_t logActive;
extern volatile uint8_t logSilent; /* Fase 1: 1 = run logTest's 10s window but skip writeCom() (no CSV) */
extern long logTargetL, logTargetR;


#endif