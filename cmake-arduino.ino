#include "square.h"


void setup()   {
  Serial.begin(38400);
}

void loop()                     
{
  Serial.print("5 squared = ");
  Serial.println(square_number(5));
  delay(1000);
}
