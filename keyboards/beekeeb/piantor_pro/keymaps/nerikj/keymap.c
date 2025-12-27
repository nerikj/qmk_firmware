#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

enum layers {
  BASE,
  NAV,
  NUM,
  SYM,
  FUN,
  MED,
};

// enum combo_events {
//     CAPSLOCK_COMBO,
// };

enum {
    TD_LSFT_CW,
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

// const uint16_t PROGMEM capslock_combo[] = {
//     SFT_F,
//     SFT_J,
//     COMBO_END
// };

// combo_t key_combos[] = {
//     [CAPSLOCK_COMBO] = COMBO(capslock_combo, KC_CAPS),
// };

// tap dance for getting caps word working
void td_shift_capsword_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        add_oneshot_mods(MOD_LSFT);
    } else if (state->count == 2) {
        caps_word_on();
    }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_LSFT_CW] = ACTION_TAP_DANCE_FN(td_shift_capsword_finished),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_split_3x6_3(
    XXXXXXX,         KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     SE_ARNG,
    LT(MED,KC_ESC),  GUI_A,    ALT_S,    CTL_D,    SFT_F,    KC_G,               KC_H,     SFT_J,    CTL_K,    ALT_L,    GUI_ODIA, SE_ADIA,
    XXXXXXX,         KC_Z,     ALGR_X,   KC_C,     KC_V,     KC_B,               KC_N,     KC_M,     SE_COMM,  ALGR_DOT, SE_MINS,  XXXXXXX,
                              TD(TD_LSFT_CW),   LT(NAV,KC_SPC), KC_TAB,       LT(SYM,KC_ENT), LT(NUM,KC_BSPC), LT(FUN, KC_DEL)
  ),

  [NAV] = LAYOUT_split_3x6_3(
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,            KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, XXXXXXX,
    XXXXXXX,  XXXXXXX,  KC_CUT,   KC_COPY,  KC_PASTE, XXXXXXX,            KC_INS,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   XXXXXXX,
                                  XXXXXXX,  XXXXXXX,  XXXXXXX,            KC_ENT, KC_BSPC, KC_DEL
  ),

 [MED] = LAYOUT_split_3x6_3(
    //XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_SAI,  RGB_VAI,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,            XXXXXXX,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                  XXXXXXX,  XXXXXXX,  XXXXXXX,            KC_MSTP,  KC_MPLY,  KC_MUTE
  ),

  // Row 1: structure - () [] {} left→right by nesting strength.
  // Row 2: writing & markup - ! ? " ' @ # — common in prose, code, email.
  // Row 3: diacritics & accents - ` ´ ¨ ^ ~ grouped → mentally “dead keys live here”.
  // Bottom row: escapes & logic - \ | & are frequently paired in shells, regex, and code.
  /*
  ┌───────┬───────┬───────┬───────┬───────┬───────┐        ┌───────┬───────┬───────┬───────┬───────┬───────┐
  │   {   │   }   │   (   │   )   │   [   │   ]   │        │       │       │       │       │       │       │
  ├───────┼───────┼───────┼───────┼───────┼───────┤        ├───────┼───────┼───────┼───────┼───────┼───────┤
  │   #   │   !   │   ?   │   "   │   '   │   @   │        │       │ Shift │ Ctrl  │ Alt   │ GUI   │       │
  ├───────┼───────┼───────┼───────┼───────┼───────┤        ├───────┼───────┼───────┼───────┼───────┼───────┤
  │   `   │   ´   │   ¨   │   ^   │   ~   │  < >  │        │       │       │       │       │       │       │
  └───────┴───────┴───────┴───────┴───────┴───────┘        └───────┴───────┴───────┴───────┴───────┴───────┘
                      ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
                      │   \   │   |   │   &   │                    │       │       │       │
                      └───────┴───────┴───────┘                    └───────┴───────┴───────┘
  */
  [SYM] = LAYOUT_split_3x6_3(
    SE_LCBR,  SE_RCBR,  SE_LPRN,  SE_RPRN,  SE_LBRC,  SE_RBRC,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    SE_HASH,  SE_EXLM,  SE_QUES,  SE_DQUO,  SE_QUOT,  SE_AT,              XXXXXXX,  KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,  XXXXXXX,
    KC_GRV,   SE_ACUT,  SE_DIAE,  SE_CIRC,  SE_TILD,  KC_NUBS,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                  SE_BSLS,  SE_PIPE,  SE_AMPR,            XXXXXXX,  XXXXXXX,  XXXXXXX
  ),

  // It's on the left so that Nav can be on the right for maximum dexterity, and both Num and Nav can be activated by primary (home) thumb keys. Also, all same-hand layers are based on the same arrangement.
  /*
  ┌───────┬───────┬───────┬───────┬───────┬───────┐        ┌───────┬───────┬───────┬───────┬───────┬───────┐
  │   $   │   *   │   7   │   8   │   9   │   +   │        │       │       │       │       │       │       │
  ├───────┼───────┼───────┼───────┼───────┼───────┤        ├───────┼───────┼───────┼───────┼───────┼───────┤
  │   €   │   /   │   4   │   5   │   6   │   =   │        │       │ Shift │ Ctrl  │ Alt   │ GUI   │       │
  ├───────┼───────┼───────┼───────┼───────┼───────┤        ├───────┼───────┼───────┼───────┼───────┼───────┤
  │   #   │   %   │   1   │   2   │   3   │   −   │        │       │       │       │       │       │       │
  └───────┴───────┴───────┴───────┴───────┴───────┘        └───────┴───────┴───────┴───────┴───────┴───────┘
                      ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
                      │   .   │   0   │   ,   │                    │       │       │       │
                      └───────┴───────┴───────┘                    └───────┴───────┴───────┘
  */
  [NUM] = LAYOUT_split_3x6_3(
    SE_DLR,   SE_ASTR,  KC_7,     KC_8,     KC_9,     SE_PLUS,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    SE_EURO,  SE_SLSH,  KC_4,     KC_5,     KC_6,     SE_EQL,             XXXXXXX,  KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,  XXXXXXX,
    SE_PND,   SE_PERC,  KC_1,     KC_2,     KC_3,     SE_MINS,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                  KC_DOT,   KC_0,     SE_COMM,            XXXXXXX,  XXXXXXX,  XXXXXXX
  ),

  [FUN] = LAYOUT_split_3x6_3(
    XXXXXXX,  KC_F12,   KC_F7,    KC_F8,    KC_F9,    KC_PSCR,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT,
    XXXXXXX,  KC_F11,   KC_F4,    KC_F5,    KC_F6,    KC_SCRL,            XXXXXXX,  KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,  XXXXXXX,
    XXXXXXX,  KC_F10,   KC_F1,    KC_F2,    KC_F3,    KC_PAUS,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX
  )
};
