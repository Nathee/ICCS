#include <Arduino.h>

#include "sourceDHT.h"
#include "sourceOUTPUT.h"

unsigned long previousMillis = 0;
const long interval = 2000;

float chkTEMP;
void setup()
{
  pinMode(FAN01PIN, OUTPUT);
  pinMode(FAN02PIN, OUTPUT);
  // Start Serial
  Serial.begin(115200);
  // Start DHT
  dht.begin();
}

void loop()
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval)
  {
    // save the last time you blinked the LED
    previousMillis = currentMillis;
    // Wait a few seconds between measurements.
    chkTEMP = getTemp();
    Serial.println(chkTEMP);
  }
  fanCONTROL(chkTEMP);
}