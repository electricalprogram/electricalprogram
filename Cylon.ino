#include <FastLED.h>
// How many leds in your strip?
#define NUM_LEDS 50

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806, define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 2
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
	Serial.begin(57600);
	Serial.println("resetting");
	FastLED.addLeds<WS2812,DATA_PIN,RGB>(leds,NUM_LEDS);
	FastLED.setBrightness(200);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void fadeall() { for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(250); } }

void loop() { 
   digitalWrite(7,LOW);
   delay(1500);
   digitalWrite(8,LOW);
   digitalWrite(7,HIGH);
   delay(2000);
   digitalWrite(8,HIGH);
   delay(1500);
   
   digitalWrite(8,LOW);
   delay(1500);
   digitalWrite(8,HIGH);
   delay(1500);
   digitalWrite(7,LOW);
   delay(1500);
   digitalWrite(7,HIGH);
   delay(1600);
   digitalWrite(8,LOW);
   delay(1500);
   digitalWrite(8,HIGH);
   delay(1500);
   digitalWrite(7,LOW);
   delay(1500);
   digitalWrite(7,HIGH);
   delay(1000);

   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(1500);

   digitalWrite(8,LOW);
   digitalWrite(7,HIGH);
   delay(1500);

   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(1500);

   digitalWrite(8,LOW);
   digitalWrite(7,HIGH);
   delay(1500);

   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(1500);

   digitalWrite(8,LOW);
   digitalWrite(7,HIGH);
   delay(1500);

   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(1500);

   digitalWrite(7,HIGH);

   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   delay(500);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   delay(500);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   delay(500);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   delay(500);
   
   
	static uint8_t hue = 0;
	Serial.print("x");
	for(int i = 0; i < NUM_LEDS; i++) {
		leds[i] = CHSV(hue++, 255, 255);
		FastLED.show(); 
		fadeall();
		delay(30);
	}
	Serial.print("x");
	
	for(int i = (NUM_LEDS)-1; i >= 0; i--) {
		leds[i] = CHSV(hue++, 255, 255);
		FastLED.show();
		fadeall();
		delay(70);

	}
}
