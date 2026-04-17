
void setup() { Serial.begin(115200); }
void loop() {
  int raw = analogRead(34);
  float milliVolts = raw * (3300.0 / 4095.0); // ESP32 is 12-bit ADC
  float tempC = milliVolts / 10.0; 
  Serial.printf("Temp: %.2f C\n", tempC);
  delay(1000);
}
