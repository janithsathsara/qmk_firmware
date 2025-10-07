/* Copyright 2021 Carlos Martins
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

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
  // Physical Layout
  // Columns
  // 0  1  2  3  4  5  6  7  8  9  10 11 12 13
  //                                           ROWS
  // 12 13 22 23 32 33       33 32 23 22 13 12  0
  //    02    03    04       04    03    02
  // 11 14 21 24 31 34       34 31 24 21 14 11  1
  //                01       01
  // 10 15 20 25 30 35       35 30 25 20 15 10  2
  //
  // 09 16 19 26 29 36       36 29 26 19 16 09  3
  //
  //     08 17 18 27 28     28 27 18 17 08      4
  //    07    06    05       05    06    07

led_config_t g_led_config = {
    {
        {  11,  12,  21,  22,  31,  32 },
        {  10,  13,  20,  23,  30,  33 },
        {  9,   14,  19,  24,  29,  34},
        {  8,   15,  18,  25,  28,  35},
        {  7,   16,  17,  26,  27,  NO_LED },
        {  47,  48,  57,  58,  67,  68},
        {  46,  49,  56,  59,  66,  69},
        {  45,  50,  55,  60,  65,  70},
        {  44,  51,  54,  61,  64,  71},
        {  43,  52,  53,  62,  63,  NO_LED }
    },
    {
       // Left side underglow
        { 103, 32 }, { 17, 16 }, { 52, 16 }, { 86, 16 }, { 86, 64 }, { 52, 64 }, { 17, 64 },

        // Left side Matrix
        { 17, 64 }, { 0, 48 }, { 0, 32 }, { 0, 16 }, { 0, 0 },
        { 17, 0 }, { 17, 16 }, { 17, 32 }, { 17, 64 }, { 34, 64 },
        { 52, 64 }, { 34, 48 }, { 34, 32 }, { 34, 16 }, { 34, 0 },
        { 52, 0 }, { 52, 16 }, { 52, 32 }, { 52, 48 }, { 69, 64 },
        { 103, 64 }, { 69, 48 }, { 69, 32 }, { 69, 16 }, { 69, 0 },
        { 86, 0 }, { 86, 16 }, { 86, 32 }, { 86, 48 },
        
        // Right side underglow
        { 121, 32 }, { 207, 16 }, { 172, 16 }, { 138, 16 }, { 138, 64 }, { 172, 64 }, { 207, 64 },
        // Right side Matrix
        { 207, 64 }, { 224, 48 }, { 224, 32 }, { 224, 16 }, { 224, 0 },
        { 207, 0 }, { 207, 16 }, { 207, 32 }, { 207, 48 }, { 190, 64 },
        { 190, 64 }, { 190, 48 }, { 190, 32 }, { 190, 16 }, { 190, 0 },
        { 172, 0 }, { 172, 16 }, { 172, 32 }, { 172, 48 }, { 155, 64 },
        { 121, 64 }, { 155, 48 }, { 155, 32 }, { 155, 16 }, { 155, 0 },
        { 138, 0 }, { 138, 16 }, { 138, 32 }, { 138, 48 }
    },
    {
        LED_FLAG_INDICATOR, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_INDICATOR, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT
    }
};
#endif
