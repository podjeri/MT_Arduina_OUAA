// USES SERVO LIBRARY
#include <Servo.h> 

// SERVO VARIABLE
Servo myservo1; 
Servo myservo2;
Servo myservo3;
// ASSIGNED PINS FOR EACH BUTTON
const int button1Pin = 2;
const int button2Pin = 4;
const int button3Pin = 8;
// BUTTON STATE VARIABLES
int buttonState1;
int buttonState2;
int buttonState3;
int previousButtonState1 = 0;
int previousButtonState2 = 0;
int previousButtonState3 = 0;

void setup() {
  // SETUP EACH PIN
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  // SERIAL BEGIN
  Serial.begin(9600);
  // ATTACH THE SERVO
  myservo1.attach(11);
  myservo2.attach(12);
  myservo3.attach(13);
  // RESETS SERVO
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  // RESET READING
  digitalWrite(button1Pin, LOW);
  digitalWrite(button2Pin, LOW);
  digitalWrite(button3Pin, LOW);
}

void loop() {
  // BUTTON 1
  buttonState1 = digitalRead(button1Pin);
  if (buttonState1 != previousButtonState1) {
    if (buttonState1 == HIGH){
    myservo1.write(180);
    Serial.print("Success 1");
    }
    previousButtonState1 = buttonState1;
    } 
  // BUTTON 2
  buttonState2 = digitalRead(button2Pin);
  if (buttonState2 != previousButtonState2) {
    if (buttonState2 == HIGH){
    myservo2.write(180);
    Serial.print("Success 2");
    }
   previousButtonState2 = buttonState2;
    }
  // BUTTON 3
 buttonState3 = digitalRead(button3Pin);
  if (buttonState3 != previousButtonState3) {
    if (buttonState3 == HIGH){
    myservo3.write(180);
    Serial.print("Success 3");
    }
   previousButtonState3 = buttonState3;
    }
}
