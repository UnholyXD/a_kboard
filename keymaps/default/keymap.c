// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Camada [0]
    [0] = LAYOUT(
        /*btn_cima*/    KC_A,   KC_B,   KC_C,   KC_D,   KC_E,
        /*btn_encoder*/ KC_F,   KC_G,   KC_H,   KC_I,   KC_J,
        /*btn_baixo*/   KC_K,   KC_L,   KC_M,   KC_N,   KC_O
    ) // <--- ATENÇÃO AQUI: SEM PONTO E VÍRGULA, SEM PARÊNTESES EXTRAS.
}; // <--- Esta chave finaliza o array 'keymaps'.

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }

    return false;
}
