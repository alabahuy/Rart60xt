#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     
    [0] = LAYOUT_ortho_4x4(
        KC_MPLY, KC_MYCM, KC_CALC, RGB_TOG,
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PENT,
        KC_P1,   KC_P2,   KC_P3,   LT(1, KC_P0)
    ),
    [1] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        TG(8),   TG(9),   TG(10),   QK_BOOT,
        TG(5),   TG(6),   TG(7),   _______,
        TG(2),   TG(3),   TG(4),   _______
    ),
    [2] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   MO(1)
    ),
    [3] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   MO(1)
    ),
    [4] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   MO(1)
    ),
    [5] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   MO(1)
    ),
    [6] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   MO(1)
    ),
    [7] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   MO(1)
    ),
    [8] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   MO(1)
    ),
    [9] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   MO(1)
    ),
    [10] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   MO(1)
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGDN, KC_PGUP), ENCODER_CCW_CW(KC_MNXT, KC_MPRV), ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [5] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [6] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [7] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [8] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [9] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [10] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }

};
#endif


#ifdef RGB_MATRIX_ENABLE
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // caps lock white
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(4, 200, 200, 200);
    }
    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(3, 200, 200, 200);
    }
    if (host_keyboard_led_state().scroll_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(11, 200, 200, 200);
    }

    // layer state
    switch (get_highest_layer(layer_state)) {
        case 0:
            // RGB_MATRIX_INDICATOR_SET_COLOR(59, 0, 0, 0);
            break;
        case 2:
            RGB_MATRIX_INDICATOR_SET_COLOR(8, 128, 0, 0);
            break;
        case 3:
            RGB_MATRIX_INDICATOR_SET_COLOR(9, 0, 128, 0);
            break;
        case 4:
            RGB_MATRIX_INDICATOR_SET_COLOR(10, 0, 0, 128);
            break;
        case 5:
            RGB_MATRIX_INDICATOR_SET_COLOR(7, 128, 0, 0);
            break;
        case 6:
            RGB_MATRIX_INDICATOR_SET_COLOR(6, 0, 128, 0);
            break;
        case 7:
            RGB_MATRIX_INDICATOR_SET_COLOR(5, 0, 0, 128);
            break;
        case 8:
            RGB_MATRIX_INDICATOR_SET_COLOR(0, 128, 0, 0);
            break;
        case 9:
            RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 128, 0);
            break;
        case 10:
            RGB_MATRIX_INDICATOR_SET_COLOR(2, 0, 0, 128);
            break;
        default:
            // white
            // RGB_MATRIX_INDICATOR_SET_COLOR(7, 128, 128, 128);
            break;
    }
    return false;
}
#endif
