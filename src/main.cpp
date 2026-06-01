#include <Arduino.h>
const uint8_t pin0 = 2;
const uint8_t pin1 = 3;
const uint8_t pin2 = 4;
const uint8_t pin3 = 5;


void setup() {
  pinMode(pin0, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);

}

void loop() {
  for(uint8_t i; i<=15; i++){
  digitalWrite(pin0, (i >> 0) & 1);
  digitalWrite(pin1, (i >> 1) & 1);
  digitalWrite(pin2, (i >> 2) & 1);
  digitalWrite(pin3, (i >> 3) & 1);
  delay(350);
}
}