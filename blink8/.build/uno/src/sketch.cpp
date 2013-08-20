#include <Arduino.h>
void setup();
void loop();
#line 1 "src/sketch.ino"

void setup() {
// initialize the ouput pins
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);

}

void loop() {
digitalWrite(2, HIGH);   // Turn Led 12 on
delay(1000);              // wait for a second
digitalWrite(2, LOW);    // set the LED 12 off
delay(1000);              // wait for a second
digitalWrite(3, HIGH);   // set the LED 11 on
delay(1000);              // wait for a second
digitalWrite(3, LOW);    // set the LED 11 off
delay(1000);
digitalWrite(4, HIGH);   // Turn Led 10 on
delay(1000);              // wait for a second
digitalWrite(4, LOW);    // set the LED 10 off
delay(1000);              // wait for a second
digitalWrite(5, HIGH);   // set the LED 9 on
delay(1000);              // wait for a second
digitalWrite(5, LOW);    // set the LED 9 off
delay(1000);
digitalWrite(6, HIGH);   // Turn Led 8 on
delay(1000);              // wait for a second
digitalWrite(6, LOW);    // set the LED 8 off
delay(1000);              // wait for a second
digitalWrite(7, HIGH);   // set the LED 7 on
delay(1000);              // wait for a second
digitalWrite(7, LOW);    // set the LED 7 off
delay(1000);
digitalWrite(8, HIGH);   // set the LED 6 on
delay(1000);              // wait for a second
digitalWrite(8, LOW);    // set the LED 6 off
delay(1000);
digitalWrite(9, HIGH);   // set the LED 5 on
delay(1000);              // wait for a second
digitalWrite(9, LOW);    // set the LED 5 off
delay(1000);
}
