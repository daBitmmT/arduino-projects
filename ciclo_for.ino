int greenPin = 10;
int redPin = 12;
int dt = 500;
int i;
void setup() {

  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  for (i = 0; i < 5; i++) {
    digitalWrite(greenPin, HIGH);
    delay(dt);
    digitalWrite(greenPin, LOW);
    delay(dt);
  }
  for (i = 0; i < 3; i++) {
    digitalWrite(redPin, HIGH);
    delay(dt);
    digitalWrite(redPin, LOW);
    delay(dt);
  }
  delay(1000);
}
