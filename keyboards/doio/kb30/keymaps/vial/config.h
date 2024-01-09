/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once
#define VIAL_TAP_DANCE_ENTRIES 16
#define VIAL_COMBO_ENTRIES 16
#define VIAL_KEY_OVERRIDE_ENTRIES 16
#define DYNAMIC_KEYMAP_MACRO_COUNT 109

#define VIAL_KEYBOARD_UID {0xC3, 0xD7, 0xE9, 0x8D, 0x71, 0xBB, 0xA3, 0xEC}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 3 }

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#undef OLED_TIMEOUT
#define OLED_TIMEOUT 60000

#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B
#define ENCODERS_PAD_A { B5, A1, A4 }
#define ENCODERS_PAD_B { B6, A2, A3 }
#define ENCODER_RESOLUTIONS { 4, 4, 4 }
