#include QMK_KEYBOARD_H

#define _QGMLWY 0
#define _SPCFN 1
#define _QWERTY 2
#define _RAISE 3

enum custom_keycodes {
  QGMLWY = SAFE_RANGE,
  SPCFN,
  QWERTY,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QGMLWY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                         ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_LBRC, KC_LCBR, KC_RCBR, KC_LPRN, KC_EQL,                                            KC_ASTR, KC_RPRN, KC_PLUS, KC_RBRC, KC_EXLM, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                                         ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_G,    KC_M,    KC_L,    KC_W,                                              KC_Y,    KC_F,    KC_U,    KC_B,    KC_SCOLON,KC_MINUS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                                         ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSHIFT,KC_D,   KC_S,    KC_T,    KC_N,    KC_R,                                              KC_I,    KC_A,    KC_E,    KC_O,    KC_H,    KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼───────────┐                       ┌─────└──┬─────┴─┬──────┴─┬─────┴──┬─────┴──┬─────┴──┬─────┴┐
     KC_LCTRL,KC_Z,    KC_X,    KC_C,    KC_V,    KC_J,    KC_PSCREEN,                         KC_PAUSE,KC_K,   KC_P,    KC_COMM, KC_DOT,  KC_SLSH, KC_AT,
  //└────────┴────────┴────┬───┴────┬───┴───────┬┴────────┴───────────┤                       └───┬────┴───┬───┴────────┴─────┬──┴────────┴────────┴──────┘
                            KC_LALT, MO(_RAISE), MT(MOD_LGUI, KC_F13),                             KC_ENT,  LT(_SPCFN, KC_SPC), KC_F16
                        // └────────┴───────────┴─────────────────────┘                           └────────┴───────────────────┴──────┘
  ),

  [_SPCFN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QWERTY,  _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_BSPACE,_______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSHIFT, _______, _______, _______, _______, _______,                            KC_PGDOWN,KC_LEFT,KC_DOWN, KC_RIGHT,KC_SPACE,_______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTRL, _______, _______, _______, _______, _______, _______,          KC_APP, _______, KC_DELETE,_______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   KC_F15,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINUS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HOME,          KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_AT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, RAISE,   MT(MOD_LGUI, KC_F13),      KC_ENT,  KC_SPC,   KC_F16
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TILD, KC_CIRC, KC_AMPR, KC_HASH, KC_DLR,  KC_PERC,                            RGB_HUI, RGB_RMOD,RGB_VAI, RGB_MOD, RGB_SAI,UC(0x2014),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, UC(0x25CA),KC_GRV,                          RGB_HUD, RGB_SPD, RGB_VAD, RGB_SPI, RGB_SAD, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, KC_F14,           QGMLWY,  _______, _______, _______, _______, KC_BSLASH,_______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, _______, KC_RALT,                   RGB_TOG, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};

const key_override_t LBRC_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_7);
const key_override_t LCBR_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_5);
const key_override_t RCBR_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RCBR, KC_3);
const key_override_t LPRN_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_1);
const key_override_t EQL_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_EQL, KC_9);

const key_override_t ASTR_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_ASTR, KC_0);
const key_override_t RPRN_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_2);
const key_override_t PLUS_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_PLUS, KC_4);
const key_override_t RBRC_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RBRC, KC_6);
const key_override_t EXLM_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_EXLM, KC_8);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &LBRC_key_override,
	&LCBR_key_override,
	&RCBR_key_override,
	&LPRN_key_override,
	&EQL_key_override,
	&ASTR_key_override,
	&RPRN_key_override,
	&PLUS_key_override,
	&RBRC_key_override,
	&EXLM_key_override,
    NULL // Null terminate the array of overrides!
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QGMLWY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QGMLWY);
      }
      return false;
      break;
    case SPCFN:
      if (record->event.pressed) {
        layer_on(_SPCFN);
      } else {
        layer_off(_SPCFN);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
      } else {
        layer_off(_RAISE);
      }
      return false;
      break;
    case QWERTY:
      if (record->event.pressed) {
        layer_on(_QWERTY);
      } else {
        layer_off(_QWERTY);
      }
      return false;
      break;
  }
  return true;
}
