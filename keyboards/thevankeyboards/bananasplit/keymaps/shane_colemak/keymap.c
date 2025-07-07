#include "bananasplit.h"

#define DEFAULT_LAYER 0
#define LAYER_1       1
#define LAYER_2       2
#define LAYER_3       3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEFAULT_LAYER] = KEYMAP_ALL(
    KC_ESC,   KC_1,     KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,     KC_0,     KC_MINS,          KC_EQL,   KC_BSPC, KC_PGUP, \
    KC_TAB,   KC_Q,     KC_W,    KC_F,    KC_P,   KC_G,   KC_J,   KC_L,   KC_U,   KC_Y,     KC_SCLN,  KC_LBRC,          KC_RBRC,  KC_BSLS, \
    LT(3, KC_CAPS),  KC_A,     KC_R,    KC_S,    KC_T,   KC_D,   KC_H,   KC_N,   KC_E,   KC_I,     KC_O,     KC_QUOT,          KC_ENT, \
    KC_LSFT,  KC_LSFT,  KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_K,   KC_M,   KC_COMM,  KC_DOT,   RSFT_T(KC_SLSH),  KC_UP,   KC_PGDN, \
    KC_LCTL,  KC_LGUI,  KC_LALT,   LT(2, KC_DEL), LT(1, KC_SPC),  SFT_T(KC_BSPC), KC_RALT,  KC_RCTL,  KC_LEFT, KC_DOWN, KC_RIGHT
  ),

  [LAYER_1] = KEYMAP_ALL( \
    _______, _______, _______, _______,  _______,    _______,    _______, _______, _______,  _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, KC_LBRC,  KC_RBRC,    _______,    _______, KC_HOME, KC_UP,    KC_END,  _______, _______, _______, _______, \
    _______, _______, _______, S(KC_9),  S(KC_0),    _______,    _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, \
    _______, _______, _______, _______,  S(KC_LBRC), S(KC_RBRC), _______, _______, _______,  _______, _______, _______, _______, _______, \
    _______, _______, _______,              _______, _______, _______,             _______, _______, _______, _______, _______ \
  ),
  
  [LAYER_2] = KEYMAP_ALL( \
    KC_GRV, _______, _______, _______, _______, _______, _______, KC_P7, KC_P8, KC_P9, _______, _______, _______, _______, KC_NLCK, \
    _______, _______, _______, _______, _______, _______, KC_PSLS, KC_P4, KC_P5, KC_P6, KC_PAST, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, KC_PMNS, KC_P1, KC_P2, KC_P3, KC_PPLS, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, M(1), KC_PEQL, KC_P0, KC_PDOT, M(2), _______, _______, \
    _______, _______, _______,          _______, _______, SFT_T(KC_SPC),          _______, _______, _______, _______, _______ \
  ),
  
  [LAYER_3] = KEYMAP_ALL( \
    _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, LALT(KC_PSCR), \
    _______, KC_CALC, _______, _______, _______, _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, KC_WBAK, KC_WSCH, KC_WFWD, _______, _______, _______, _______, \
    _______, _______, _______,          KC_LCTL, KC_LGUI, KC_LALT,          _______, _______, _______, _______, _______ \
  ),

};

const uint16_t PROGMEM fn_actions[] = {
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) 
{
  // MACRODOWN only works in this function
      switch(id) {
        case 1:
          if (record->event.pressed) {
            return MACRO(T(SPC), T(EQL), T(SPC), END);
          }
        break;
		case 2:
          if (record->event.pressed) {
            return MACRO(T(SPC), T(EQL), T(EQL), T(SPC), END);
          }
        break;
      }
    return MACRO_NONE;
};