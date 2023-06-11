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

enum layers {
    BASE,
    NUMBER_LAYER,
    F_KEY_LAYER,
    FN
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_iso_83(
         KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,             KC_MNXT,
         KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
         KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
         KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_HOME,
         KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
         KC_LCTL,  KC_LALT,  KC_LGUI,                                KC_SPC,                                 KC_RGUI,  MO(FN),     KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [NUMBER_LAYER] = LAYOUT_iso_83(
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
         XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,                   XXXXXXX,
         XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

    [F_KEY_LAYER] = LAYOUT_iso_83(
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,
         XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX,          XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

    [FN] = LAYOUT_iso_83(
            XXXXXXX,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  XXXXXXX,            XXXXXXX,
            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,  XXXXXXX,            XXXXXXX,
            RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                      XXXXXXX,
            XXXXXXX,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,  XXXXXXX,            XXXXXXX,
            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  NK_TOGG,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,              XXXXXXX,  XXXXXXX,
            XXXXXXX,  XXXXXXX,  XXXXXXX,                                XXXXXXX,                                XXXXXXX,  XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE]         = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [NUMBER_LAYER] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX)},
    [F_KEY_LAYER]  = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX)},
    [FN]           = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX)}
};
#endif // ENCODER_MAP_ENABLE

enum combos {
    CMB_F_D,
    CMB_F_S,
    CMB_F_A,
    CMB_F_D_S,
    CMB_F_D_A,
    CMB_F_D_S_A,
    CMB_F_S_A,
    CMB_J_K,
    CMB_J_L,
    CMB_J_SCLN,
    CMB_J_K_L,
    CMB_J_K_SCLN,
    CMB_J_K_L_SCLN,
    CMB_J_L_SCLN,

    CMB_S_D,
    CMB_K_L,
    CMB_A_S,
    CMB_L_SCLN,

    CMB_F_J,
    CMB_D_K,
    CMB_D_J,
    CMB_F_K
};

// COMBO MODS
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

// LAYER SWITCH COMBOS
const uint16_t PROGMEM s_d_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM k_l_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM a_s_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM l_scln_combo[] = {KC_L, KC_SCLN, COMBO_END};

// KEY COMBOS
const uint16_t PROGMEM f_j_combo[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM d_k_combo[] = {KC_D, KC_K, COMBO_END};
const uint16_t PROGMEM d_j_combo[] = {KC_D, KC_J, COMBO_END};
const uint16_t PROGMEM f_k_combo[] = {KC_F, KC_K, COMBO_END};

combo_t key_combos[] = {
    [CMB_F_D] = COMBO(f_d_combo, KC_LGUI),
    [CMB_F_S] = COMBO(f_s_combo, KC_LALT),
    [CMB_F_A] = COMBO(f_a_combo, KC_LCTL),
    [CMB_F_D_S] = COMBO(f_d_s_combo, LGUI(KC_LALT)),
    [CMB_F_D_A] = COMBO(f_d_a_combo, LGUI(KC_LCTL)),
    [CMB_F_D_S_A] = COMBO(f_d_s_a_combo, LGUI(LALT(KC_LCTL))),
    [CMB_F_S_A] = COMBO(f_s_a_combo, LALT(KC_LCTL)),
    [CMB_J_K] = COMBO(j_k_combo, KC_RGUI),
    [CMB_J_L] = COMBO(j_l_combo, KC_LALT),
    [CMB_J_SCLN] = COMBO(j_scln_combo, KC_RCTL),
    [CMB_J_K_L] = COMBO(j_k_l_combo, RGUI(KC_LALT)),
    [CMB_J_K_SCLN] = COMBO(j_k_scln_combo, RGUI(KC_RCTL)),
    [CMB_J_K_L_SCLN] = COMBO(j_k_l_scln_combo, RGUI(LALT(KC_RCTL))),
    [CMB_J_L_SCLN] = COMBO(j_l_scln_combo, LALT(KC_RCTL)),

    [CMB_S_D] = COMBO(s_d_combo, MO(NUMBER_LAYER)),
    [CMB_K_L] = COMBO(k_l_combo, MO(NUMBER_LAYER)),
    [CMB_A_S] = COMBO(a_s_combo, MO(F_KEY_LAYER)),
    [CMB_L_SCLN] = COMBO(l_scln_combo, MO(F_KEY_LAYER)),

    [CMB_F_J] = COMBO(f_j_combo, KC_ESC),
    [CMB_D_K] = COMBO(d_k_combo, KC_ENT),
    [CMB_D_J] = COMBO(d_j_combo, KC_BSPC),
    [CMB_F_K] = COMBO(f_k_combo, KC_DEL)
};
