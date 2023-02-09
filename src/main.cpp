#include <Arduino.h>
#include <Ultrasonic.h>
#define TRIG_PIN 12
#define ECHO_PIN 11
Ultrasonic ultrasonic(TRIG_PIN, ECHO_PIN);
int distance;
void setup() {
 Serial.begin(9600);
}
void loop() {
 distance = ultrasonic.read();
 Serial.println(distance);
}
