void setup() {
  // put your setup code here, to run once:
#define LED 2
#define boton 3
pinMode(LED, OUTPUT);
pinMode(boton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(boton) == HIGH){
    digitalWrite(LED,HIGH);
    }else{
      digitalWrite(LED,LOW);
      }
}
