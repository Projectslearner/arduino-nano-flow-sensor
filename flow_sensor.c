/*
    Project name : Flow Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-flow-sensor
*/

#define FLEX_PIN A0 // Analog pin connected to the flex sensor

void setup() 
{
  Serial.begin(9600); // Initialize serial communication
}

void loop()
 {
  int flexValue = analogRead(FLEX_PIN); // Read flex sensor value
  
  Serial.print("Flex Sensor Value: ");
  Serial.println(flexValue); // Print flex sensor value to serial monitor
  
  delay(1000); // Delay for readability
}
