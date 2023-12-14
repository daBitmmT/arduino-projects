int ledPin = 11;
int pb1 = A0;
int pb2 = A1;
int ledBright = 0;
int buzzPin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(pb1, INPUT);
  pinMode(pb2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pbRead1 = digitalRead(pb1);
  int pbRead2 = digitalRead(pb2);
  
  if (pbRead1 == 0) {
    ledBright = ledBright + 51;
    analogWrite(ledPin, ledBright);
  }
  if (pbRead2 == 0) {
    ledBright = ledBright - 51;
    analogWrite(ledPin, ledBright);
  }
  if (ledBright < 0) {
    ledBright = 0;
    analogWrite(ledPin, ledBright);
    digitalWrite(buzzPin, 1);
    delay(100);
    digitalWrite(buzzPin, 0);
  }
  if (ledBright > 255) {
    ledBright = 255;
    analogWrite(ledPin, ledBright);
    digitalWrite(buzzPin, 1);
    delay(100);
    digitalWrite(buzzPin, 0);
  }
Serial.print("El brillo del LED es : ");
Serial.println(ledBright);
delay(500);
}

