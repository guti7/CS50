/*
* Programming in C, 4th, Kochan
* Program 7.16
* Created by Guti on 04/08/2018.
*
* Demonstrates static and automatic behavior on variables
*/

#include <stdio.h>

void auto_static(void) {
  int autoVar = 1;
  // The value of a static variable is set only once at program execution
  // The value is retained from one function call to the next.
  static int staticVar = 1;
  
  printf("Automatic = %i, static = %i\n", autoVar, staticVar);
  
  autoVar++;
  staticVar++;
}

int main(void) {
  int i;
  
  for (i = 0; i < 5; i++) {
    auto_static();
  }
  
  return 0;
}
