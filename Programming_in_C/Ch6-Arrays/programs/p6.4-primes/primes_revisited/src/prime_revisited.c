// Programming in C, 4th, Kochan
// Program 6.4
// Created by Guti on 3/8/18.

// Program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>

int main(void) {
 
 int p, d;
 bool isPrime;

 for (p = 2; p <= 50; p++) {
  isPrime = true;

  for (d = 2; d < p; d++) {
   if (p % d == 0)
    isPrime = false;
  }

  if (isPrime)
   printf ("%i ", p);
 }

 printf ("\n");

 return 0;
}
