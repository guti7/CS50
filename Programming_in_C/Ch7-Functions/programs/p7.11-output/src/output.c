/*
* Programming in C, 4th, Kochan
* Program 7.11
* Created by Guti on 04/04/2018.
*
* Guess the output of the program
*/
#include <stdio.h>

// Map elements to double their value (in place)
void multiplyBy2(float array[], int n) {
  int i;
  
  for (i = 0; i < n; i++) {
    array[i] *= 2;
  }
}

int main(void) {
  float floatVals[4] = { 1.2f, -3.7f, 6.2f, 8.5f};
  int i;
  int size; 
  
  size = sizeof(floatVals) / sizeof(floatVals[0]);
  multiplyBy2(floatVals, size);
  
  for( i = 0; i < size; i++) {
    printf("%.2f      ", floatVals[i]);
  }
  
  printf("\n");
  
  return 0;
}