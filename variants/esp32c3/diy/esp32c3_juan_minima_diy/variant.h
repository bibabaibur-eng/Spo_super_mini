#pragma once

/* --------------------------------------------------------------------------
 *  Meshtastic variant
 *  Board: ESP32-C3 Super Mini
 *  Variant: esp32c3_juan_minima_diy
 * --------------------------------------------------------------------------*/

#define MESHTASTIC_VARIANT_NAME "ESP32-C3 Juan SX1262 DIY"

// --------------------------------------------------------------------------
// Status LED
// --------------------------------------------------------------------------
#define LED_PIN 8
#define LED_INVERTED false

// --------------------------------------------------------------------------
// Button (NO usar GPIO9)
// --------------------------------------------------------------------------
#define BUTTON_PIN 0

// --------------------------------------------------------------------------
// SPI bus
// --------------------------------------------------------------------------
#define SPI_SCK  10
#define SPI_MISO 6
#define SPI_MOSI 7

// --------------------------------------------------------------------------
// SX1262 radio
// --------------------------------------------------------------------------
#define USE_SX1262

#define SX126X_CS     5
#define SX126X_DIO1   20
#define SX126X_BUSY   4
#define SX126X_RESET  21

// SPI aliases
#define LORA_SCK   SPI_SCK
#define LORA_MISO  SPI_MISO
#define LORA_MOSI  SPI_MOSI

// Control aliases
#define LORA_CS       SX126X_CS
#define LORA_DIO1     SX126X_DIO1
#define LORA_BUSY     SX126X_BUSY
#define LORA_RESET    SX126X_RESET

// SX1262 specifics
#define LORA_DIO0     RADIOLIB_NC
#define SX126X_DIO0  LORA_DIO0

// TCXO (DX-LR30)
//#define SX126X_DIO3_TCXO_VOLTAGE 1.8

// --------------------------------------------------------------------------
// Disable unused radios
// --------------------------------------------------------------------------
#undef USE_RF95
#undef USE_LLCC68

// --------------------------------------------------------------------------
// Disable unused peripherals
// --------------------------------------------------------------------------
#undef USE_SSD1306
#undef USE_SH1106
#undef USE_SH1107
#undef USE_SSD1309

#undef GPS_RX_PIN
#undef GPS_TX_PIN

#undef USE_PMU

// --------------------------------------------------------------------------
// USB
// --------------------------------------------------------------------------
#define USE_USB_SERIAL

// Enable DIO2 as RF switch control
// #define SX126X_DIO2_AS_RF_SWITCH

#define SX126X_RXEN  2
#define SX126X_TXEN  3


// --------------------------------------------------------------------------
// Battery Voltage Divider
// --------------------------------------------------------------------------
#define BATTERY_PIN        1
#define ADC_UNIT           ADC_UNIT_1
#define ADC_CHANNEL        ADC_CHANNEL_1
#define ADC_CHANNEL_1      1   // Деякі версії ядра вимагають дублювання каналу
#define ADC_MULTIPLIER     1.83



