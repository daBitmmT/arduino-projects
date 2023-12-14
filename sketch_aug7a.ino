int ledPin = 13;
int dt = dt + 100;
void setup() {
  // put your setup code here, to run once:
pinMode (ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (ledPin, HIGH);
delay (dt);
digitalWrite (ledPin, LOW);
delay (dt);
digitalWrite (ledPin, HIGH);
delay (dt);
digitalWrite (ledPin, LOW);
delay (dt);
digitalWrite (ledPin, HIGH);
delay (dt);
digitalWrite (ledPin, LOW);
delay (dt);
digitalWrite (ledPin, HIGH);
delay (dt);
digitalWrite (ledPin, LOW);
delay (dt);
}
