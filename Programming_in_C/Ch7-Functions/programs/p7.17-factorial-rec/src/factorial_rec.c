/*
* Programming in C, 4th, Kochan
* Program 7.17
* Created by Guti on 04/09/2018.
*
* Calculates factorials recursively
*/

#include <stdio.h>

#define N 11

// Prototypes
unsigned long factorial(unsigned int n);

int main(void) {
  unsigned int j;
  
  for (j = 0; j < N; j++) {
    printf("%2u! = %8lu\n", j, factorial(j));
  }
  
  return 0;
}

// Calculate the factorial of a positive integer using recursion
unsigned long factorial(unsigned int n) {
  
  if (n == 0 ) {
    return 1;
  }
  
  return n * factorial(n - 1);  
}