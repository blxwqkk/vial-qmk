#pragma once

#define BOOTMAGIC_LITE_ROW          0
#define BOOTMAGIC_LITE_COLUMN       5
#define BOOTMAGIC_LITE_ROW_RIGHT    5
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

/* Serial settings */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SPLIT_HAND_PIN      GP29

#define POINTING_DEVICE_RIGHT
#define AZOTEQ_IQS5XX_REPORT_RATE 10
#define POINTING_DEVICE_TASK_THROTTLE_MS 10
#define AZOTEQ_IQS5XX_PRESS_AND_HOLD_ENABLE true

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

// SPI config for display
#define K03_DISPLAY_LEFT
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP2
#define SPI_MOSI_PIN GP3
#define SPI_MISO_PIN GP29

// LCD config
#define LCD_DC_PIN GP26
#define LCD_CS_PIN GP15
#define LCD_RST_PIN GP27
#define BACKLIGHT_PWM_DRIVER PWMD0
#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_B
#define QUANTUM_PAINTER_LVGL_USE_CUSTOM_CONF
#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 0
#define QUANTUM_PAINTER_TASK_THROTTLE 50

/* split protocol settings */
#define SELECT_SOFT_SERIAL_SPEED 1
#define SPLIT_TRANSACTION_IDS_USER RPC_SYNC_TOUCH, RPC_SYNC_DISPLAY, RPC_SYNC_HID
#define SPLIT_MODS_ENABLE
#define SPLIT_ACTIVITY_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_POINTING_ENABLE

#define RGBLIGHT_LED_COUNT 2
#define RGBLED_SPLIT {1, 1}
#define RGBLIGHT_SLEEP
#define RGBLIGHT_SPLIT
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 16
#define RGBLIGHT_LAYERS_RETAIN_VAL
#define RGBLIGHT_DEFAULT_VAL 150
#define RGBLIGHT_LIMIT_VAL 150
#define RGBLIGHT_DEFAULT_SAT 0

#define TAP_CODE_DELAY 1

#define EH_HAS_DISPLAY
#define EH_SHORT_PRODUCT_NAME "K:03 PRO"

// #undef NO_DEBUG
// #define DEBUG_MATRIX_SCAN_RATE
