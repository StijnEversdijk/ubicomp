int ledPin = 13;

void setup(){
  pinMode(ledPin, OUTPUT);
}

void loop(){
 executeMyFunction();
}

void executeMyFunction(){
 digitalWrite(ledPin, HIGH);
 delay(1000);
 digitalWrite(ledPin, LOW);
 delay(1000);
}