// Copyright 2023 FxStudio <FXS@fx-studio.cn>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define DYNAMIC_KEYMAP_LAYER_COUNT 3

#define MATRIX_ROWS 10
#define MATRIX_COLS 14

#define MATRIX_ROW_PINS { C8, C7, C6, B15, B14 }
#define MATRIX_COL_PINS { C10, C11, C12, A15, B6, D2, B3, B4, B5, B7, A0, A1, A2, A3 }

#define MATRIX_ROW_PINS_RIGHT { A7, C4, C5, A4, A5 }
#define MATRIX_COL_PINS_RIGHT { A6, B0, B1, B4, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN }

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 5000
#define SPLIT_USB_TIMEOUT_POLL 20     //检测轮询
#define SPLIT_WATCHDOG_ENABLE           //监视程序
//#define SPLIT_MAX_CONNECTION_ERRORS 20

#define SPLIT_TRANSPORT_MIRROR      //主侧矩阵镜像到从侧
#define SPLIT_ACTIVITY_ENABLE

/* Disable RGB lighting when PC is in suspend */
#define RGB_DISABLE_WHEN_USB_SUSPENDED


#ifdef SPLIT_KEYBOARD
#define FORCED_SYNC_THROTTLE_MS 100
//9.27.2022
#define SPLIT_HAND_PIN C13
#define SOFT_SERIAL_PIN A9
#define SERIAL_USART_SPEED 137000
#define SELECT_SOFT_SERIAL_SPEED 1
#define SERIAL_USART_DRIVER SD1
#define SERIAL_USART_TX_PAL_MODE 7
#endif

#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN B13
#define RGBLED_NUM 81
#define RGBLIGHT_SPLIT
#define RGBLIGHT_SLEEP
#define RGBLED_SPLIT { 64, 17 }

#define WS2812_PWM_COMPLEMENTARY_OUTPUT
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM STM32_DMA2_STREAM5
#define WS2812_DMA_CHANNEL 6

#define RGBLIGHT_LIMIT_VAL 100
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD + 2
#define RGBLIGHT_EFFECT_BREATHE_CENTER 1.0

#define RGBLIGHT_EFFECT_BREATHING             //呼吸动画模式。
#define RGBLIGHT_EFFECT_RAINBOW_MOOD          //彩虹情绪动画模式。
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL         //彩虹漩涡动画模式。
#define RGBLIGHT_EFFECT_SNAKE                 //蛇动画模式。
#define RGBLIGHT_EFFECT_KNIGHT                //骑士动画模式。
#define RGBLIGHT_EFFECT_CHRISTMAS             //圣诞节动画模式。
#define RGBLIGHT_EFFECT_STATIC_GRADIENT       //静态渐变模式。
#define RGBLIGHT_EFFECT_RGB_TEST              //RGB 测试动画模式。
#define RGBLIGHT_EFFECT_ALTERNATING           //交替动画模式。
#define RGBLIGHT_EFFECT_TWINKLE               //闪烁动画模式。

#endif

#ifdef RGB_MATRIX_ENABLE

#define RGB_DI_PIN B13
#define RGBLED_NUM 81
#define DRIVER_LED_TOTAL 81
#define RGB_MATRIX_LED_COUNT 81
#define RGB_MATRIX_SPLIT { 64, 17 }

#define WS2812_PWM_COMPLEMENTARY_OUTPUT
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM STM32_DMA2_STREAM5
#define WS2812_DMA_CHANNEL 6

#define RGB_MATRIX_STARTUP_VAL 60
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define RGB_DISABLE_WHEN_USB_SUSPENDED  // turn off effects when suspended
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT

#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_FRACTAL
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW

#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN

#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

#endif
