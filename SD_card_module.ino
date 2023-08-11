/*
//Chamika Lakshan   2022
//SD card module speakers out
 */

#include <SD.h>
#include <TMRpcm.h>
#define SD_ChipSelectPin 10 // define CS pin //

TMRpcm tmrpcm;  //speaker library //

void setup() {
  Serial.begin(9600);
  tmrpcm.speakerPin = 9; //speaker pin //

  Serial.println("speakerPin");

   if (!SD.begin(SD_ChipSelectPin))

       { Serial.println("initialized");
       return; }

     Serial.println("setVolume"); // 0 to 7 set volume level
     tmrpcm.setVolume(5);
     Serial.println("play");
     tmrpcm.play("MUSIC.wav");
     Serial.println("Don");
}
     

void loop() {

}
