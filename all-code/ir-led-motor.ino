int ledPin = 13;
int irPin = A4;
int motorPin = 9;

int val = 0;

void setup(){
  Serial.begin(9600);
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
}

void loop(){
 val = analogRead(irPin);

 if (val > 100){
   Serial.println(val);
   digitalWrite(ledPin, LOW);
   digitalWrite(motorPin, LOW);
 } else {
   Serial.println(val);
   digitalWrite(ledPin, HIGH);
   digitalWrite(motorPin, HIGH);

 }

 delay(1000);

}