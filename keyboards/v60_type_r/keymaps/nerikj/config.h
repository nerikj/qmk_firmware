/* Copyright 2017 benlyall, MechMerlin
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
#pragma once

// place overrides here

#undef LSPO_KEY
#undef RSPC_KEY
#define LSPO_KEY KC_8 // Nordic Left SpaceCadet
#define RSPC_KEY KC_9 // Nordic Right SpaceCadet
#define LSPO_KEYS KC_LSFT, LSPO_MOD, LSPO_KEY
#define RSPC_KEYS KC_RSFT, RSPC_MOD, RSPC_KEY

#define SFTENT_KEYS KC_LCTL, KC_TRNS, SFTENT_KEY

#ifdef V60_POLESTAR
#undef V60_POLESTAR
#endif
