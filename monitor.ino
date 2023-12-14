/*int dt = 200;
int ledPin = 4;
String msg1 = "Por favor ingresa el número de parpadeos";
String msg2 = "Tu LED parpadeara ";
String msg3 = " veces";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  Serial.println(msg1);
  while (Serial.available() == 0) {
  }

  int blink = Serial.parseInt();
  Serial.print(msg2);
  Serial.print(blink);
  Serial.println(msg3);
  delay(1000);
  for (int i = 0; i < blink; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  Serial.println();
}*/



//Selec el led uwu:
int dt = 1000;
int green = 4;
int blue = 5;
int yellow = 6;
String msg1 = "¿Qué LED desea encender?";
String msg2 = "El LED ";
String msg3 = " está encendido.";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop() {

  Serial.println(msg1);
  while (Serial.available() == 0) {
  }

  String ledColor = Serial.readString();
  Serial.print(msg2);
  Serial.print(ledColor);
  Serial.println(msg3);
  delay(500);

  if (ledColor == "verde") {
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(yellow, LOW);
  }

  if (ledColor == "azul") {
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(yellow, LOW);
  }

  if (ledColor == "amarillo") {
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(yellow, HIGH);
  }

  if (ledColor == "verde y amarillo" || ledColor == "amarillo y verde") {
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(yellow, HIGH);
  }

  if (ledColor == "azul y amarillo" || ledColor == "amarillo y azul") {
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(yellow, HIGH);
  }

  if (ledColor == "azul y verde" || ledColor == "verde y azul") {
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(yellow, LOW);
  }
 if (ledColor == "todos" ) {
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(yellow, HIGH);
  }
  if (ledColor == "ninguno") {
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(yellow, LOW);
  }
  Serial.println();
}
