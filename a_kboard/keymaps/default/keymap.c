// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_SLEP,   KC_PSCR,   KC_VOLU,   KC_MPLY,
        KC_F13,   KC_F14,   KC_ESC,   KC_BSPC,
        LCTL(KC_Z),   LCTL(KC_C), LCTL(KC_V), KC_ENT
    )
};
