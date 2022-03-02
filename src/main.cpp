#include <Arduino.h>
#include <MyLED.h>

MyLED LED(5,6,7,8);

void setup() {

  LED.SetupPin();
}

void loop() {

  LED.kedip_2_LED();
  delay(500);

  LED.kedip_kedip();
  delay(500);

  LED.kedip();
  delay(500);

}