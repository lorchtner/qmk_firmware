/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_iso_83(
         KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,             KC_MNXT,
         KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
         KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
         KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,   KC_HOME,
         KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
         KC_LCTL,  KC_LALT,  KC_LGUI,                                KC_SPC,                                 KC_RGUI,  MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_iso_83(
         KC_ESC,   KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,            _______,
         _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
         RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,    _______,                      _______,
         _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
         _______,  _______,  _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,
         _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_iso_83(
         KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,             KC_MUTE,
         KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
         KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
         KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_HOME,
         KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
         KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_iso_83(
         _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,            _______,
         _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
         RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,    _______,                      _______,
         _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
         _______,  _______,  _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,
         _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}
};
#endif // ENCODER_MAP_ENABLE

enum combos {
    CMB_F_D_FOR_LGUI,
    CMB_F_S_FOR_LALT,
    CMB_F_A_FOR_LCTL,
    CMB_F_D_S_FOR_LGUI_LALT,
    CMB_F_D_A_FOR_LGUI_LCTL,
    CMB_F_D_S_A_FOR_LGUI_LALT_LCTL,
    CMB_F_S_A_FOR_LALT_LCTL,
    CMB_J_K_FOR_RGUI,
    CMB_J_L_FOR_LALT,
    CMB_J_SCLN_FOR_RCTL,
    CMB_J_K_L_FOR_RGUI_LALT,
    CMB_J_K_SCLN_FOR_RGUI_RCTL,
    CMB_J_K_L_SCLN_FOR_RGUI_LALT_RCTL,
    CMB_J_L_SCLN_FOR_LALT_RCTL
};

const uint16_t PROGMEM f_d_combo[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM f_s_combo[] = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM f_a_combo[] = {KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM f_d_s_combo[] = {KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM f_d_a_combo[] = {KC_F, KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM f_d_s_a_combo[] = {KC_F, KC_D, KC_S , KC_A, COMBO_END};
const uint16_t PROGMEM f_s_a_combo[] = {KC_F, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM j_k_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM j_l_combo[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM j_scln_combo[] = {KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM j_k_l_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM j_k_scln_combo[] = {KC_J, KC_K, KC_SCLN, COMBO_END};
const uint16_t PROGMEM j_k_l_scln_combo[] = {KC_J, KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM j_l_scln_combo[] = {KC_J, KC_L, KC_SCLN, COMBO_END};

combo_t key_combos[] = {
    [CMB_F_D_FOR_LGUI] = COMBO(f_d_combo, KC_LGUI),
    [CMB_F_S_FOR_LALT] = COMBO(f_s_combo, KC_LALT),
    [CMB_F_A_FOR_LCTL] = COMBO(f_a_combo, KC_LCTL),
    [CMB_F_D_S_FOR_LGUI_LALT] = COMBO(f_d_s_combo, LGUI(KC_LALT)),
    [CMB_F_D_A_FOR_LGUI_LCTL] = COMBO(f_d_a_combo, LGUI(KC_LCTL)),
    [CMB_F_D_S_A_FOR_LGUI_LALT_LCTL] = COMBO(f_d_s_a_combo, LGUI(LALT(KC_LCTL))),
    [CMB_F_S_A_FOR_LALT_LCTL] = COMBO(f_s_a_combo, LALT(KC_LCTL)),
    [CMB_J_K_FOR_RGUI] = COMBO(j_k_combo, KC_RGUI),
    [CMB_J_L_FOR_LALT] = COMBO(j_l_combo, KC_LALT),
    [CMB_J_SCLN_FOR_RCTL] = COMBO(j_scln_combo, KC_RCTL),
    [CMB_J_K_L_FOR_RGUI_LALT] = COMBO(j_k_l_combo, RGUI(KC_LALT)),
    [CMB_J_K_SCLN_FOR_RGUI_RCTL] = COMBO(j_k_scln_combo, RGUI(KC_RCTL)),
    [CMB_J_K_L_SCLN_FOR_RGUI_LALT_RCTL] = COMBO(j_k_l_scln_combo, RGUI(LALT(KC_RCTL))),
    [CMB_J_L_SCLN_FOR_LALT_RCTL] = COMBO(j_l_scln_combo, LALT(KC_RCTL)),
};
