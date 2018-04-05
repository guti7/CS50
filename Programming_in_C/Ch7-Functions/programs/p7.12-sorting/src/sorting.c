/*
* Programming in C, 4th, Kochan
* Program 7.12
* Created by Guti on 04/05/2018.
*
* Sort an array of integers in ascending order
*/

#include <stdio.h>

#define SIZE 6

// Sort array in ascending order
void sort(int a[], int n) {
  int i, j, temp;
  
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (a[i] > a[j]) { // swap if next is larger than current
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main(void) {
  int i;
  
  int array[SIZE] = { 34, -5, -6, 0, 12, 100 };
  
  printf("The array to be sorted: \n");
  for (i = 0; i < SIZE; i++) {
    printf("%i ", array[i]);
  }
  
  sort(array, SIZE);
  
  printf("\n\nThe array sorted:\n");
  
  for (i = 0; i < SIZE; i++) {
    printf("%i ", array[i]);
  }
  
  printf("\n");
  
  return 0;
}