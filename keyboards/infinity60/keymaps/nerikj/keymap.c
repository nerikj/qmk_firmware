#include QMK_KEYBOARD_H

#define KC_GUI_A LGUI_T(KC_A)
#define KC_ALT_S LALT_T(KC_S)
#define KC_CTL_D LCTL_T(KC_D)
#define KC_SFT_F LSFT_T(KC_F)
#define KC_ALTGR_X RALT_T(KC_X)

#define KC_SFT_J LSFT_T(KC_J)
#define KC_CTL_K LCTL_T(KC_K)
#define KC_ALT_L LALT_T(KC_L)
#define KC_GUI_SCLN LGUI_T(KC_SCLN)
#define KC_ALTGR_DOT RALT_T(KC_DOT)

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_60_ansi_split_bs_rshift(
    KC_NUBS,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_MINS,        KC_EQL,         KC_BSPC,        XXXXXXX,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        KC_RBRC,        KC_BSLS,
    KC_ESC,         KC_GUI_A,       KC_ALT_S,       KC_CTL_D,       KC_SFT_F,       KC_G,           KC_H,           KC_SFT_J,       KC_CTL_K,       KC_ALT_L,       KC_GUI_SCLN,    KC_QUOT,        KC_ENT,
    XXXXXXX,        KC_Z,           KC_ALTGR_X,     KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_ALTGR_DOT,   KC_SLSH,        XXXXXXX,        XXXXXXX,
    MO(5),          MO(3),          MO(1),          KC_SPC,         MO(2),          MO(4),          MO(6),          DF(7)
  ),
  [1] = LAYOUT_60_ansi_split_bs_rshift(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        KC_DEL,         _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        KC_GUI_A,       KC_ALT_S,       KC_CTL_D,       KC_SFT_F,       _______,        KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        _______,        _______,
    _______,        _______,        KC_ALTGR_X,     _______,        _______,        _______,        _______,        KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,         _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______
  ),
  [2] = LAYOUT_60_ansi_split_bs_rshift(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        KC_DEL,         _______,
    _______,        _______,        KC_7,           KC_8,           KC_9,           _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        KC_4,           KC_5,           KC_6,           _______,        _______,        KC_SFT_J,       KC_CTL_K,       KC_ALT_L,       KC_GUI_SCLN,    _______,        _______,
    _______,        _______,        KC_1,           KC_2,           KC_3,           _______,        _______,        _______,        _______,        KC_ALTGR_DOT,   _______,        _______,        _______,
    KC_DOT,         KC_0,           KC_SLSH,        _______,        _______,        _______,        _______,        _______
  ),
  [5] = LAYOUT_60_ansi_split_bs_rshift(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        KC_GUI_A,       KC_ALT_S,       KC_CTL_D,       KC_SFT_F,       _______,        _______,        KC_MPRV,        KC_VOLD,        KC_VOLU,        KC_MNXT,        _______,        _______,
    _______,        _______,        KC_ALTGR_X,     _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______
  ),
  [6] = LAYOUT_60_ansi_split_bs_rshift(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        KC_F11,         KC_F4,          KC_F5,          KC_F6,          _______,        _______,        KC_SFT_J,       KC_CTL_K,       KC_ALT_L,       KC_GUI_SCLN,    _______,        _______,
    _______,        KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUS,        _______,        _______,        _______,        KC_ALTGR_DOT,   _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______
  ),
  [7] = LAYOUT_60_ansi_split_bs_rshift(
    KC_NUBS,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,        KC_EQL,         KC_BSPC,        _______,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        KC_RBRC,        KC_BSLS,
    KC_ESC,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,        KC_ENT,
    KC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_RSPC,        _______,
    KC_LCTL,        KC_LGUI,        KC_LALT,        KC_SPC,         KC_RALT,        KC_RGUI,        MO(8),          DF(0)
  ),
  [8] = LAYOUT_60_ansi_split_bs_rshift(
    _______,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_DEL,         _______,
    _______,        _______,        KC_UP,          _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        KC_LEFT,        KC_DOWN,        KC_RGHT,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        KC_VOLD,        KC_VOLU,        KC_MUTE,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______
  )
};
