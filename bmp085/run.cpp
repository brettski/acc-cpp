// Messing around with the adafruit BMP085 sensor

#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>

Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);

void setup()
{
  Serial.begin(9600);
  Serial.println("Brett Test");

}

void loop()
{

}
