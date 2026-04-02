// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names{
    _BASE//,
    //_QWERTY,
    //_FN,
    //_ADJ
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *     ┌───┐
     *     │ 1 │ <-- Undo
     *     ├───┼───┐
     *     │ 2 │ 5 │ <-- Numpad 1, Pause media
     *     ├───┼───┘ 
     *     │ 3 │ <-- Numpad 3
     *     ├───┤
     *     │ 4 │ <-- Numpad 7
     *     └───┘
     */
    [_BASE] = LAYOUT(
        LCTL(KC_Z), //KC_1,
        KC_KP_1, KC_MPLY, //KC_2,   KC_5,
        KC_KP_3, //KC_3,
        KC_KP_7 //KC_4
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD)  }//,
    //[_QWERTY] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    //[_FN] = { ENCODER_CCW_CW(UG_VALD, UG_VALU)  },
    //[_ADJ] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT)  },
};
#endif

//static void render_logo(void) {
    //static const char PROGMEM qmk_logo[] = {
        //0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        //0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        //0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    //};
    //
    //oled_write_P(qmk_logo, false);
//}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Default\n"), false);
            break;
        //case _QWERTY:
        //    oled_write_P(PSTR("Default\n"), false);
        //    break;
        //case _FN:
        //    oled_write_P(PSTR("FN\n"), false);
        //    break;
        //case _ADJ:
        //    oled_write_P(PSTR("ADJ\n"), false);
        //    break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif