#pragma once

// SPI config for display
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP10
#define SPI_MOSI_PIN GP11
#define SPI_MISO_PIN GP29

// LCD config
#define LCD_DC_PIN GP26
#define LCD_CS_PIN GP15
#define LCD_RST_PIN GP29
#define BACKLIGHT_PWM_DRIVER PWMD0
#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_B
#define QUANTUM_PAINTER_LVGL_USE_CUSTOM_CONF
#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 0

#define TAP_CODE_DELAY 1

#define EH_SHORT_PRODUCT_NAME "M4CR0Pad"
#define EH_HAS_DISPLAY
