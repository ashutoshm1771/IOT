// This uses Serial Monitor to display Range Finder distance readings

// Include NewPing Library
#include "NewPing.h"

// Hook up HC-SR04 with Trig to Arduino Pin 9, Echo to Arduino pin 10
#define TRIGGER_PIN 16
#define ECHO_PIN 17

// Maximum distance we want to ping for (in centimeters).
#define MAX_DISTANCE 400	

// NewPing setup of pins and maximum distance.
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
float duration, distance;

void setup() 
{
	Serial.begin(115200);
}

void loop() 
{
	// Send ping, get distance in cm
	distance = sonar.ping_cm();
	
	// Send results to Serial Monitor
	Serial.print("Distance = ");
  Serial.print(distance*10);
	
	
		Serial.print(distance);
		Serial.println(" mm");
	delay(1000);
}
