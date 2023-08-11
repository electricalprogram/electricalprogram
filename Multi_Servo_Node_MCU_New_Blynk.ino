// Chage These Credentials with your Blynk Template credentials
// Chage These Credentials with your Blynk Template credentials 
#define BLYNK_TEMPLATE_ID "TMPLZZyY-bcF"
#define BLYNK_TEMPLATE_NAME "Multi Servo Control with New Blynk2"
#define BLYNK_AUTH_TOKEN "h-NJKb2jnC00dWo5P7Ho5yvy2CdWNJ79"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#include<Servo.h>
Servo servo1, servo2, servo3, servo4, servo5;

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Dialog 4G 822"; // Change your Wifi/ Hotspot Name
char pass[] = "9B6D86C1"; // Change your Wifi/ Hotspot Password

BLYNK_WRITE(V0)
{
  int s0 = param.asInt(); 
  servo1.write(s0);
  Blynk.virtualWrite(V5, s0);
}
BLYNK_WRITE(V1)
{
  int s1 = param.asInt(); 
  servo2.write(s1);
  Blynk.virtualWrite(V6, s1);
}
BLYNK_WRITE(V2)
{
  int s2 = param.asInt(); 
  servo3.write(s2);
  Blynk.virtualWrite(V7, s2);
}
BLYNK_WRITE(V3)
{
  int s3 = param.asInt(); 
  servo4.write(s3);
  Blynk.virtualWrite(V8, s3);
}
BLYNK_WRITE(V4)
{
  int s4 = param.asInt(); 
  servo5.write(s4);
  Blynk.virtualWrite(V9, s4);
}

void setup()
{
  Serial.begin(9600);
  servo1.attach(D2);
  servo2.attach(D3);
  servo3.attach(D5);
  servo4.attach(D6);
  servo5.attach(D7);
  Blynk.begin(auth, ssid, pass);//Splash screen delay
  delay(2000); 
}

void loop() 
{
  Blynk.run();
}
