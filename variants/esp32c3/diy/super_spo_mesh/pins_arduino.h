#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

// UART
static const uint8_t TX = 21;
static const uint8_t RX = 20;

// I2C
static const uint8_t SDA = 1;
static const uint8_t SCL = 0;

// SPI
static const uint8_t SS   = 5;   // CS (no usar GPIO8)
static const uint8_t MOSI = 7;
static const uint8_t MISO = 6;
static const uint8_t SCK  = 10;

// ADC
static const uint8_t A0 = 0;
static const uint8_t A1 = 1;
static const uint8_t A2 = 2;
static const uint8_t A3 = 3;
static const uint8_t A4 = 4;
static const uint8_t A5 = 5;

#endif /* Pins_Arduino_h */
