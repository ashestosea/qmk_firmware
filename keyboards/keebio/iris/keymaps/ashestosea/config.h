/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

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

// #define USE_I2C
#define EE_HANDS
#define LAYER_STATE_8BIT
#define NO_MUSIC_MODE
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_SPLIT
#undef RGBLIGHT_DEFAULT_VAL
#define RGBLIGHT_DEFAULT_VAL 100
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP

#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX

#define VIA_QMK_RGBLIGHT_DISABLE
#define VIA_CUSTOM_LIGHTING_DISABLE

#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE

#define TAIPO_TAP_TIMEOUT 150
#define ONESHOT_TIMEOUT 500
