#include <stdlib.h>
#include "Arduino.h"
#include "SoilMoisture.h"

#define A0 4

const int AirValue = 3000;   //you need to change this value that you had recorded in the air
const int WaterValue = 1200;  //you need to change this value that you had recorded in the water
int intervals = (AirValue - WaterValue) / 3;
int soilMoistureValue = 0;

int getSoilMoistureStatus()
{

  soilMoistureValue = analogRead(A0);  //put Sensor insert into soil
  //printf("moisture:%d\r\n", soilMoistureValue);
  if (soilMoistureValue > WaterValue && soilMoistureValue < (WaterValue + intervals))
  {
    //Serial.println("Very Wet");
    //printf("very wet\r\n");
    return VERYWET;
  }
  else if (soilMoistureValue > (WaterValue + intervals) && soilMoistureValue < (AirValue - intervals))
  {
    //Serial.println("Wet");
    //printf("wet\r\n");
    return WET;
  }
  else if (soilMoistureValue < AirValue && soilMoistureValue > (AirValue - intervals))
  {
    //Serial.println("Dry");
    //printf("dry\r\n");
    return DRY;
  }
  else if(soilMoistureValue >= AirValue)
  {
    //printf("very dry\r\n");
    return VERYDRY;    
  }
}

