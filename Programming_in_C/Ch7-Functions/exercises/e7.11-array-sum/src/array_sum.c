/*
* Programming in C, 4th, Kochan
* Exercise 7.11
* Created by Guti on 04/10/2018.
*
* Sums the elements of an integer array
*/

#include <stdio.h>

// #define SIZE 5

// prototype
long array_sum(int array[], int size);

int main(void) {
  long sum;
  int numbers[] = { 3, 2, 1, 0, 0, -1, -3 }; // sum = 2
  int length = sizeof(numbers) / sizeof(numbers[0]);
  sum = array_sum(numbers, length);
  
  printf("Sum of array: %li\n", sum);
  return 0;
}

// Calculates the sum of the elements in the array
long array_sum(int array[], int size) {
  long sum = 0;
  int i;
  
  for (i = 0; i < size; i++) {
    sum += array[i];
  }
  
  return sum;
}
