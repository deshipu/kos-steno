#pragma once
#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0C05
#define DEVICE_VER      0x0001
#define MANUFACTURER    deshipu
#define PRODUCT         kos

#define MATRIX_ROWS 3
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { C3, B5, B1 }
#define MATRIX_COL_PINS { D5, D4, D3, D6, D7, B0, C2, B2, B3, B4, C1, C0}

#define DIODE_DIRECTION ROW2COL

#define DEBOUNCE 5

#define VERBOSE
#define FORCE_NKRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define IGNORE_MOD_TAP_INTERRUPT
#define USB_MAX_POWER_CONSUMPTION 500
