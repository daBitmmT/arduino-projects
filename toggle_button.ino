int pb = 4;
int led = 3;
int ledState = 1;
int pullUp = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(pb, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pbState = digitalRead(pb);
  
  if (pbState == 0 && pullUp == 1) {
    if (ledState == 0) {
      digitalWrite(led, 1);
      ledState = 1;
    } else {
      digitalWrite(led, 0);
      ledState = 0;
    }
  }
  pullUp = pbState;
}
