/*
 ~Chamika Laksan   2022
 //auto maticaly helmat
 */
const int MQ3=0;
const int Buzzer=8;
const int LED=13;
int value;

void setup() {
  Serial.begin(9600);
  pinMode(MQ3, INPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(Buzzer,LOW);
  digitalWrite(LED,LOW);
  pinMode(8,INPUT);
}

void loop(){
  int button = digitalRead(8);
  Serial.println(button);

  if(button ==HIGH){
  value= analogRead(MQ3);
  Serial.println(value);
  
  if(value>300)
  {
    digitalWrite(Buzzer,HIGH);
    digitalWrite(LED,LOW);
  }else{
    digitalWrite(Buzzer,LOW);
    digitalWrite(LED,HIGH);

  }
 }
  else{
    digitalWrite(LED,LOW);
  }
}
