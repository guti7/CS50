/*
* Structures containing Arrays
*/
#include <stdio.h>

struct month {
  int numberOfDays;
  char name[3];
};

int main(void) {
  struct month january = { 31, { 'J', 'a', 'n' } };
  
  // You cannot assign a string literal to a char array after its been created.
  // you can use a string literal only at the time of definition.
  // january.numberOfDays = 31;
  // january.name = "Jan"; // attempts to assign the address of a (the array).
  
  printf("Month: %s, days: %i\n", january.name, january.numberOfDays);
}