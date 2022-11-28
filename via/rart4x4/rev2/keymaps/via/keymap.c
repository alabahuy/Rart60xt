#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     
    [0] = LAYOUT_ortho_4x4(
        KC_MPLY, _______, _______, _______,
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PENT,
        KC_P1,   KC_P2,   KC_P3,   LT(1, KC_P0)
    ),
    [1] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   QK_BOOT,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______
    ),
    [2] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______
    ),
    [3] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif


#ifdef RGB_MATRIX_ENABLE
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // caps lock white
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 200, 200, 200);
    }
    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 200, 200, 200);
    }
    if (host_keyboard_led_state().scroll_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(2, 200, 200, 200);
    }

    // layer state
    switch (get_highest_layer(layer_state)) {
        case 0:
            // RGB_MATRIX_INDICATOR_SET_COLOR(59, 0, 0, 0);
            break;
        case 1:
            RGB_MATRIX_INDICATOR_SET_COLOR(7, 128, 0, 0);
            break;
        case 2:
            RGB_MATRIX_INDICATOR_SET_COLOR(7, 0, 128, 0);
            break;
        case 3:
            RGB_MATRIX_INDICATOR_SET_COLOR(7, 0, 0, 128);
            break;
        default:
            // white
            RGB_MATRIX_INDICATOR_SET_COLOR(7, 128, 128, 128);
            break;
    }
    return false;
}
#endif
