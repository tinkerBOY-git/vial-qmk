/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
/*
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Vial
#define PRODUCT         RP2040 example
*/

/* key matrix size */
//#define MATRIX_ROWS 2
//#define MATRIX_COLS 2

//#define MATRIX_ROW_PINS { GP2, GP4 }
//#define MATRIX_COL_PINS { GP3, GP5 }

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define IBMPC_CLOCK_BIT   GP16
#define IBMPC_DATA_BIT    GP17

#define VIAL_KEYBOARD_UID {0x87, 0x9E, 0x0D, 0x68, 0xD2, 0xB5, 0x98, 0xA2}
#define VIAL_UNLOCK_COMBO_ROWS { 2, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 9, 8 }
