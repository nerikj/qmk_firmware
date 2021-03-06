#include QMK_KEYBOARD_H
#include "nerikj.h"

#define MY_EXLM LSFT(KC_1)
#define MY_HASH LSFT(KC_3)
#define MY_PERC LSFT(KC_5)
#define MY_AT RALT(KC_2)
#define MY_DLR RALT(KC_4)
#define MY_CIRC LSFT(KC_RBRC)
#define MY_LCBR RALT(KC_7)
#define MY_RCBR RALT(KC_0)
#define MY_LPRN LSFT(KC_8)
#define MY_RPRN LSFT(KC_9)
#define MY_LBRC RALT(KC_8)
#define MY_RBRC RALT(KC_9)
#define MY_PIPE RALT(KC_NUBS)
#define MY_GRV KC_EQL
#define MY_TILD RALT(KC_RBRC)

/* | -    | SLSH          | */
/* | +    | MINS          | */
/* | *    | LSFT(KC_PIPE) | */
/* | /    | LSFT(KC_7)    | */
/* | "."  | DOT           | */
/* | =    | LSFT(KC_0)    | */
/* | PIPE | RALT(KC_NUBS) | */
/* | \    | RALT(KC_MINS) | */
/* | \quot    | LSFT(KC_2)    | */
/* | %    | LSFT(KC_5)    | */
/* | &    | LSFT(KC_6)    | */
/* | ;    | SCLN          | */
/* | '    | QUOT          | */
/* | ,    | COMM          | */
/* | 1    | 1             | */
/* | 2    | 2             | */
/* | 3    | 3             | */
/* | 4    | 4             | */
/* | 5    | 5             | */
/* | 6    | 6             | */
/* | 7    | 7             | */
/* | 8    | 8             | */
/* | 9    | 9             | */
/* | 0    | 0             | */
/* | _    | LSFT(KC_SLSH) | */
/* | :    | LSFT(KC_DOT)  | */
/* | DQUO | DQUO          | */
/* | <    | NUBS          | */
/* | >    | LSFT(KC_NUBS) | */
/* | ?    | QUES          | */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer 0: Base
   * ,-----------------------------------------------------------.
   * | <>|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Bsp|   |
   * |-----------------------------------------------------------|
   * | Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P| [ | ] |  \  |
   * |-----------------------------------------------------------|
   * |  Esc |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
   * |-----------------------------------------------------------|
   * |  OSSft |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| OSSft|   |
   * |-----------------------------------------------------------'
   * | MED |NUM| NAV |         Space         | SYM |   |   | GAM |
   * `-----------------------------------------------------------'
   */
  [BASE] = LAYOUT_60_ansi(
      KC_NUBS,       KC_1,     KC_2,       KC_3,     KC_4,     KC_5, KC_6, KC_7,     KC_8,     KC_9,         KC_0,        KC_MINS, KC_EQL,  KC_BSPC,
      KC_TAB,        KC_Q,     KC_W,       KC_E,     KC_R,     KC_T, KC_Y, KC_U,     KC_I,     KC_O,         KC_P,        KC_LBRC, KC_RBRC, KC_BSLS,
      KC_ESC,        HOME_A,   HOME_S,     HOME_D,   HOME_F,   KC_G, KC_H, HOME_J,   HOME_K,   HOME_L,       HOME_SCLN,   KC_QUOT, KC_ENT,
      OSM(MOD_LSFT), KC_Z,     HOME_X,     KC_C,     KC_V,     KC_B, KC_N, KC_M,     KC_COMM,  HOME_DOT,     KC_SLSH,     OSM(MOD_RSFT),
      MO(MED),       MO(NUM),  MO(NAV),            KC_SPC,                MO(SYM),   MO(FUN),  XXXXXXX,      DF(GAM)
  ),

  /* Layer: R MED
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |---------------------------------------------------------- |
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |---------------------------------------------------------- |
   * |      |Gui|Alt|Ctl|Sft|   |   |   |Prv|VoD|VoU|Nxt|        |
   * |---------------------------------------------------------- |
   * |        |   |AGr|   |   |   |   |   |   |   |   |      |   |
   * |-----------------------------------------------------------|
   * |     |   |     |                       | Stp |Ply|Mut|     |
   * `-----------------------------------------------------------'
   */
  [MED] = LAYOUT_60_ansi(
    XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,
    XXXXXXX,  HOME_A,   HOME_S,     HOME_D,   HOME_F,   XXXXXXX,  XXXXXXX,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  HOME_X,     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,  KC_MSTP,  KC_MPLY,  KC_MUTE,  XXXXXXX
  ),

  /* Layer: R NUM
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |---------------------------------------------------------- |
   * |     |   |   |   |   |   |   |   | 7 | 8 | 9 |   |   |     |
   * |---------------------------------------------------------- |
   * |      |Gui|Alt|Ctl|Sft|   |   |   | 4 | 5 | 6 |   |        |
   * |---------------------------------------------------------- |
   * |        |   |AGr|   |   |   |   |   | 1 | 2 | 3 |      |   |
   * |-----------------------------------------------------------|
   * |     |   |     |                       |  0  |DOT|   |     |
   * `-----------------------------------------------------------'
   */
  [NUM] = LAYOUT_60_ansi(
    XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_7,     KC_8,     KC_9,     XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,
    XXXXXXX,  HOME_A,   HOME_S,     HOME_D,   HOME_F,   XXXXXXX,  XXXXXXX,  KC_4,     KC_5,     KC_6,     XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  HOME_X,     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_1,     KC_2,     KC_3,     XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,  KC_0,     KC_DOT,   XXXXXXX,  XXXXXXX
  ),

  /* Layer 1: Nav
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |Del|   |
   * |---------------------------------------------------------- |
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |---------------------------------------------------------- |
   * |      |Gui|Alt|Ctl|Sft|   |   |Cap|Lft|Dwn|Up |Rht|        |
   * |---------------------------------------------------------- |
   * |        |   |AGr|   |   |   |   |Hom|PDn|PUp|End|      |   |
   * |-----------------------------------------------------------|
   * |     |   |     |                       |     |   |   |     |
   * `-----------------------------------------------------------'
   */
  [NAV] = LAYOUT_60_ansi(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        KC_DEL,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        HOME_A,         HOME_S,         HOME_D,         HOME_F,         _______,        KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        _______,        _______,
    _______,        _______,        HOME_X,         _______,        _______,        _______,        _______,        KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,         _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______
  ),

  /* Layer 1: Sym
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |---------------------------------------------------------- |
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |---------------------------------------------------------- |
   * |      |Gui|Alt|Ctl|Sft|   |   |Cap|Lft|Dwn|Up |Rht|        |
   * |---------------------------------------------------------- |
   * |        |   |AGr|   |   |   |   |Hom|PDn|PUp|End|      |   |
   * |-----------------------------------------------------------|
   * |     |   |     |                       |     |   |   |     |
   * `-----------------------------------------------------------'
   */
  [SYM] = LAYOUT_60_ansi(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, MY_EXLM, MY_AT,   MY_LCBR, MY_RCBR, MY_PIPE, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, MY_HASH, MY_DLR,  MY_LPRN, MY_RPRN, MY_GRV,  XXXXXXX, HOME_J,   HOME_K,   HOME_L,       HOME_SCLN,   XXXXXXX, XXXXXXX,
    XXXXXXX, MY_PERC, MY_CIRC, MY_LBRC, MY_RBRC, MY_TILD, XXXXXXX, XXXXXXX,  XXXXXXX,  HOME_DOT,     XXXXXXX,     XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [NUM] = LAYOUT_60_ansi(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_SLSH,        KC_7,           KC_8,           KC_9,           XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_MINS,        KC_4,           KC_5,           KC_6,           XXXXXXX,        XXXXXXX,        HOME_J,         HOME_K,         HOME_L,         HOME_SCLN,      XXXXXXX,        XXXXXXX,
    XXXXXXX,        LSFT(KC_PIPE),  KC_1,           KC_2,           KC_3,           XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        HOME_DOT,       XXXXXXX,        XXXXXXX,
    KC_DOT,         KC_0,           LSFT(KC_7),     XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX
  ),
  [3] = LAYOUT_60_ansi(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        HOME_A,         HOME_S,         HOME_D,         HOME_F,         XXXXXXX,        XXXXXXX,        KC_MS_L,        KC_MS_D,        KC_MS_U,        KC_MS_R,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        HOME_X,         XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_WH_L,        KC_WH_D,        KC_WH_U,        KC_WH_R,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_BTN1,        KC_BTN2,        KC_BTN3,        XXXXXXX
  ),
  [6] = LAYOUT_60_ansi(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_SLCK,        XXXXXXX,        HOME_J,         HOME_K,         HOME_L,         HOME_SCLN,      XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUS,        XXXXXXX,        XXXXXXX,        XXXXXXX,        HOME_DOT,       XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX
  ),

  /* Layer: FUN
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
   * |---------------------------------------------------------- |
   * |     | F1| F2| F3| F4|   |   |   |   |   |   |   |   |     |
   * |---------------------------------------------------------- |
   * |      | F5| F6| F7| F8|   |   |   |Sft|Ctl|Alt|Gui|        |
   * |---------------------------------------------------------- |
   * |        | F9|F10|F11|F12|   |   |   |   |AGr|   |          |
   * |-----------------------------------------------------------|
   * |     |   |     |                       |     |   |   |     |
   * `-----------------------------------------------------------'
   */
  [FUN] = LAYOUT_60_ansi(
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  KC_F5,    KC_F6,    KC_F7,    KC_F8,    XXXXXXX,  XXXXXXX,  HOME_J,   HOME_K,   HOME_L,    HOME_SCLN,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  KC_F9,    KC_F10,   KC_F11,   KC_F12,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  HOME_DOT,  XXXXXXX,    XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),

  [GAM] = LAYOUT_60_ansi(
    KC_NUBS,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,        KC_EQL,         KC_BSPC,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        KC_RBRC,        KC_BSLS,
    KC_ESC,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,        KC_ENT,
    KC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_RSPC,
    KC_LCTL,        KC_LGUI,        KC_LALT,        KC_SPC,         KC_RALT,        KC_RGUI,        MO(8),          DF(0)
  ),
  [8] = LAYOUT_60_ansi(
    _______,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_DEL,
    _______,        _______,        KC_UP,          _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        KC_LEFT,        KC_DOWN,        KC_RGHT,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        KC_VOLD,        KC_VOLU,        KC_MUTE,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______
  )

  /* Layer 1: Nav
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |---------------------------------------------------------- |
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |---------------------------------------------------------- |
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |---------------------------------------------------------- |
   * |        |   |   |   |   |   |   |   |   |   |   |      |   |
   * |-----------------------------------------------------------|
   * |     |   |     |                       |     |   |   |     |
   * `-----------------------------------------------------------'
   */
  /* [NAV] = LAYOUT_60_ansi( */
  /*   _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        KC_DEL,         _______, */
  /*   _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______, */
  /*   _______,        HOME_A,         HOME_S,         HOME_D,         HOME_F,         _______,        KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        _______,        _______, */
  /*   _______,        _______,        HOME_X,         _______,        _______,        _______,        _______,        KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,         _______,        _______, */
  /*   _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______ */
  /* ), */
  /* [SYM] = LAYOUT_60_ansi( */
  /*   XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX, */
  /*   XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX, */
  /*   XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        HOME_J,         HOME_K,         HOME_L,         HOME_SCLN,      XXXXXXX,        XXXXXXX, */
  /*   XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        HOME_DOT,       XXXXXXX,        XXXXXXX,        XXXXXXX, */
  /*   XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX */
  /* ), */

};
