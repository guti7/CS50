/*
* Programming in C, 4th, Kochan
* Program 7.9
* Created by Guti on 04/04/2018.
*
* Find the minimum value in an array
*/
#include <stdio.h>

#define SIZE 10

// Finds the minium value in an array
int minimum(int values[]){
  int minValue, i;
  
  minValue = values[0];
  for (i = 1; i < SIZE; i++) {
    if (values[i] < minValue) {
      minValue = values[i];
    }
  }
  
  return minValue;
}

int main(void) {
  int scores[SIZE], i, minScore;
  
  printf("Enter 10 scores\n");
  
  for (i = 0; i < SIZE; i++) {
    scanf (" %i", &scores[i]);
  }
  
  minScore = minimum(scores);
  
  printf("The minimum score is %i\n", minScore);
  
  return 0;
}
