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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_CM] = { /* Colemak */
    {KC_Q,     KC_W,    KC_F,    KC_P,    KC_G,           KC_NO,          KC_J,           KC_L,    KC_U,    KC_Y,    KC_SCLN},
    {KC_A,     KC_R,    KC_S,    KC_T,    KC_D,           KC_NO,          KC_H,           KC_N,    KC_E,    KC_I,    KC_O   },
    {KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,           LT(2, KC_DEL),  KC_K,           KC_M,    KC_COMM, KC_DOT,  KC_ENT},
    {KC_LCTL,  KC_LGUI, KC_LALT, KC_MINS, LT(1, KC_SPC),  LT(2, KC_ENT),  SFT_T(KC_BSPC), KC_RALT, KC_RGUI, KC_RCTL, KC_SLSH}
  },
  [LOWER_LAYER] = { /* LOWER_LAYER */
    {KC_ESC,   KC_TRNS, KC_LBRC,    KC_RBRC,     RESET,   KC_NO,   M(1),    KC_7,    KC_8,     KC_9,    M(2)},
    {KC_TAB,   KC_TRNS, S(KC_9),    S(KC_0),     KC_TRNS, KC_NO,   KC_SLSH, KC_4,    KC_5,     KC_6,    S(KC_8)},
    {KC_LSFT,  KC_TRNS, S(KC_LBRC), S(KC_RBRC),  KC_TRNS, KC_DEL,  KC_MINS, KC_1,    KC_2,     KC_3,    S(KC_EQL)},
    {KC_TRNS,  KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS, KC_BSPC, KC_SPC,  KC_EQL,  KC_0,     KC_DOT,  KC_ENT }
  },
  [UPPER_LAYER] = { /* UPPER_LAYER */
    {KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_TRNS,   KC_HOME, KC_UP,    KC_END,   KC_PGUP},
    {KC_TAB,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_TRNS,   KC_LEFT, KC_DOWN,  KC_RIGHT, KC_TRNS},
    {KC_LSFT,  KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS,   KC_VOLD, KC_MUTE,  KC_VOLU,  KC_PGDN},
    {KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC,  KC_TRNS, KC_BSPC,   KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS}
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