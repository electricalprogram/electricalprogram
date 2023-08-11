#include <Servo.h>
Servo servomotor;
String estado;
void setup() {
  servomotor.attach(6);
  servomotor.write(0);
  Serial.begin(9600);
  
}

void loop() {
  delay(25);
  while (Serial.available())
  {
    char c = Serial.read();
    estado += c;
    
  }
  if (estado.length() > 0)
{
  servomotor.write(estado.toInt());
  estado = "";
}
}
