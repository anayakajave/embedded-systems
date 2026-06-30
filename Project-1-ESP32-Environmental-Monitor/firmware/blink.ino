// ESP32 LED Blink
// Author: Anaya Kajave
// Description: Blinks an LED on GPIO pin 2
//              ON for 2 seconds, OFF for 500ms

void setup() {
  pinMode(2, OUTPUT);  // Set pin 2 as output
}

void loop() {
  digitalWrite(2, HIGH);  // Turn LED ON (3.3V)
  delay(2000);            // Wait 2 seconds
  digitalWrite(2, LOW);   // Turn LED OFF (0V)
  delay(500);             // Wait 500ms
}