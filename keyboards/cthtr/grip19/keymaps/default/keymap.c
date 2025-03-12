// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM backspaceCombo[] = {KC_PLUS, KC_EQL, COMBO_END};
const uint16_t PROGMEM logoutCombo[] = {KC_SLSH, KC_ASTR, KC_MINS, COMBO_END};
const uint16_t PROGMEM ctrlDel[] = {KC_RPRN, KC_RBRC, COMBO_END};

combo_t key_combos[] = {
    COMBO(backspaceCombo, KC_BSPC),
    COMBO(logoutCombo, LCTL(LALT(KC_5))),
    COMBO(ctrlDel, LCTL(KC_BSPC))
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐    ┌───┬───┬───┬───┬───┐
     * │   │ / │ * │ - │   │    │   │ { │ ' │ } │   │
     * ├───┼───┼───┼───┼───┤    ├───┼───┼───┼───┼───┤
     * │   │ 7 │ 8 │ 9 │   │    │   │ & │ * │ " │   │
     * ├───┼───┼───┼───┼───┤    ├───┼───┼───┼───┼───┤
     * │ D │ 4 │ 5 │ 6 │ + │    │ ( │ $ │ % │ ^ │ ) │
     * ├───┼───┼───┼───┼───┤    ├───┼───┼───┼───┼───┤
     * │ T │ 1 │ 2 │ 3 │ = │    │ [ │ ! │ @ │ # │ ] │
     * ├───┼───┼───┼───┼───┤    ├───┼───┼───┼───┼───┤
     * │   │   │ . │ 0 │ E │    │   │   │ x │ x │ x │
     * └───┴───┴───┴───┴───┘    └───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
    KC_SLSH, KC_ASTR, KC_MINS,
    KC_7,    KC_8,    KC_9,
    KC_TAB, KC_4,    KC_5,    KC_6,    KC_PLUS,
    KC_DEL,  KC_1,    KC_2,    KC_3,    KC_EQL,
    KC_DOT,  LT(2, KC_0), LT(1, KC_ENT)
    ),
    
    [1] = LAYOUT(
        KC_LCBR, KC_QUOT, KC_RCBR,
        KC_AMPR, KC_ASTR, KC_DQUO,
        KC_LPRN, KC_DLR,  KC_PERC, KC_CIRC, KC_RPRN,
        KC_LBRC, KC_EXLM, KC_AT,   KC_HASH, KC_RBRC,
        _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______,
        LCTL(KC_S), KC_UP, _______,
        LCTL(KC_A), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_Y),
        LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Y),
        _______, _______, _______
    )
}; 