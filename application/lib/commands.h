#ifndef COMMANDS_H
#define COMMANDS_H
#include "uart_bridge.h"

#define ANALOG_READ    'a'
#define GET_BAUDRATE   'b'
#define PIN_MODE       'c'
#define DIGITAL_READ   'd'
#define READ_ENCODERS  'e'
#define LOG_TEST       'g'
#define READ_IMU       'i'
#define MOTOR_SPEEDS   'm'
#define READ_INA219    'n'
#define MOTOR_RAW_PWM  'o'
#define PING           'p'
#define RESET_ENCODERS 'r'
#define SERVO_WRITE    's'
#define SERVO_READ     't'
#define UPDATE_PID     'u'
#define DIGITAL_WRITE  'w'
#define ANALOG_WRITE   'x'
#define LEFT            0
#define RIGHT           1

EXPORT void runCommand(UartBridge *com);

#endif