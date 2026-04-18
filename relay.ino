void setup() { pinMode(32, OUTPUT); }
void loop() {
  digitalWrite(32, LOW); // ON (Check if your relay is active LOW)
  delay(5000);
  digitalWrite(32, HIGH); // OFF
  delay(5000);
}
