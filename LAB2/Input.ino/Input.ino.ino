
void setup() {
  // put your setup code here, to run once:
 #define boton 3
Serial.begin(9600);
pinMode(boton,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(digitalRead(boton));
delay(1000);
}
