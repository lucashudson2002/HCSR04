#include "HCSR04.h"

HCSR04::begin(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  digitalWrite(trig,LOW);
}

float HCSR04::distance_cm(){
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  long unsigned int tempo = pulseIn(echo, HIGH, waiting_time);
  float distance = 0.01715 * tempo;
  return distance > 400 ? -1 : distance;
}

float HCSR04::distance_m(){
  float distance = distance_cm();
  return distance != -1 ? distance_cm()/100 : -1;
}

float HCSR04::distance_in(){
  float distance = distance_cm();
  return distance != -1 ? distance_cm()*0.393701 : -1;
}
