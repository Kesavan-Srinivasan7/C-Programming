//Boolean datatype(bool) that has one "of" two values like yes or no, true or flase , on or off
//In C, the bool type is not a built-in data type, like int or char.so we need to add a header file to use bool
//#include <stdbool.h>
#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

int main() {
  bool rain = true;
  bool sun = false;
  printf("%d\n", rain);  // Returns 1 (true)
  printf("%d", sun);         // Returns 0 (false)
  
  return 0;
}