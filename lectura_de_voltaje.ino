float vOut;
float vRead = A0; 
int dt = 100;
float analogVal;
int Green = 10;
int Yellow = 11;
int Red = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(vRead, INPUT);
  pinMode(Green, OUTPUT); 
  pinMode(Yellow, OUTPUT); 
  pinMode(Red, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogVal = analogRead(vRead);
  vOut = (5.*analogVal)/1023.;
  if(vOut>0.0 && vOut<=3.0){
    digitalWrite(Green, HIGH);
  }
  if(vOut==0.0 || vOut>3.0) {
    digitalWrite(Green, LOW);
  }
  if(vOut>3.0 && vOut<=4.0){
    digitalWrite(Yellow, HIGH);
  }
  if(vOut>4.0 || vOut<3.0){
    digitalWrite(Yellow, LOW);
  }
  if(vOut>4.0 && vOut<=5.0){
    digitalWrite(Red, HIGH);
  }
  if(vOut>5.0 || vOut<4.0){
    digitalWrite(Red, LOW);
  }
  Serial.print("Voltaje = ");
  Serial.print(vOut);
  Serial.println(" voltios");
  delay(dt);
}