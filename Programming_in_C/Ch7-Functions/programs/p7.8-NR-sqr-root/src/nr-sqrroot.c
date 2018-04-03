/*
* Programming in C, 4th, Kochan
* Program 7.8
* Created by Guti on 04/02/2018.
*
* Calculates the square root of a value using the
* Newton-Raphson approximation method
*/
#include <stdio.h>

// Check number sign
int isNegative(int n) {
  return n < 0;
}

// Calculate the absolute value of a number
float absoluteValue(float n) {
  return isNegative(n)? -n: n;
}

// Compute the square root of a number
float squareRoot(float n) {
  const float epsilon = 0.00001;
  float guess = 1.0;
  
  if (isNegative(n)) {
    printf("Negative argument to square root.\n");
    return -1.0;
  }
  
  while(absoluteValue(guess * guess - n) >= epsilon) {
    guess = (n / guess + guess) / 2.0;
  }
  
  return guess;
}

int main(void) {
  float number = 2.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number));
  number = 144.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number));
  number = 17.5;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number));
  number = -17.5;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number));
}
