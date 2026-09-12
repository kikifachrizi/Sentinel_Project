#ifndef COMMANDS_H
#define COMMANDS_H
#include "uart_bridge.h"


#define GET_BAUDRATE   'b'
#define CLASSIFY_STATUS 'c' /* SENTINEL: voted class + last 5 inference history + feature/model timing, see sentinel_features.h */
#define DATA_COLLECT   'd' /* SENTINEL: reuses 'd' - DIGITAL_READ has no case to collide with */
#define READ_ENCODERS  'e'
#define FF_CONFIG      'f' /* feedforward: "f 0" off (A/B test), "f <pct>" set ffScalePct, clamp 0..150 */
#define LOG_TEST       'g'
#define PID_PROBE      'h' /* Fase 1: same as LOG_TEST but silent (no CSV) - for period measurement */
#define READ_IMU       'i'
#define INA_DIAG       'j' /* requested as 'i', but that's READ_IMU with a real case - see runCommand() */
#define IMU_DIAG       'k' /* identity/config verify + 10s raw stream, see diagIMU() in sensors.c */
#define MOTOR_SPEEDS   'm'
#define READ_INA219    'n'
#define MOTOR_RAW_PWM  'o'
#define PING           'p'
#define RESET_ENCODERS 'r'
#define STATIC_SWEEP   's' /* Fase 1 feedforward calib: reuses 's' - SERVO_WRITE has no case to collide with */
#define UPDATE_PID     'u'
#define LEFT            0
#define RIGHT           1

EXPORT void runCommand(UartBridge *com);

#endif