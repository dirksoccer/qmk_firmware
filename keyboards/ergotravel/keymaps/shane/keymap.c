#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// #define KC_ KC_TRNS
#define _______ KC_TRNS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
  //,--------+--------+--------+--------+--------+--------+--------.        ,--------+--------+--------+--------+--------+--------+--------.
     KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_LBRC,          KC_RBRC,  KC_J,    KC_L,    KC_U,    KC_Y,   KC_SCLN, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_TAB,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,     M(1),             M(2),    KC_H,    KC_N,    KC_E,    KC_I,     KC_O,  KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,            TG(3),   KC_K,    KC_M,   KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_LCTL, KC_LGUI, KC_LALT, KC_MINS,     LT(2,KC_DEL),LT(1,KC_SPC),   SFT_T(KC_BSPC),LT(2,KC_DEL),  KC_LEFT,  KC_DOWN, KC_UP,   KC_RGHT
  //`--------+--------+--------+--------+--------+--------+--------/        \--------+--------+--------+--------+--------+--------+--------'
  ),

  [1] = LAYOUT(
  //,--------+--------+--------+--------+--------+--------+--------.        ,--------+--------+--------+--------+--------+--------+--------.
     KC_GRV,  KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS,          KC_TRNS, KC_PEQL,   KC_7,    KC_8,   KC_9,   S(KC_6), KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_TAB,  KC_TRNS, KC_TRNS, S(KC_9), S(KC_0), KC_TRNS, KC_TRNS,          KC_TRNS, KC_PSLS,   KC_4,    KC_5,   KC_6,   KC_PAST, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_LSFT,KC_TRNS,KC_TRNS,S(KC_LBRC),S(KC_RBRC),KC_TRNS, KC_TRNS,         KC_TRNS, KC_PMNS,   KC_1,    KC_2,   KC_3,   KC_PPLS, KC_PENT,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS,           KC_TRNS,  KC_TRNS,          KC_SPC, KC_TRNS,            KC_0,  KC_PDOT,   M(1),    M(2)
  //`--------+--------+--------+--------+--------+--------+--------/        \--------+--------+--------+--------+--------+--------+--------'
  ),

  [2] = LAYOUT(
  //,--------+--------+--------+--------+--------+--------+--------.        ,--------+--------+--------+--------+--------+--------+--------.
     KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,            KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_TAB,  KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_TRNS, KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_LSFT, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS,          KC_TRNS, KC_SPC,           KC_SPC,  KC_TRNS,          KC_TRNS, KC_RALT, KC_RGUI, KC_RCTL
  //`--------+--------+--------+--------+--------+--------+--------/        \--------+--------+--------+--------+--------+--------+--------'
  ),

  [3] = LAYOUT(
  //,--------+--------+--------+--------+--------+--------+--------.        ,--------+--------+--------+--------+--------+--------+--------.
     KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TRNS,           KC_TRNS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_TRNS,           KC_TRNS, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_TRNS,           KC_TRNS, KC_N,    KC_M,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------+--------|
     KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS,          KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  //`--------+--------+--------+--------+--------+--------+--------/        \--------+--------+--------+--------+--------+--------+--------'
  )

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