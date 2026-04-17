

 
// Define the pin where the sensor's DO pin is connected
const int vibrationPin = 14; 

void setup() {
  // Start the serial monitor so we can see the output
  Serial.begin(115200); 
  
  // Set the vibration pin as an input
  pinMode(vibrationPin, INPUT);
  
  Serial.println("Vibration Sensor Test Started!");
}

void loop() {
  // Read the state of the sensor (will be 1 or 0)
  int sensorState = digitalRead(vibrationPin);
  
  // The SW-420 usually outputs HIGH (1) when vibrating and LOW (0) when still.
  // (Some modules are inverted, so test to see which yours is!)
  if (sensorState == HIGH) {
    Serial.println("VIBRATION DETECTED! 🚨");
  } else {
    Serial.println("System Stable.");
  }
  
  // Wait a short moment before reading again
  delay(100); 
}


