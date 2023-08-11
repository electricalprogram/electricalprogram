void setup() {
  pinMode(4,OUTPUT); //green
  pinMode(5,OUTPUT); //yellow
  pinMode(6,OUTPUT); //red
  pinMode(7,OUTPUT); //buzzer
  pinMode(8,OUTPUT); //relay

  digitalWrite(8,HIGH);

  delay(1000);
  
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  delay(1200);

  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);

  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  digitalWrite(4,HIGH);

  digitalWrite(8,LOW);
}

void loop() {

  delay(15000);
  
  digitalWrite(7,HIGH);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(5,HIGH);
  delay(450);
  digitalWrite(7,LOW);
  digitalWrite(4,HIGH);
  delay(50);
  digitalWrite(5,LOW);
}
