#pragma once

/* --------------------------------------------------------------------------
 *  Meshtastic variant
 *  Board: ESP32-WROOM-32
 *  Variant: esp32_wroom_juaneitor
 *  Radio: SX1262  (DX-LR30 ) + ESP32 C3 SUPER MINI
 * 
 * --------------------------------------------------------------------------*/

#define MESHTASTIC_VARIANT_NAME "ESP32-WROOM Juaneitor SX1262 DIY"

// --------------------------------------------------------------------------
// Status LED
// --------------------------------------------------------------------------
#define LED_PIN 2
#define LED_INVERTED false

// --------------------------------------------------------------------------
// Button
// --------------------------------------------------------------------------
// GPIO34–39 are input-only, NO internal pullups
#define BUTTON_PIN 39

// --------------------------------------------------------------------------
// I2C (disabled for now)
// --------------------------------------------------------------------------
#undef I2C_SDA
#undef I2C_SCL

// --------------------------------------------------------------------------
// SPI bus (ESP32 standard VSPI)
// --------------------------------------------------------------------------
#define SPI_SCK   18
#define SPI_MISO  19
#define SPI_MOSI  23

// --------------------------------------------------------------------------
// SX1262 radio
// --------------------------------------------------------------------------
#define USE_SX1262

#define SX126X_CS     17
#define SX126X_DIO1   33
#define SX126X_BUSY   32
#define SX126X_RESET  14

// SPI aliases (required by Meshtastic)
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

// --------------------------------------------------------------------------
// RF front-end control (IMPORTANT)
// --------------------------------------------------------------------------
// Usamos TXEN / RXEN dedicados
#define SX126X_TXEN   13
#define SX126X_RXEN   27

#define LORA_TXEN     SX126X_TXEN
#define LORA_RXEN     SX126X_RXEN

// --------------------------------------------------------------------------
// TCXO (not used)
// --------------------------------------------------------------------------
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
// USB / Serial
// --------------------------------------------------------------------------
#define USE_USB_SERIAL

// --------------------------------------------------------------------------
// IMPORTANT: DO NOT enable DIO2 RF switch (not worked for me)
// --------------------------------------------------------------------------
// #define SX126X_DIO2_AS_RF_SWITCH
