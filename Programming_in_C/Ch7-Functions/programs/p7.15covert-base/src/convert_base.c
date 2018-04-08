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
void getNumberAndBase();
void convertNumber();
void displayConvertedNumber();

int main(void) {
  getNumberAndBase();
  convertNumber();
  displayConvertedNumber();
  
  return 0;
}

void getNumberAndBase() {
  printf("Number to be converted? ");
  scanf(" %li", &numberToConvert);
  
  printf("Base? ");
  scanf(" %i", &base);
  
  if (base < 2 || base > 16) {
    printf("Invalid Base: must be between 2 and 16\n");
    base = 10; // TODO: How to handle...?
  }
}

void convertNumber() {
  do {
    convertedNumber[digit] = numberToConvert % base;
    digit++;
    numberToConvert /= base;
  } while (numberToConvert != 0);
}

void displayConvertedNumber() {
  const char baseDigits[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
  };
  
  int nextDigit;
  
  printf("Converted number = ");
  for(--digit; digit >= 0; digit--) {
    nextDigit = convertedNumber[digit];
    printf("%c", baseDigits[nextDigit]);
  }
  
  printf("\n");
}