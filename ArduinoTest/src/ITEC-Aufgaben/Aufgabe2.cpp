#include <Arduino.h>
// the setup function runs once when you press reset or power the board
void setup() {
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
    delay(1000);                      // wait for a second
    digitalWrite(12, HIGH);  // turn the LED on (HIGH is the voltage level)
    digitalWrite(13, HIGH);
    delay(1000);                      // wait for a second
    digitalWrite(12, LOW);   // turn the LED off by making the voltage LOW
    digitalWrite(13, LOW);
    delay(1000);
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
    delay(1000);
    digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
    digitalWrite(12, HIGH);
    delay(1000);                      // wait for a second
    digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
    digitalWrite(12, LOW);
    delay(1000);
}
