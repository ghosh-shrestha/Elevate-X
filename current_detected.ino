
// ACS712 Current Sensor Test for ESP32
const int currentPin = 34; // Analog input pin
const float SENSITIVITY = 66.0; // Change to 185 for 5A version, 66 for 30A version

void setup() {
  Serial.begin(115200);
  // ESP32 ADC is 12-bit (0-4095)
  analogReadResolution(12); 
}

void loop() {
  Serial.println("system running...");
  //float average = 0;
  
  // Take 1000 samples to average out the noise
 // for(int i = 0; i < 1000; i++) {
  //  average += analogRead(currentPin);
//     delay(1);
//   }
//   average /= 1000.0;

//   // Convert raw value to voltage (Assuming voltage divider is used)
//   // 3.3V / 4095 units = 0.0008V per unit
//   float voltage = average * (3.3 / 4095.0);
  
//   // The ACS712 sits at VCC/2 (2.5V) when current is 0. 
//   // After voltage divider (2/3), the center point is ~1.65V.
//   float current = (voltage - 1.65) * 1000.0 / SENSITIVITY;

//   Serial.print("Current: ");
//   Serial.print(current);
//   Serial.println(" A");
  
//   delay(500);
}
