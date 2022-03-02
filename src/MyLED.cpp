#include "MyLED.h"
#include "Arduino.h"

int LED1, LED2, LED3, LED4;

MyLED::MyLED(int pin1, int pin2, int pin3, int pin4){

    LED1=pin1;
    LED2=pin2;
    LED3=pin3;
    LED4=pin4;

}
void MyLED::SetupPin()
{
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);

}

void MyLED::kedip_2_LED()
{
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    delay(100);
}

void MyLED::kedip_kedip()
{
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    delay(100);

    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    delay(100);
    }

void MyLED::kedip()
{
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED4, LOW);
    delay(100);

    digitalWrite(LED4, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    delay(100);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(100);
}
