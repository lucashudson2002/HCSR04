# HCSR04
Arduino library to control the HC-SR04 Ultrasonic Distance Sensor.

![HC-SR04](/hcsr04.jpg)

## Pinout
- VCC é a alimentação (+5V).
- TRIG e ECHO são pinos digitais, um de OUTPUT e outro de INPUT.
- GND é a terre (-).

## How to use
- When to instantiate an object, pass the trig and the echo pins to the constructor
- You can pass an optional parameter which is the time to wait for the signal to be received 
- After giving a begin in the setup, you can get the distance in centimeters, in meters and in inches.
- Any problem or suggestion, get in touch.
