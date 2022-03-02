#ifndef MyLED_h
#define MyLED_h

#include "Arduino.h"

class MyLED{

    public:

    MyLED(int pin1,int pin2,int pin3,int pin4);

    void SetupPin();

    void kedip_2_LED();

    void kedip_kedip();

    void kedip();

};
#endif