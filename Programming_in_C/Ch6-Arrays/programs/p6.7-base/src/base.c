// Programming in C, 4th, Kochan
// Program 6.7
// Created by Guti on 3/22/18.

// Converts a positive integer (base10) to another base

#include <stdio.h>
int main(void)
{
  const char baseDigits[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
  };
  
  long int numberToConvert;
  long int digitsToConvert;
  int convertedNumber[64];
  int nextDigit, base, index = 0;
  
  // Get number and base from user
  // TODO: validate input number and base
  printf("number to be converted (base 10)? ");
  scanf(" %ld", &numberToConvert);
  printf("Convert to base: ");
  scanf(" %d", &base);
  
  // Convert to indicated base
  digitsToConvert = numberToConvert;
  do
  {
    convertedNumber[index] = digitsToConvert % base;
    index++;
    digitsToConvert /= base;
  } while (digitsToConvert); // numberToConvert != 0
  
  // Display results of conversion
  printf("Results:\n");
  printf("\tNumber(base 10): %ld\n", numberToConvert);
  printf("\tConversion (base %d): ", base);
  for (index--; index >= 0; index--)
  {
    nextDigit = convertedNumber[index];
    printf("%c", baseDigits[nextDigit]);
  }
  printf("\n");
  
  return 0;
}