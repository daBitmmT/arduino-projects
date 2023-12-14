#include <Servo.h>
int servoPin = 10;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Ángulo de posición del servomotor: ");
  while (Serial.available() == 0) {
  }
  int servoA = Serial.parseInt();
  myServo.write(servoA);
  Serial.println(servoA);
}
