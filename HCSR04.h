#ifndef HCSR04_H
#define HCSR04_H

#include <Arduino.h>

class HCSR04{
private:
  byte trig, echo;
  unsigned long waiting_time_micros;
public:
  HCSR04(byte TRIG, byte ECHO, unsigned long WAITING_TIME_MICROS=20000) : trig(TRIG), echo(ECHO), waiting_time_micros(WAITING_TIME_MICROS){}
  begin();
  float distance_cm();
  float distance_m();
  float distance_in();
};

#endif
