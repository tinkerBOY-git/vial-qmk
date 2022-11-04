#pragma once

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0ADB
#define DEVICE_VER      0x0103
#define MANUFACTURER    TINKERBOY
#define PRODUCT         tinkerBOY [adb.usb]

#define VIAL_KEYBOARD_UID {0xB0, 0x3F, 0x75, 0x32, 0x5E, 0x01, 0xED, 0x04}
#define VIAL_TAP_DANCE_ENTRIES 2
#define VIAL_COMBO_ENTRIES 2
//#define VIAL_KEY_OVERRIDE_ENTRIES 0
#define DYNAMIC_KEYMAP_LAYER_COUNT 2
//#define NO_ACTION_LAYER

#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 3

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

#define NO_ACTION_ONESHOT
#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT

#define NO_ACTION_TAPPING
