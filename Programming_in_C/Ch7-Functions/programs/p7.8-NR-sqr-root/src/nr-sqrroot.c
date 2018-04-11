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
float squareRoot(float n, float epsilon) {
  // Arbitrary initial guess
  float guess = 1.0;
  
  if (isNegative(n)) {
    printf("Negative argument to square root.\n");
    return -1.0;
  }
  
  do {
    guess = (n / guess + guess) / 2.0;
  } while(guess * guess / n > 1.000001);
  
  return guess;
}

int main(void) {
  const float epsilon = 0.00001;
  float number = 2.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 4.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 9.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 12.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 16.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 25.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 36.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 49.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 64.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 81.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = 100.0;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
  number = -17.5;
  printf("squareRoot(%.2f) = %f\n", number, squareRoot(number, epsilon));
}
