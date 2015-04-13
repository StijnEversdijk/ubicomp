int ledPin = 13;
int irPin = A4;

int val = 0;

void setup(){
  Serial.begin(9600);
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop(){
 val = analogRead(irPin);

 if (val > 100){
   Serial.println(val);
   digitalWrite(ledPin, LOW);
 } else {
   Serial.println(val);
   digitalWrite(ledPin, HIGH);
 }

 delay(1000);

}