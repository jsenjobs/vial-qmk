/*
Copyright 2021 beanaccle

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

#pragma once

#include "config_common.h"

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B7, B6, B9, B12 }
#define MATRIX_COL_PINS { A7, B0, B1, B10, B11, A6 }
#define MATRIX_ROW_PINS_RIGHT { B1, A4, A2, A3 }
#define MATRIX_COL_PINS_RIGHT { B8, B9, B4, B5, B6, B7 }

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define USE_SERIAL
#define SOFT_SERIAL_PIN A3  // or D0, D1, D3, E6
#define SOFT_SERIAL_PIN_RIGHT A1  // or D0, D1, D3, E6

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN B5
#define RGB_DI_PIN_RIGHT B0
