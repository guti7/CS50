// Programming in C, 4th, Kochan
// Program 6.3
// Created by Guti on 3/22/18.

// Generates the first 15 fibonacci sequence numbers
#include <stdio.h>

#define SIZE 15
int main(void)
{
  int fibonacci[SIZE], i;
  
  // First two numbers is the sequence are always 0, 1 
  fibonacci[0] = 0;
  fibonacci[1] = 1;
  
  for (i = 2; i < SIZE; i++)
  {
    fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
  }
  
  for (i = 0; i < SIZE; i++)
  {
    printf("%i\n", fibonacci[i]);
  }
  
  return 0;
}