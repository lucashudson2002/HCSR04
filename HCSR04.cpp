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

  long unsigned int tempo = pulseIn(echo, HIGH);
  return 0.01715 * tempo;
}

float HCSR04::distance_m(){
  return distance_cm()/100;
}

float HCSR04::distance_in(){
  return distance_cm()*0.393701;
}
