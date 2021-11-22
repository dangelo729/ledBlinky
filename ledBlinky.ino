
int ledPin = 23;
int delayTime = 10;

void setup() {
  
  pinMode(ledPin, OUTPUT);

}

void loop() {
  digitalWrite(ledPin, HIGH);

  delay(delayTime);

  digitalWrite(ledPin, LOW);

  delay(delayTime);


}
