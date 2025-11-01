#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

enum layers {
  BASE,
  NAV,
  NUM,
  SYM,
};

enum {
  U_TD_BOOT,
};

tap_dance_action_t tap_dance_actions[] = {
  [U_TD_BOOT] = ACTION_TAP_DANCE_DOUBLE(KC_NO, QK_BOOT)
};

#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define CTL_D LCTL_T(KC_D)
#define SFT_F LSFT_T(KC_F)
#define SFT_J LSFT_T(KC_J)
#define CTL_K LCTL_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_ODIA LGUI_T(SE_ODIA)
#define ALGR_X ALGR_T(KC_X)
#define ALGR_DOT ALGR_T(SE_DOT)

// TODO: Add hyper modifier
// TODO: Test github.com/qmk/qmk_firmware/blob/develop/docs/tap_hold.md#flow-tap if it does not work well
// TODO: Add top left: TD(U_TD_BOOT) on all layers

// TODO: Document options for outputting aao:
// Option 1: US-Intl layout and outputting e.g. ALGR(US_P) for o
// This wont work since the second argument in mod taps LGUI_T(US_ODIA) cant be a modifier according to https://docs.qmk.fm/mod_tap#caveats
// Option 2: Use Swedish layout in OS and use QMK SE_ARNG etc to emit the correct ANSI/US keycode

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_split_3x6_3(
    XXXXXXX,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     SE_ARNG,
    KC_TAB,   GUI_A,    ALT_S,    CTL_D,    SFT_F,    KC_G,               KC_H,     SFT_J,    CTL_K,    ALT_L,    GUI_ODIA, SE_ADIA,
    XXXXXXX,  KC_Z,     ALGR_X,   KC_C,     KC_V,     KC_B,               KC_N,     KC_M,     SE_COMM,  ALGR_DOT, SE_MINS,  XXXXXXX,
                                KC_ESC,   LT(NAV,KC_SPC), KC_TAB,       LT(SYM,KC_ENT), LT(NUM,KC_BSPC), KC_DEL
  ),

  [NAV] = LAYOUT_split_3x6_3(
    TD(U_TD_BOOT), XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,       KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,            XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, XXXXXXX,
    XXXXXXX,       KC_CUT,   KC_COPY,  KC_PASTE, XXXXXXX,  XXXXXXX,            XXXXXXX,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   XXXXXXX,
                                        XXXXXXX, XXXXXXX,  XXXXXXX,            KC_ENT, KC_BSPC, KC_DEL
  ),

  [NUM] = LAYOUT_split_3x6_3(
    XXXXXXX,  SE_SLSH,  KC_7,     KC_8,     KC_9,     SE_PLUS,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  SE_ASTR,  KC_4,     KC_5,     KC_6,     SE_EQL,             XXXXXXX,  KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  KC_1,     KC_2,     KC_3,     XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                  KC_DOT,   KC_0,     SE_MINS,            XXXXXXX,  XXXXXXX,  XXXXXXX
  ),

  [SYM] = LAYOUT_split_3x6_3(
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    SE_LCBR,  SE_LBRC,  SE_LPRN,  SE_RPRN,    SE_RBRC,  SE_RCBR,            XXXXXXX,  KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  KC_NUBS,  S(KC_NUBS), XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                  XXXXXXX,    XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX
  )

  // [SYM] = LAYOUT_split_3x6_3(
  //   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //                                 XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX
  // )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
