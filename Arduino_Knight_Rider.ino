/*
~Chamika Lakshan  2022
//arduino knight rider 
//mini code dicing
 */


void setup() {
  for (int pin=2; pin<14; pin++){
    pinMode(pin, OUTPUT);
  }
}

void loop() {
   int t = 20;
   //------------>>> For this side
   for (int i=2; i<14; i++){
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i+1,HIGH);
    delay(t);
    digitalWrite(i+2,HIGH);
    digitalWrite(i,LOW);
    delay(t);
    digitalWrite(i+1, LOW);
   }
   // <<<------------ Ror this side
   for(int i=13; i>1; i--){
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i-1,HIGH);
    delay(t);
    digitalWrite(i-2,HIGH);
    delay(t);
    digitalWrite(i,LOW);
    delay(t);
    digitalWrite(i-1, LOW);
   }
}
