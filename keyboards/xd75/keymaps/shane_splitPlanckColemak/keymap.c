/* Copyright 2017 Wunder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "xd75.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* COLEMAK
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | `      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | F      | P      | G      | 7      | 8      | 9      | J      | L      | U      | Y      | ;      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | CAP LK | A      | R      | S      | T      | D      | 4      | 5      | 6      | H      | N      | E      | I      | O      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | 1      | 2      | 3      | K      | M      | ,      | .      | /      | ENT    |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   | LALT   | FN     | DEL    | SPACE  | ENT    | 0      | .      | BSPC   | SPACE  | FN     | RALT   | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [0] = { /* COLEMAK */
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,          KC_MINS, KC_GRV,  KC_EQL,  KC_6,           KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC },
  { KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,   KC_G,          KC_7,    KC_8,    KC_9,    KC_J,           KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_BSLS },
  { KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,   KC_D,          KC_4,    KC_5,    KC_6,    KC_H,           KC_N,   KC_E,    KC_I,    KC_O,    KC_QUOT },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,          KC_1,    KC_2,    KC_3,    KC_K,           KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT  },
  { KC_LCTL, KC_LGUI, KC_LALT, TG(1),  KC_DEL, LT(1,KC_SPC), KC_ENT,  KC_0,    KC_DOT,  SFT_T(KC_BSPC), KC_SPC, TG(1),  KC_RALT, KC_RGUI, KC_RCTL },
 },

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NLOCK  |        |        | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |   [    |    ]   |   P/   |   P7   |   P8   |   P9   |   P*   |  HOME  |   UP   |  END   |  PG UP |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |   (    |    )   |   P-   |   P4   |   P5   |   P6   |   P+   |  LEFT  |  DOWN  |  RIGHT |  PG DN |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |   {    |    }   |  " = " |   P1   |   P2   |   P3   |  PENT  |  VOLD  |  MUTE  |  VOLU  |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | RESET  |        |        |        |   SPC  | " == " |   P=   |   P0   |   P.   |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 
 [1] = { /* FUNCTION */
  { KC_F1,   KC_F2,   KC_F3,   KC_F4,       KC_F5,      KC_F6,   KC_NLCK, KC_SLSH, KC_ASTR, KC_F7,   KC_F8,    KC_F9,   KC_F10,   KC_F11,  KC_F12 },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC,     KC_RBRC,    KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_HOME,  KC_UP,   KC_END,   KC_PGUP, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, S(KC_9),     S(KC_0),    KC_PMNS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_LEFT,  KC_DOWN, KC_RIGHT, KC_PGDN, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, S(KC_LBRC),  S(KC_RBRC), M(2),    KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_VOLD,  KC_MUTE, KC_VOLU,  KC_TRNS, KC_TRNS },
  { RESET,   KC_TRNS, KC_TRNS, KC_TRNS,     KC_SPC,     KC_TRNS, KC_PEQL, KC_P0,   KC_PDOT, M(1),    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS },
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
