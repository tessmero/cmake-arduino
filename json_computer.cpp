#include "json_computer.h"
#include "square.h"
#include "ArduinoJson-v6.13.0.h"

int compute(char* json_in)
{
  
  DynamicJsonDocument doc(1024);
  deserializeJson(doc, json_in);
  
  int sum = 0;
  
  JsonArray sumArr = doc["sum"];
    
  for( unsigned int i = 0 ; i < sumArr.size() ; i++ ) {
    JsonObject part = sumArr[i];      
    if( part.containsKey( "square" ) ){
      sum += square_number(part["square"]);
    }
    if( part.containsKey( "no-square" ) ) {
      sum += part["no-square"].as<int>();
    }
  }
  
  return sum;
}



