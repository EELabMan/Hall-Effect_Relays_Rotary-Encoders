/*
  Button to relay
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int relayPin =  13;      // the number of the relay trigger pin
unsigned long lastButtonPress = 0;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(relayPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {

  //If we detect LOW signal, button is pressed
  if (digitalRead(buttonPin) == LOW) {
    //if 50ms have passed since last LOW pulse, it means that the
    //button has been pressed, released and pressed again
    if (millis() - lastButtonPress > 50) {
      buttonState = !buttonState;
    }

    // Remember last button press event
    lastButtonPress = millis();
  }
  
 
   // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn relay on:
    digitalWrite(relayPin, HIGH);
  } else {
    // turn relay off:
    digitalWrite(relayPin, LOW);
  }
}
