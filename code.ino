#include <FastLED.h>
#define NUM_LEDS 38
#define DATA_PIN 5
#define CLOCK_PIN 13
CRGB leds[NUM_LEDS];

void setup() { 
    
    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
    }

void loop() { 
for(int i=0;i<NUM_LEDS;i++)
  {
   leds[i] = CRGB::Coral;
  FastLED.show(); 
  delay(100);
  }
  delay(500);
  for(int i=0;i<NUM_LEDS;i++)
  {
   leds[i] = CRGB::Red;
  FastLED.show(); 
  delay(100);
  }
  delay(500);
 /* for(int i=0;i<NUM_LEDS;i++)
  {
   leds[i] = CRGB::Black;
  FastLED.show(); 
  delay(100);
  }*/
   for(int i=0;i<NUM_LEDS;i++)
  {
   leds[i] = CRGB::Blue;
  FastLED.show(); 
  delay(100);
  }
  delay(500);
   for(int i=0;i<NUM_LEDS;i++)
  {
   leds[i] = CRGB::Yellow;
  FastLED.show(); 
  delay(100);
  }
  delay(500);
  for(int i=0;i<NUM_LEDS;i++)
  {
   leds[i] = CRGB::Brown;
  FastLED.show(); 
  delay(100);
  }
  delay(500);
  for(int i=0;i<NUM_LEDS;i++)
  {
   leds[i] = CRGB::Orange;
  FastLED.show(); 
  delay(100);
  }
  delay(500);
  for(int i=0;i<NUM_LEDS;i++)
  {
   leds[i] = CRGB::Magenta;
  FastLED.show(); 
  delay(100);
  }
  delay(500);
    
     for(int i=0;i<NUM_LEDS;i++)
  {
   leds[i] = CRGB::Green;
  FastLED.show(); 
  delay(100);
  }
  delay(500);
}
