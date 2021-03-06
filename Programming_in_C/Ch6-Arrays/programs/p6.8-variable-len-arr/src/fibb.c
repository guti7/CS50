// Programming in C, 4th, Kochan
// Program 6.8
// Created by Guti on 3/22/18.

// Generates the first 15 fibonacci numbers using a variable length array
// A varible length array is one which is specified by a variable
// and not a constant expression for its size
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, numFibs;
  unsigned long long *fibonacci;
  
  // Get number of fibonacci numbers to display
  printf("How many fibonacci numbers do you want (1-75)? ");
  scanf(" %d", &numFibs);
  
  // Input check
  if (numFibs < 1 || numFibs > 75)
  {
    printf("Error - Bad number: %d\n", numFibs);
    return 1; // Exit failure code 1
  }
  
  // Array holding fibonacci sequence
  fibonacci = malloc(sizeof(unsigned long long) * numFibs);
  
  // First two numbers in the sequence are always 0, 1 
  fibonacci[0] = 0;
  fibonacci[1] = 1;
  
  for (i = 2; i < numFibs; i++)
  {
    fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
  }
  
  // Print fibonacci sequence
  for (i = 0; i < numFibs; i++)
  {
    printf("%lld ", fibonacci[i]);
  }
  printf("\n");
  
  free(fibonacci);
  return 0;
}