#include <HCSR04.h>

#define trig A0
#define echo A1

HCSR04 hcsr04(trig, echo);

void setup() {
  hcsr04.begin();
  Serial.begin(9600);
}

void loop() {
  Serial.println(hcsr04.distance_cm());
  delay(300);
}
