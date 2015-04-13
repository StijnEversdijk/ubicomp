#include "pitches.h"

int melody[] = {
  NOTE_D5, NOTE_A5,NOTE_C6, NOTE_B5, NOTE_A5, NOTE_C6, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_F5, NOTE_G5, NOTE_E5
};

int noteDurations[] = {
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1
};

void setup() {

}

void loop() {
 for (int thisNote = 0; thisNote < 12; thisNote++) {

  int noteDuration = 1000/noteDurations[thisNote];
  tone(8, melody[thisNote],noteDuration);

  int pauseBetweenNotes = noteDuration * 1.30;
  delay(pauseBetweenNotes);

  noTone(8);
  }
}