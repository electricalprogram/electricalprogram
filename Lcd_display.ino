#include<LiquidCrystal.h>

LiquidCrystal lcd(1,2,4,5,6,7);

int soundSensor=2;
int Sensor = A0;
int clap = 0;
long detection_range_start = 0;
long detection_range = 0;
boolean status_lights = false;
// By www.andprof.com

void setup() {
  lcd.begin(16,2);
  pinMode(11,OUTPUT);
  pinMode(Sensor, INPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

int t = 60;

  analogWrite(9,0);
  delay(t);
  analogWrite(9,1);
  delay(t);
  analogWrite(9,5);
  delay(t);
  analogWrite(9,10);
  delay(t);
  analogWrite(9,15);
  delay(t);
  analogWrite(9,20);
  delay(t);
  analogWrite(9,25);
  delay(t);
  analogWrite(9,30);
  delay(t);
  analogWrite(9,40);
  delay(t);
  analogWrite(9,50);
  delay(t);

  analogWrite(9,60);
  delay(t);
  analogWrite(9,80);
  delay(t);
  analogWrite(9,90);
  delay(t);
  analogWrite(9,100);
  delay(t);
  analogWrite(9,120);
  delay(t);
  analogWrite(9,130);
  delay(t);
  analogWrite(9,150);
  delay(t);
  analogWrite(9,170);
  delay(t);
  analogWrite(9,180);
  delay(t);
  analogWrite(9,190);
  delay(t);
  analogWrite(9,200);
  delay(t);
  analogWrite(9,210);
  delay(t);
  analogWrite(9,220);
  delay(t);
  analogWrite(9,230);
  delay(t);
  analogWrite(9,235);
  delay(t);
  analogWrite(9,240);
  delay(t);
  analogWrite(9,245);
  delay(t);
  analogWrite(9,250);
  delay(t);
  analogWrite(9,254);
  delay(t);
  

  analogWrite(9,220);
  delay(t);
  analogWrite(9,200);
  delay(t);
  analogWrite(9,190);
  delay(t);
  analogWrite(9,170);
  delay(t);
  analogWrite(9,160);
  delay(t);
  analogWrite(9,150);
  delay(t);
  analogWrite(9,140);
  delay(t);
  analogWrite(9,130);
  delay(t);
  analogWrite(9,120);
  delay(t);
  analogWrite(9,110);
  delay(t);
  analogWrite(9,100);
  delay(t);
  analogWrite(9,90);
  delay(t);
  analogWrite(9,80);
  delay(t);
  analogWrite(9,70);
  delay(t);
  analogWrite(9,60);
  delay(t);
  analogWrite(9,50);
  delay(t);
  analogWrite(9,40);
  delay(t);
  analogWrite(9,30);
  delay(t);
  analogWrite(9,25);
  delay(t);
  analogWrite(9,20);
  delay(t);
  analogWrite(9,15);
  delay(t);
  analogWrite(9,10);
  delay(t);
  analogWrite(9,5);
  delay(t);
  analogWrite(9,3);
  delay(t);
  analogWrite(9,2);
  delay(t);
  analogWrite(9,1);
  delay(t);
  analogWrite(9,0);
  delay(100);

  digitalWrite(9,HIGH);


lcd.setCursor(4,0);
  lcd.print("Wellcome");
  delay(1000);
  lcd.setCursor(3,1);
  lcd.print("My Project");
  delay(2000);
  lcd.clear();
  delay(500);

  lcd.setCursor(1,0);
  lcd.print("Nodemcu");
  delay(1000);
  lcd.setCursor(7,1);
  lcd.print("ESP8266");
  delay(2000);

  lcd.clear();
  delay(500);

  lcd.setCursor(1,0);
  lcd.print("Wifi Conecting.");
  delay(1000);

  lcd.setCursor(0,1);
  lcd.print(".");
  delay(700);
  digitalWrite(11,HIGH);
  lcd.setCursor(1,1);
  lcd.print(".");
   delay(700);
   digitalWrite(11,LOW);
  lcd.setCursor(2,1);
  lcd.print(".");
   delay(700);
   digitalWrite(11,HIGH);
  lcd.setCursor(3,1);
  lcd.print(".");
   delay(700);
   digitalWrite(11,LOW);
  lcd.setCursor(4,1);
  lcd.print(".");
   delay(700);
   digitalWrite(11,HIGH);
  lcd.setCursor(5,1);
  lcd.print(".");
   delay(700);
   digitalWrite(11,LOW);
  lcd.setCursor(6,1);
  lcd.print(".");
   delay(700);
   digitalWrite(11,HIGH);
   lcd.setCursor(7,1);
  lcd.print(".");
   delay(700);
   digitalWrite(11,LOW);
   lcd.setCursor(8,1);
  lcd.print(".");
   delay(700);
   digitalWrite(11,HIGH);
   lcd.setCursor(9,1);
  lcd.print(".");
   delay(700);
   digitalWrite(11,LOW);
   lcd.setCursor(10,1);
  lcd.print(".");
   delay(1000);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   lcd.clear();
   delay(500);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   lcd.setCursor(1,0);
  lcd.print("Wifi is redy.");
  delay(900);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(50);

   digitalWrite(11,HIGH);
   delay(50);
   digitalWrite(11,LOW);
   delay(3000);

   lcd.clear();
   delay(100);

   lcd.setCursor(3,0);
  lcd.print("Microphone");
  delay(1000);

  lcd.setCursor(6,1);
  lcd.print("redy");
  delay(1000);

  lcd.clear();
  delay(100);

  lcd.setCursor(4,1);
  lcd.print("Wairless");
  delay(1000);

  lcd.setCursor(1,0);
  lcd.print("Play  Tow Clap");
  delay(100);

  
}

void loop() {

  

  

  int status_sensor = digitalRead(Sensor);
if (status_sensor == 0)
{
if (clap == 0)
{
detection_range_start = detection_range = millis();
clap++;
}
else if (clap > 0 && millis()-detection_range >= 50)
{
detection_range = millis();
clap++;
}
}
if (millis()-detection_range_start >= 400)
{
if (clap == 2)
{
if (!status_lights)
{
  
status_lights = true;
digitalWrite(10, HIGH);
lcd.setCursor(0,0);
  lcd.print("Digital Pin [ON]");
  delay(100);
}
else if (status_lights)
{
status_lights = false;
digitalWrite(10, LOW);
lcd.setCursor(0,0);
  lcd.print("Digital Pin [OFF]");
  delay(100);
}
}
clap = 0;
}
}
