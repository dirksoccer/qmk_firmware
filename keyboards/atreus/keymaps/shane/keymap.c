// This is the personal keymap of Chris Gerber (@gerbercj). I haven't worked out the kinks
// with the Colemak and Dvorak support yet, but everything else works nicely.

#include "atreus.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _CM 0
#define LOWER_LAYER 1
#define UPPER_LAYER 2
#define SPACEFN_LAYER 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_CM] = { /* Colemak */
    {KC_Q,     KC_W,    KC_F,    KC_P,    KC_G,           KC_NO,          KC_J,           KC_L,    KC_U,    KC_Y,    KC_SCLN},
    {KC_A,     KC_R,    KC_S,    KC_T,    KC_D,           KC_NO,          KC_H,           KC_N,    KC_E,    KC_I,    KC_O   },
    {KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,           LT(2, KC_DEL),  KC_K,           KC_M,    KC_COMM, KC_DOT,  KC_ENT},
    {KC_LCTL,  KC_ESC,  KC_LGUI, KC_LALT, LT(1, KC_SPC),  LT(3, KC_BSPC), SFT_T(KC_BSPC), KC_RALT, KC_RGUI, KC_RCTL, KC_SLSH}
  },
  [LOWER_LAYER] = { /* LOWER_LAYER */
    {RESET,    KC_TRNS, KC_UP,   KC_TRNS,  KC_TRNS, KC_NO,   KC_TRNS, KC_7,    KC_8,     KC_9,    KC_TRNS},
    {KC_TAB,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_NO,   KC_PSLS, KC_4,    KC_5,     KC_6,    KC_PAST},
    {KC_LSFT,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_DEL,  KC_PMNS, KC_1,    KC_2,     KC_3,    KC_PPLS},
    {KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_BSPC, KC_SPC,  KC_EQL,  KC_0,     KC_DOT,  KC_ENT }
  },
  [UPPER_LAYER] = { /* UPPER_LAYER */
    {S(KC_1),  S(KC_2), S(KC_3), S(KC_4), KC_TRNS, KC_NO,   S(KC_F10), KC_F1,   KC_F2,    KC_F3,    KC_F4},
    {S(KC_5),  S(KC_6), S(KC_7), S(KC_8), KC_TRNS, KC_NO,   KC_TRNS,   KC_F5,   KC_F6,    KC_F7,    KC_F8},
    {KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_F9,   KC_F10,   KC_F11,   KC_F12},
    {KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC,  KC_BSPC, KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS}
  },
  [SPACEFN_LAYER] = { /* SPACEFN_LAYER */
    {KC_ESC,   KC_GRV,  KC_LBRC,    KC_RBRC,    KC_CALC, KC_NO,   KC_VOLU, KC_HOME, KC_UP,    KC_END,   KC_MINS},
    {KC_TAB,   KC_TRNS, S(KC_9),    S(KC_0),    KC_PGUP, KC_NO,   KC_MUTE, KC_LEFT, KC_DOWN,  KC_RIGHT, KC_QUOT},
    {KC_LSFT,  KC_BSLS, S(KC_LBRC), S(KC_RBRC), KC_PGDN, KC_DEL,  KC_VOLD, KC_MPRV, KC_MPLY,  KC_MNXT,  KC_TRNS},
    {KC_LCTL,  KC_ESC,  KC_LGUI,    KC_LALT,    KC_SPC,  KC_TRNS, KC_BSPC, KC_RALT, M(1),     M(2),     KC_ENT }
  }
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