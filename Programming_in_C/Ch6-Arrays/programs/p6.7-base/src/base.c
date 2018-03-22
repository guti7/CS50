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
  int convertedNumber[64];
  int nextDigit, base, index = 0;
  
  // Get number and base from user
  printf("Number to be converted? ");
  scanf(" %ld", &numberToConvert);
  printf("Base? ");
  scanf(" %d", &base);
  
  // Convert to indicated base
  do
  {
    convertedNumber[index] = numberToConvert % base;
    index++;
    numberToConvert /= base;
  } while (numberToConvert); // numberToConvert != 0
  
  // Display results of conversion
  printf("Converted number = ");
  for (index--; index >= 0; index--)
  {
    nextDigit = convertedNumber[index];
    printf("%c", baseDigits[nextDigit]);
  }
  printf("\n");
  
  return 0;
}