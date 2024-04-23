 // Define the pin for motor control
 const int motorPin5 = 5; // Connect to the control pin of the DC motor
 const int motorPin11 = 11; // Connect to the control pin of the DC motor
 const int motorPin10 = 10; // Connect to the control pin of the DC motor
 const int motorPin6 = 6; // Connect to the control pin of the DC motor

const int xAxisPinR = A0; // Analog pin for X-axis
const int yAxisPinR = A1; // Analog pin for Y-axis
const int buttonPinR = 2; // Digital pin for button

const int xAxisPinL = A2; // Analog pin for X-axis
const int yAxisPinL = A3; // Analog pin for Y-axis
const int buttonPinL = 3; // Digital pin for button






 void setup() {
   // Set motor pin as an output
   pinMode(motorPin5, OUTPUT);
    pinMode(motorPin11, OUTPUT);
 pinMode(motorPin10, OUTPUT);
 pinMode(motorPin6, OUTPUT);

 Serial.begin(9600); // Initialize serial communication
  pinMode(buttonPinR, INPUT_PULLUP); // Set button pin as input with pull-up resistor
pinMode(buttonPinL, INPUT_PULLUP);



}

 void loop() {
 // Turn on the motor
// Read joystick values
  int xAxisValueR = analogRead(xAxisPinR);
  int yAxisValueR = analogRead(yAxisPinR);
  int buttonStateR = digitalRead(buttonPinR);

   int xAxisValueL = analogRead(xAxisPinL);
  int yAxisValueL = analogRead(yAxisPinL);
  int buttonStateL = digitalRead(buttonPinL);

if(xAxisValueR <= 250){
digitalWrite (motorPin10, HIGH);
digitalWrite (motorPin11, HIGH);

}
else if(xAxisValueR >= 250){
 digitalWrite (motorPin10, LOW);
digitalWrite (motorPin11, LOW); 
}


if(xAxisValueL <= 250){
digitalWrite (motorPin5, HIGH);
digitalWrite (motorPin6, HIGH);

}
else if(xAxisValueL >= 250){
 digitalWrite (motorPin5, LOW);
digitalWrite (motorPin6, LOW); 
}

  // Print values to serial monitor
  //  Serial.print("X-axisR: ");
  //  Serial.print(xAxisValueR);
  //  Serial.print("\tY-axisR: ");
  //  Serial.print(yAxisValueR);
  //  Serial.print("\tButtonR: ");
  //  Serial.println(buttonStateR);


     // Print values to serial monitor
   Serial.print("X-axisL: ");
   Serial.print(xAxisValueL);
   Serial.print("\tY-axisL: ");
   Serial.print(yAxisValueL);
   Serial.print("\tButtonL: ");
   Serial.println(buttonStateL);



 }


