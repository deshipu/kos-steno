#pragma once
#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0C05
#define DEVICE_VER      0x0001
#define MANUFACTURER    deshipu
#define PRODUCT         kos

#define MATRIX_ROWS 3
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { F4, B1, B5 }
#define MATRIX_COL_PINS { C6, D4, D0, D7, E6, B4, F5, B6, B2, B3, F6, F7 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define VERBOSE
#define FORCE_NKRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define IGNORE_MOD_TAP_INTERRUPT
#define USB_MAX_POWER_CONSUMPTION 500
