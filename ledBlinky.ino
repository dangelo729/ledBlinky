
int ledPin = 22;
int delayTime = 2000;

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  digitalWrite(ledPin, HIGH);

  delay(delayTime);

  digitalWrite(ledPin, LOW);

  delay(delayTime);


}
