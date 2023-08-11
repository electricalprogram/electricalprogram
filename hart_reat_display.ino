void setup() {
  Serial.begin(9600);
  delay(200);

}

void loop() {
  Serial.println(analogRead(A0));
  delay(12);
}
