// SD Card Module
#include <SPI.h>
#include <SD.h>

// Real Time Clock (RTC)
#include "RTClib.h"
RTC_Millis rtc;     // Software Real Time Clock (RTC)
DateTime rightNow;  // used to store the current time.

// SD Card - Confirm Pin
#define SDpin 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // Open serial communications and wait for port to open:
  while (!Serial) {
    delay(1);  // wait for serial port to connect. Needed for native USB port only
  }

  // SD Card initialisation
  Serial.print("Initializing SD card...");
  if (!SD.begin(SDpin)) {
    Serial.println("initialization failed!");
    while (1)
      ;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  trafficLights();

  delay(250);
}

/*
 Using a timer to control the traffic lights.
 @perams none
 @return none
 */
void trafficLights() {

}

/*
 Throttle engages when trafficLights turn green.
 @perams trafficLights
 @return throttle
 */
void throttle() {

}

/*
 Using a sensor on the road to trigger the brake.
 @perams sensor
 @return none
 */
void brake() {

}

/*
 sensor on the road waits for a vehicle to trigger itself.
 @perams vehicle
 @return brake
 */
void sensor() {

}
