#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   ESC  |  1 ! | 2 @  | 3 #  | 4 $  | 5 %  |  - _ |           | = +  |  6 ^ | 7 &  |  8 * | 9 (  | 0 )  | Backsp |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |   TAB  |   Q  |   W  |   F  |   P  |   G  | [ {  |           | ] }  |   J  |   L  |   U  |   Y  |  ; : |  \ |   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |  CAPS  |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |  ' "   |
 * |--------+------+------+------+------+------|  (   |           |   )  |------+------+------+------+------+--------|
 * | Shift  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |  , < |  . > |  /?  |  ENT   |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | LCTL | LGUI | LALT |  UP  |  DN  |                                       | LEFT | RGHT | RALT | RGUI | RCTL |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,--------------.       ,--------------.
 *                                        |  Esc | GRV   |       | TG(1)| Del   |
 *                                 ,------|------|-------|       |------+-------+------.
 *                                 |      |      | Home  |       | PgUp |       |      |
 *                                 | SPC  | DEL  |-------|       |------|  SPC  | BSPC |
 *                                 | H(2) | H(3) | End   |       | PgDn | H(4)  |H(SFT)|
 *                                 `---------------------'       `---------------------'
 */
[0] = LAYOUT_ergodox(  // layer 0 : default 
        // left hand
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,        KC_5,        KC_MINS,
        KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,        KC_G,        KC_LBRC,
        KC_CAPS,    KC_A,       KC_R,       KC_S,       KC_T,        KC_D,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,        KC_B,        S(KC_9),
        KC_LCTL,    KC_LGUI,    KC_LALT,    KC_UP,      KC_DOWN,

                    KC_ESC,     KC_GRV,
                    KC_HOME,
        LT(2, KC_SPC),      LT(3, KC_DEL),      KC_END,

        // right hand
        KC_EQL,     KC_6,       KC_7,       KC_8,       KC_9,        KC_0,      KC_BSPC,
        KC_RBRC,    KC_J,       KC_L,       KC_U,       KC_Y,        KC_SCLN,     KC_BSLS,
                    KC_H,       KC_N,       KC_E,       KC_I,        KC_O,        KC_QUOT,
        S(KC_0),    KC_K,       KC_M,       KC_COMM,    KC_DOT,      KC_SLSH,     KC_ENT,
                                KC_LEFT,    KC_RIGHT,   KC_RALT,     KC_RGUI,     KC_RCTL,

        TG(1),      KC_DEL,
        KC_PGUP,
        KC_PGDN,    LT(3, KC_SPC),     SFT_T(KC_BSPC)
    ),

/* Keymap 1: QWERTY layer (games)
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 | SPC  |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
[1] = LAYOUT_ergodox(  // layer 1: QWERTY layer (games) 
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_TRNS,
       KC_TRNS,        KC_A,       KC_S,       KC_D,       KC_F,       KC_G,
       KC_TRNS,        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

                       KC_TRNS,    KC_TRNS,
                                   KC_TRNS,
       KC_SPC,        KC_TRNS,    KC_TRNS,
       
    // right hand
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_TRNS,
                       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_TRNS,
       KC_TRNS,        KC_N,       KC_M,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,
       KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS
    ),

/* Keymap 2: Numpad Layer
*
* ,--------------------------------------------------.           ,--------------------------------------------------.
* |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  | F10  | F11  | F12  |        |
* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
* |        |      |      |  [   |   ]  |      |      |           |      |   =  |   7  |   8  |   9  |   ^  |        |
* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
* |        |      |      |  (   |   )  |      |------|           |------|   /  |   4  |   5  |   6  |   *  |        |
* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
* |        |      |      |  {   |   }  |      |      |           |      |   -  |   1  |   2  |   3  |   +  |  ENT   |
* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
*   |      |      |      |      |      |                                       |   ,  |   0  |   .  | " = "|" == "|
*   `----------------------------------'                                       `----------------------------------'
*                                        ,-------------.       ,-------------.
*                                        |      |      |       | NLCK |      |
*                                 ,------|------|------|       |------+------+------.
*                                 |      |      |      |       |      |      |      |
*                                 |      |      |------|       |------| BSPC | SPC  |
*                                 |      |      |      |       |      |      |      |
*                                 `--------------------'       `--------------------'
*/
// NUMPAD
[2] = LAYOUT_ergodox(
       // left hand
       KC_TRNS,        KC_F1,        KC_F2,       KC_F3,      KC_F4,       KC_F5,      KC_F6,
       KC_TRNS,        KC_TRNS,      KC_TRNS,     KC_LBRC,    KC_RBRC,     KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,      KC_TRNS,     S(KC_9),    S(KC_0),     KC_TRNS,
       KC_TRNS,        KC_TRNS,      KC_TRNS,     S(KC_LBRC), S(KC_RBRC),  KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,      KC_TRNS,     KC_TRNS,    KC_TRNS,

                       KC_TRNS,      KC_TRNS,
                                     KC_TRNS,
       KC_TRNS,        KC_TRNS,      KC_TRNS,

       // right hand
       KC_F7,          KC_F8,        KC_F9,        KC_F10,     KC_F11,    KC_F12,     KC_TRNS,
       KC_TRNS,        KC_PEQL,      KC_P7,        KC_P8,      KC_P9,     S(KC_6),    KC_TRNS,
                       KC_PSLS,      KC_P4,        KC_P5,      KC_P6,     KC_PAST,    KC_TRNS,
       KC_TRNS,        KC_PMNS,      KC_P1,        KC_P2,      KC_P3,     KC_PPLS,    KC_PENT,
                                     KC_PCMM,      KC_P0,      KC_PDOT,   M(1),       M(2),

       KC_NLCK,        KC_TRNS,
       KC_TRNS,
       KC_TRNS,        KC_BSPC,      KC_SPC
),

/* Keymap 3: Utility
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      | HOME |  UP  | END  | VOL+ |      |           |      | VOL+ | HOME |  UP  | END  |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      | LEFT | DOWN |RIGHT | MUTE |------|           |------| MUTE | LEFT | DOWN | RGHT |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      | MPRV | MPLY | MNXT | VOL- |      |           |      | VOL- | MPRV | MPLY | MNXT |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------        |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// UTILITY
[3] = LAYOUT_ergodox(
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_HOME,    KC_UP,      KC_END,     KC_VOLU,    KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_MUTE,
       KC_TRNS,        KC_TRNS,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_VOLD,    KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

                       KC_TRNS,    KC_TRNS,
                                   KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS,

       // right hand
       KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
       KC_TRNS,        KC_VOLU,    KC_HOME,    KC_UP,      KC_END,     KC_TRNS,    KC_TRNS,
                       KC_MUTE,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_TRNS,    KC_TRNS,
       KC_TRNS,        KC_VOLD,    KC_MPRV,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_TRNS,
                                   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

       KC_TRNS,        KC_TRNS,
       KC_TRNS,
       KC_TRNS,        KC_TRNS,    KC_TRNS
),

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
	
// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    static uint8_t state;

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    //reduce LED on time to 1/6th because LEDs are too strong
    if (++state < 6) return;
    state = 0;

    //bit 1: default layer 1 - QWERTY
    if (default_layer_state & (1UL << 1)) ergodox_right_led_1_on();

    uint8_t layer = biton32(layer_state);

    //layer 2 : Symbols (& Fs)
    //if (layer == 2) ergodox_right_led_2_on();

    //layer 3 : F-lock
    if (layer == 3) ergodox_right_led_2_on();

    //layer 4 : Num-lock
    if (layer == 4) ergodox_right_led_3_on();
};
