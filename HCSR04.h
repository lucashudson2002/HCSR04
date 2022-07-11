#ifndef HCSR04_H
#define HCSR04_H

#include <Arduino.h>

class HCSR04{
private:
  byte trig, echo;
public:
  HCSR04(byte TRIG, byte ECHO):trig(TRIG), echo(ECHO){}
  begin();
  float distance_cm();
  float distance_m();
  float distance_in();
};

#endif
