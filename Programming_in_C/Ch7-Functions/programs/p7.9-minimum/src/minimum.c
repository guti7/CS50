/*
* Programming in C, 4th, Kochan
* Program 7.9
* Created by Guti on 04/04/2018.
*
* Find the minimum value in an array
*/
#include <stdio.h>

#define SIZE 3

// Finds the minimum value in an array
int minimum(int values[], int size){
  int minValue, i;
  
  minValue = values[0];
  for (i = 1; i < size; i++) {
    if (values[i] < minValue) {
      minValue = values[i];
    }
  }
  
  return minValue;
}

int main(void) {
  int scores[SIZE], i, minScore;
  int count;
  
  printf("Enter %i scores:\n", SIZE);
  
  for (i = 0; i < SIZE; i++) {
    scanf (" %i", &scores[i]);
  }
  
  minScore = minimum(scores, SIZE);
  printf("The minimum score is %i\n", minScore);
  
  int array[5] = {157, -28, -37, 26, 10};
  int array2[7] = {12, 45, 1, 10, 5, 3, 22};
  
  count = sizeof(array) / sizeof(array[0]);
  printf("array  min: %i\n", minimum(array, count));
  count = sizeof(array2) / sizeof(array2[0]);
  printf("array2 min: %i\n", minimum(array2, count));
    
  return 0;
}
