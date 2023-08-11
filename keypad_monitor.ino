/*
~Chamika Laksan   2022
//keypad moniting
 */


#include<Keypad.h>

byte rowPins[4] = {2,3,4,5};
byte colPins[4] = {6,7,8,9};

char keys[4][4] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}

};

Keypad Chamika = Keypad(makeKeymap(keys), rowPins,colPins, 4, 4 );

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = Chamika.getKey();

  if (key !=NO_KEY){
    Serial.println(key);
  }
}
