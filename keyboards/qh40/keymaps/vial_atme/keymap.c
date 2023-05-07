/* Copyright 2021 beanaccle
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
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SEMICOLON, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMMA,  KC_DOT, KC_SLASH,  KC_RSHIFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(2),  KC_SPC,     KC_ENT,   MO(1), KC_RCTL
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_CAPS_LOCK,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(3), KC_RCTL
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, LSFT(KC_1),   LSFT(KC_2), LSFT(KC_3),  LSFT(KC_4), LSFT(KC_5),                      LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), KC_ESCAPE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_GRAVE,  KC_MINUS, KC_EQUAL, KC_LEFT_BRACKET, KC_RIGHT_BRACKET,  KC_BACKSLASH,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      LSFT(KC_GRAVE), LSFT(KC_MINUS), LSFT(KC_EQUAL), LSFT(KC_LEFT_BRACKET), LSFT(KC_RIGHT_BRACKET), LSFT(KC_BACKSLASH),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, _______, KC_RCTL
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                      KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, KC_BRIGHTNESS_UP, KC_KB_VOLUME_UP, XXXXXXX,                      KC_MS_WH_RIGHT, KC_MS_WH_UP, KC_MS_WH_DOWN, KC_MS_WH_LEFT, KC_MS_BTN1, KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_VAI, RGB_SPI, KC_BRIGHTNESS_DOWN, KC_KB_VOLUME_DOWN, XXXXXXX,                      KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_MS_BTN2, KC_MS_BTN3,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RCTL
                                      //`--------------------------'  `--------------------------'
  )
};
