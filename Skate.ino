#include "FastLED.h"

#define NUM_LEDS 16

// Data pin that led data will be written out over
#define DATA_PIN 10
// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define CLOCK_PIN 8

CRGB leds[NUM_LEDS];

 // Example 3: set color via 'hex color code' (0xRRGGBB)
 // leds[i] = 0xFF007F;

  // Example 4: set color via any named HTML web color
  // leds[i] = CRGB::HotPink;

  // Example 5: set color via setRGB
  // leds[i].setRGB( 50, 100, 150);


void setup() {
  // sanity check delay - allows reprogramming if accidently blowing power w/leds
    delay(2000);
       FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
       for(int i = 0; i <(NUM_LEDS); i++) {
        leds[i] = CRGB(0,0,0);
       }
       FastLED.show();
       delay(1000);
       leds[0] = CRGB(0,0,255);
       leds[1] = CRGB(0,0,255);
       leds[2] = CRGB(255,191,0);
       leds[3] = CRGB(255,191,0);
       leds[4] = CRGB(255,191,0);
       leds[5] = CRGB(255,191,0);
       leds[6] = CRGB(255,191,0);
       leds[7] = CRGB(255,255,255);
       leds[8] = CRGB(255,255,255);
       leds[9] = CRGB(255,255,255);
       leds[10] = CRGB(255,255,255);
       leds[11] = CRGB(255,191,0);
       leds[12] = CRGB(255,191,0);
       leds[13] = CRGB(255,191,0);
       leds[14] = CRGB(255,191,0);
       leds[15] = CRGB(255,191,0);
       FastLED.show();
}

void loop() {
   
}
