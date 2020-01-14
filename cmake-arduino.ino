#include "json_computer.h"


void setup()   {
  Serial.begin(38400);
}

void loop()                     
{
  char json_in[] = "{sum:[{\"square\":6},{\"no-square\":7}]}";
  Serial.print("input: ");
  Serial.println(json_in);
  
  int result = compute( json_in );
  Serial.print("output: ");
  Serial.println(result);
  
  delay(1000);
}
