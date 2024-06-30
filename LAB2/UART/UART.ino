
#define LED 4
String input = "";
void setup()
{
  
  pinMode(LED,OUTPUT);
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
 

  Serial.println("conexion establecida");
}

void loop() // run over and over
{
  input = Serial.readString();
  if(input=="LED ON\n"){
    digitalWrite(LED, HIGH);
    Serial.println("on");
    }
    else if(input=="LED OFF\n"){
      digitalWrite(LED, LOW);
      Serial.println("off");
      }
      
      delay(100);

}
