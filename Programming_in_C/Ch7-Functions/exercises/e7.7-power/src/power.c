/*
* Programming in C, 4th, Kochan
* Exercise 7.7
* Created by Guti on 04/10/2018.
*
* Calculates the power of an integer
*/

#include <stdio.h>

// prototype
long n_to_the_p(int n, int p);

int main(void) {
  
  int n, p;
  n = 2;
  p = 2;
  printf("Powers of n:\n");
  printf("%i^%i: %10li\n", n, p, n_to_the_p(n, p));
  p = 3;
  printf("%i^%i: %10li\n", n, p, n_to_the_p(n, p));
  p = 4;
  printf("%i^%i: %10li\n", n, p, n_to_the_p(n, p));
  p = 5;
  printf("%i^%i: %10li\n", n, p, n_to_the_p(n, p));
  n = 4, p = 5;
  printf("%i^%i: %10li\n", n, p, n_to_the_p(n, p));
  n = 7, p = 9;
  printf("%i^%i: %10li\n", n, p, n_to_the_p(n, p));
  
}

// Raises an integer `x=n` to a positive integer power `p`
long n_to_the_p(int n, int p) {
  long result = 1;
  int i;
  for (i = 0; i < p; i++){
    result *= n;
  }
  return result;
}