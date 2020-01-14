#include "../square.h"
#include "../json_computer.h"
#include <iostream>

int main(int argc, char *argv[])
{
  char json_in[] = "{sum:[{\"square\":6},{\"no-square\":7}]}";
  
  std::cout << "input: " << json_in << std::endl;
  
  int result = compute( json_in );
  
  std::cout << "output: " << result << std::endl;
  
  return 0;
}