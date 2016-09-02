// reading from BMP180

#include "Adafruit_Sensor.h"
#include "Adafruit_BMP085_U.h"

Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);

void setup()
{
  Serial.begin(9600);
  if (!bmp.begin())
  {
    Serial.print("oops, no sensor detected.");
    while(1);
  }
}

void loop()
{
  //Particle.publish("Temprature in *C", bmp.getTemperature());
  Serial.print("Temprature = ");
  //Serial.print(bmp.getTemperature());
  delay(5000);
}
