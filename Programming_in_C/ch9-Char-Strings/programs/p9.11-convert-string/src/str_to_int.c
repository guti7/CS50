/*
* Programming in C, 4th, Kochan
* Program 9.11
* Created by @guti7 on 04/21/2018
*
* Converting a string to its integer equivalent
*/

#include <stdio.h>

int strToInt(const char string[]);

int main(void) {
  
  char string[] = "1234";
  int intFromString;
  
  intFromString = strToInt(string);
  printf("\'%s\': value: %i\n", string, intFromString);
  
  printf("value: %i\n", strToInt("245"));
  printf("value: %i\n", strToInt("100") + 25);
  printf("value: %i\n", strToInt("12x5"));
  
  
  return 0;
}

int strToInt(const char string[]) {
  
  int i, result = 0;
  
  for (i = 0; string[i] >= '0' && string[i] <= '9'; i++) {
    result = result * 10 + (string[i] - '0');
  }
  
  return result;
}