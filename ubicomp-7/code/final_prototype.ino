// Includes
#include "pitches.h"
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

// Infrarood sensor
int irPin = A4;
int val = 0;

// Motor
int motorPin = 9;

// Piezo
int melody[] = {
  NOTE_D5, NOTE_A5,NOTE_C6, NOTE_B5, NOTE_A5, NOTE_C6, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_F5, NOTE_G5, NOTE_E5
};

int noteDurations[] = {
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1
};

// NeoPixel Ring
#define PIN            6
#define NUMPIXELS      12

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 100; // snelheid van lampjes


void setup(){
  Serial.begin(9600);
  pinMode(irPin, INPUT);
  pinMode(motorPin, OUTPUT);
  pixels.begin();
}

void loop(){
 val = analogRead(irPin);

 if (val < 100){
   Serial.println(val);
   digitalWrite(motorPin, HIGH);
   neopixelsKlaar();
   godfatherTheme();
 } else {
   Serial.println(val);
   neopixelsStart();
   digitalWrite(motorPin, LOW);

 }

 delay(1000);

}

void godfatherTheme() {
 for (int thisNote = 0; thisNote < 12; thisNote++) {
  int noteDuration = 1000/noteDurations[thisNote];
  int pauseBetweenNotes = noteDuration * 1.30;
  tone(8, melody[thisNote],noteDuration);
  delay(pauseBetweenNotes);
  noTone(8);
  }
}

void neopixelsKlaar() {

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

  pixels.show();

}


void neopixelsStart() {
  for(int i=0; i<NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(255,0,0));
    pixels.show();
    delay(delayval);
  }
}