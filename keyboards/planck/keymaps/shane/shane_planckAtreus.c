#include "keymap_common.h"
#include "backlight.h"
#include "debug.h"

#define COLEMAK_LAYER 0
#define LOWER_LAYER 1
#define UPPER_LAYER 2
#define SPACEFN_LAYER 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[COLEMAK_LAYER] = { /* Colemak */
  {KC_TAB,    KC_Q,     KC_W,    KC_F,    KC_P,            KC_G,            KC_J,            KC_L,            KC_U,     KC_Y,    KC_SCLN,  KC_MINS},
  {KC_BSPC,   KC_A,     KC_R,    KC_S,    KC_T,            KC_D,            KC_H,            KC_N,            KC_E,     KC_I,    KC_O,     KC_QUOT},
  {KC_LSFT,   KC_Z,     KC_X,    KC_C,    KC_V,            KC_B,            KC_K,            KC_M,            KC_COMM,  KC_DOT,  KC_ENT,   KC_RSFT},
  {KC_LCTL,   KC_ESC,   KC_LGUI, KC_LALT, LT(1, KC_BSPC),  LT(3, KC_SPC),   SFT_T(KC_BSPC),  LT(2, KC_DEL),   KC_RALT,  KC_RGUI, KC_SLSH,  KC_RCTL}
},
[LOWER_LAYER] = { /* LOWER */
  {RESET,    BL_STEP,  KC_TRNS,  KC_UP,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_7,    KC_8,  KC_9,    KC_LBRC,  KC_RBRC},
  {KC_BSPC,  KC_TAB,   KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_TRNS,  KC_PSLS,  KC_4,    KC_5,  KC_6,    KC_PAST,  KC_QUOT},
  {KC_LSFT,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PMNS,  KC_1,    KC_2,  KC_3,    KC_PPLS,  KC_EQL},
  {KC_BSPC,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BSPC,  KC_SPC,   KC_EQL,  KC_0,  KC_DOT,  KC_ENT,   KC_DEL}
},
[UPPER_LAYER] = { /* RAISE */
  {KC_TAB,   S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  KC_TRNS,  S(KC_F10),  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_TRNS},
  {KC_BSPC,  S(KC_5),  S(KC_6),  S(KC_7),  S(KC_8),  KC_TRNS,  KC_TRNS,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_TRNS},
  {KC_BSLS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_RSFT},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BSPC,  KC_SPC,   KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
},
[SPACEFN_LAYER] = { /* SpaceFN */
  {KC_TAB,   KC_ESC,   KC_GRV,   KC_LBRC,     KC_RBRC,     KC_CALC,  KC_VOLU,  KC_HOME,  KC_UP,    KC_END,    KC_MINS,  S(KC_BSLS)},
  {KC_BSPC,  KC_TAB,   KC_TRNS,  S(KC_9),     S(KC_0),     KC_PGUP,  KC_MUTE,  KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_QUOT,  KC_QUOT},
  {KC_LSFT,  KC_TRNS,  KC_BSLS,  S(KC_LBRC),  S(KC_RBRC),  KC_PGDN,  KC_VOLD,  KC_MPRV,  KC_MPLY,  KC_MNXT,   KC_TRNS,  KC_RSFT},
  {KC_LCTL,  KC_ESC,   KC_LGUI,  KC_LALT,     KC_SPC,      KC_TRNS,  KC_BSPC,  KC_DEL,   M(1),     M(2),      KC_RALT,  KC_ENT}
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