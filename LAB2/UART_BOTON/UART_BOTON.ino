
#define BOTON 4

String input = "";
void setup()
{
  
  pinMode(BOTON,INPUT);
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
 

  Serial.println("conexion establecida");
}

void loop() // run over and over
{
  Serial.println(digitalRead(BOTON));
      
  delay(1000);

}
