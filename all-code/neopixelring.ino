#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

#define PIN            6
#define NUMPIXELS      12

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // snelheid van lampjes

void setup() {
  pixels.begin();

}

void loop() {

  pixels.setPixelColor(0, pixels.Color(255,0,0));
  pixels.setPixelColor(1, pixels.Color(255,0,0));
  pixels.setPixelColor(2, pixels.Color(255,0,0));
  pixels.setPixelColor(3, pixels.Color(255,0,0));
  pixels.setPixelColor(4, pixels.Color(255,255,255));
  pixels.setPixelColor(5, pixels.Color(255,255,255));
  pixels.setPixelColor(6, pixels.Color(255,255,255));
  pixels.setPixelColor(7, pixels.Color(255,255,255));
  pixels.setPixelColor(8, pixels.Color(0,255,0));
  pixels.setPixelColor(9, pixels.Color(0,255,0));
  pixels.setPixelColor(10, pixels.Color(0,255,0));
  pixels.setPixelColor(11, pixels.Color(0,255,0));


  for(int i=0; i<NUMPIXELS; i++){


    pixels.show();

    delay(delayval);

  }
}