#include QMK_KEYBOARD_H
#include "keymap_steno.h"
#include "quantum.h"
#include "keymap.h"

#define STENO_LAYER   0

/* Keyboard Layout
 * ,---------------------------------.    ,------------------------------.
 * | N2  | LSU | LFT | LP | LH | ST1 |    | ST3 | RF | RP | RL | RT | RD |
 * |-----+-----+-----+----+----|-----|    |-----|----+----+----+----+----|
 * | PWR | LSD | LK  | LW | LR | ST2 |    | ST4 | RR | BB | RG | RS | RZ |
 * `---------------------------------'    `------------------------------'
 *                   ,---------------,    .---------------.
 *                   |  N1 | LA | LO |    | RE | RU | N7  |
 *                   `---------------'    `---------------'
 */

/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [STENO_LAYER] = {
        {KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,    KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC},
        {KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G,    KC_H, KC_J, KC_K, KC_L, KC_QUOT,  KC_ENT},
        {KC_NO, KC_NO, KC_NO, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMM, KC_NO, KC_NO, KC_NO},
    }
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [STENO_LAYER] = {
        {STN_N2,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,       STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR},
        {STN_PWR, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,       STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR},
        {KC_NO,    KC_NO,   KC_NO,  STN_N1,  STN_A,     STN_O,       STN_E,   STN_U,   STN_N7,  KC_NO,   KC_NO,   KC_NO},
    }
};

void matrix_init_kb(void) {
    steno_set_mode(STENO_MODE_GEMINI);
}

