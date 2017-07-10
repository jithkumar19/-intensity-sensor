#include <Wire.h>

#include <Wire.h>
#include <BH1750.h>


BH1750 lightMeter;
int led1 = 12;
int led2 = 13;


void setup()
{
  Serial.begin(9600);
  lightMeter.begin();
  Serial.println("Running...");
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}


void loop()
 {
  uint16_t lux = lightMeter.readLightLevel();
  Serial.print("Light: ");
  Serial.print(lux);
  Serial.println(" lx");
  delay(1000);
 if (lux >= 1000)
{
 digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
 else (lux <= 1000);
{
 digitalWrite(led1, LOW);
}
 
if(lux >= 1000)
{
digitalWrite(led2, HIGH);
}
else
{
digitalWrite(led2, LOW);
}
}
