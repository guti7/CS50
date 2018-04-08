/*
* Programming in C, 4th, Kochan
* Program 7.13
* Created by Guti on 04/07/2018.
*
* Converts a positive integer to another Base
*/

#include <stdio.h>

// Global variables: Can be accessed by _any_ function in the program
long numberToConvert;
int base;
int convertedNumber[64];
int digit = 0;

// Prototypes
void getNumberAndBase(void);
void convertNumber(void);
void displayConvertedNumber(void);

int main(void) {
  getNumberAndBase();
  convertNumber();
  displayConvertedNumber();
  
  return 0;
}