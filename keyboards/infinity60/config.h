/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1c11
#define PRODUCT_ID      0xb04d
#define DEVICE_VER      0x0001
#define MANUFACTURER Input Club
#define PRODUCT Infinity_60%_LED/QMK
/* key matrix size */
#define MATRIX_ROWS 9
#define MATRIX_COLS 7

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* Keymap for Infinity prototype */
//#define INFINITY_PROTOTYPE

/* Keymap for Infinity 1.1a (first revision with LED support) */
#define INFINITY_LED

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#undef LSPO_KEY
#undef RSPC_KEY
#define LSPO_KEY KC_8 // Nordic Left SpaceCadet
#define RSPC_KEY KC_9 // Nordic Right SpaceCadet

#define LSPO_KEYS KC_LSFT, LSPO_MOD, LSPO_KEY
#define RSPC_KEYS KC_RSFT, RSPC_MOD, RSPC_KEY

#endif
