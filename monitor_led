int red = 5;
int green = 3;
int blue = 6;
String msg = "¿Qué LED quiere prender?";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {
  }
  switch (int ledColor = Serial.parseInt()) {
    case 1:
      digitalWrite(red, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      Serial.println("El LED rojo está encendido");
      break;

    case 2:
      digitalWrite(red, LOW);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
      Serial.println("El LED verde está encendido");
      break;

    case 3:
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, HIGH);
      Serial.println("El LED azul está encendido");
      break;

    case 4:
      digitalWrite(red, HIGH);
      digitalWrite(blue, HIGH);
      digitalWrite(green, HIGH);
      Serial.println("Todos los LEDs están encendidos");
      break;

    case 5:
      analogWrite(red, 255);
      analogWrite(green, 50);
      analogWrite(blue, 0);
      Serial.println("Los LEDs rojo y verde están encendidos");
      break;

    case 6:
      analogWrite(red, 255);
      analogWrite(green, 0);
      analogWrite(blue, 150);
      Serial.println("Los LEDs rojo y azul están encendidos");
      break;

    case 7:
      analogWrite(red, 0);
      analogWrite(green, 255);
      analogWrite(blue, 100);
      Serial.println("Los LEDs verde y azul están encendidos");
      break;

    default:
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      digitalWrite(red, LOW);
      Serial.println("Ningún LED está encendido");
  }
  Serial.println();
}
