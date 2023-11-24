#include <Adafruit_BMP085.h>
#include <Arduino.h>
#include <epd4in2.h>
#include <epdpaint.h>

fruit_BMP085 bmp;

/*void setup() {
    // put your setup code here, to run once:
    Serial.begin(115200);

    if (!bmp.begin()) {
        Serial.println("Could not find a valid BMP085 sensor, check wiring!");
        while (1) {}
    }
}*/

void setup() {
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(1000);                      // wait for a second
}

/*void loop() {
    float pressure = 0.0075f * bmp.readPressure();

    String s = "P=";
    s += String(pressure, 1);
    s += "mmHg";

    Serial.println(s);

    delay(5000);
}*/