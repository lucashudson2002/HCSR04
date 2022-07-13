#ifndef HCSR04_H
#define HCSR04_H

#include <Arduino.h>

class HCSR04{
private:
  byte trig, echo;
  unsigned long waiting_time;
public:
  HCSR04(byte TRIG, byte ECHO, unsigned long WAITING_TIME=1e6) : trig(TRIG), echo(ECHO), waiting_time(WAITING_TIME){}
  begin();
  float distance_cm();
  float distance_m();
  float distance_in();
};

#endif
