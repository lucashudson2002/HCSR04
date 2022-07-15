#include <HCSR04.h>

#define TRIG 4
#define ECHO 5

//create the object for HCSR04 with the define above
HCSR04 hcsr04(TRIG, ECHO);

void setup() {
  //initialize the H-bridge and pinMode them
  hcsr04.begin();
  Serial.begin(9600);
}

void loop() {
  //read the distance in centimeters
  float distance = hcsr04.distance_cm();
  Serial.println(distance);
  delay(300);
}
