/* 
 * Embedded System Sensor Streamer
 * Language: C++ (Arduino)
 * Description: Reads analog data and sends it to Serial Port.
 */

int sensorPin = A0; // Select the input pin for a potentiometer or sensor
int sensorValue = 0; 

void setup() {
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // Read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  
  // Send the value to the computer followed by a newline:
  Serial.println(sensorValue);
  
  // Wait 500 milliseconds so the data is readable:
  delay(500);
}