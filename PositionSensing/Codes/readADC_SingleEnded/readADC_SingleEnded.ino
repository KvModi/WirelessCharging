#include <Wire.h>
#include <Adafruit_ADS1015.h>
 
Adafruit_ADS1115 ads1015;
 
void setup(void)
{
  Serial.begin(9600);
  Serial.println("Hello!");
  
  Serial.println("Getting single-ended readings from AIN0..3");
  Serial.println("ADC Range: +/- 6.144V (1 bit = 3mV)");
  ads1015.begin();
}
 
void loop(void)
{
  int16_t adc0, adc1, adc2, adc3;
 
  adc0 = ads1015.readADC_SingleEnded(0);
  adc1 = ads1015.readADC_SingleEnded(1);
  adc2 = ads1015.readADC_SingleEnded(2);
  adc3 = ads1015.readADC_SingleEnded(3);
 // Serial.print("AIN0: "); 
  Serial.println(adc0);
  //Serial.print("AIN1: "); 
  Serial.println(adc1);
  //Serial.print("AIN2: "); 
  Serial.println(adc2);
  //Serial.print("AIN3: "); 
  Serial.println(adc3);
  Serial.println(" ");
  
  delay(10);
}
