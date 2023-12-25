#include <Servo.h>

// Define the servo motor pin
const int servoPin = 9;

// Create a Servo object
Servo myServo;

void setup() {
  // Attach the servo to the corresponding pin
  myServo.attach(servoPin);

  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the input from a digital pin (0 or 1)
  int inputValue = digitalRead(2);  // Change 2 to the actual pin you are using

  // Map the input value (0 or 1) to servo angles (0 or 90 degrees)
  int angle = map(inputValue, 0, 1, 0, 90);

  // Move the servo to the calculated angle
  myServo.write(angle);

  // Print the current angle to the serial monitor
  Serial.print("Current Angle: ");
  Serial.println(angle);

  // Add a delay for stability
  delay(1000);
}
