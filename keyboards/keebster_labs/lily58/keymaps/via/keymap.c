#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                      KC_F3,               KC_1,              KC_2,              KC_3,              KC_4,    KC_5,                        KC_6,              KC_7,              KC_8,              KC_9,                 KC_0,  KC_EQL,
                     KC_GRV,               KC_Q,        LT(2,KC_W),        LT(1,KC_E),              KC_R,    KC_T,                        KC_Y,              KC_U,        LT(1,KC_I),        LT(2,KC_O),                 KC_P, KC_MINS,
                     KC_ESC,  MT(MOD_LALT,KC_A), MT(MOD_LGUI,KC_S), MT(MOD_LSFT,KC_D), MT(MOD_LCTL,KC_F),    KC_G,                        KC_H, MT(MOD_LCTL,KC_J), MT(MOD_RSFT,KC_K), MT(MOD_RGUI,KC_L), MT(MOD_RALT,KC_SCLN), KC_QUOT,
                      KC_F2,               KC_Z,              KC_X,              KC_C,              KC_V,    KC_B,    KC_LBRC, KC_RBRC,   KC_N,              KC_M,           KC_COMM,            KC_DOT,              KC_SLSH, KC_BSLS,
                                          KC_F4,        S(KC_COMM),            KC_TAB,            KC_SPC,                                                  KC_ENT,           KC_BSPC,         S(KC_DOT),              KC_DEL
            ),
    [1] = LAYOUT(
                      TG(3), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_CAPS,                     KC_CAPS,   XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,   TG(2),
                    KC_PSCR,   KC_F5,   KC_F6,   KC_F1, XXXXXXX, XXXXXXX,                     XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,   TG(3),
                    _______, _______, _______, _______, _______, XXXXXXX,                     KC_LEFT,   KC_DOWN,     KC_UP, KC_RGHT, XXXXXXX,   TG(4),
                      TG(0), _______, _______, _______, S(KC_9), KC_LBRC,  XXXXXXX, XXXXXXX,  KC_RBRC,   S(KC_0),   XXXXXXX, XXXXXXX, XXXXXXX,   TG(4),
                                      XXXXXXX, XXXXXXX,  KC_EQL, KC_LSFT,                     KC_RSFT, S(KC_EQL),   XXXXXXX, XXXXXXX
            ),
    [2] = LAYOUT(
                    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_CAPS,                     KC_CAPS,   XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,
                    XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX,    XXXXXXX,                     XXXXXXX,   XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,
                    XXXXXXX, XXXXXXX, _______, _______, _______,    _______,                     MS_LEFT,   MS_DOWN,   MS_UP,  MS_RGHT, XXXXXXX, XXXXXXX,
                      TG(0), XXXXXXX, XXXXXXX, MS_BTN1, MS_BTN2, S(KC_COMM), S(KC_9), S(KC_0), S(KC_DOT),   MS_BTN1, MS_BTN2,  MS_BTN3, XXXXXXX, XXXXXXX,
                                      XXXXXXX, XXXXXXX,  KC_EQL,    MS_BTN1,                     MS_BTN2, S(KC_EQL), XXXXXXX,  XXXXXXX
            ),
    [3] = LAYOUT(
                    _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          TG(0),   TG(1),   TG(2),   TG(4), XXXXXXX, XXXXXXX,
                    _______,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX, XXXXXXX,
                    _______,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                        XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
                    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                      KC_LCTL, XXXXXXX, KC_LALT,  KC_SPC,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
            ),
    [4] = LAYOUT(
                    XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      TG(0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
            ),
    [5] = LAYOUT(
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
            )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_I):
        case LT(2, KC_O):
        case LT(1, KC_E):
        case LT(2, KC_W):
            return 300;  // or whatever feels good
    }
    return TAPPING_TERM;
}



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

