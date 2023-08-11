#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
#define BLYNK_AUTH_TOKEN "h-NJKb2jnC00dWo5P7Ho5yvy2CdWNJ79"

char auth[] = BLYNK_AUTH_TOKEN;          // change it to your auth code 
char ssid[] = "Dialog 4G 822";                    // change it 
char pass[] = "9B6D86C1";                         // change it 

void setup()

{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  servo1.attach(15);// NodeMCU D8 pin
  servo2.attach(13);// D7 pin
  servo3.attach(12);//D6 pin
   
 }


void loop()

{
  Blynk.run();
}

BLYNK_WRITE(V1)

{
   servo1.write(param.asInt());
}
BLYNK_WRITE(V2)

{
   servo2.write(param.asInt());
}
BLYNK_WRITE(V3)

{
   servo3.write(param.asInt());
}
