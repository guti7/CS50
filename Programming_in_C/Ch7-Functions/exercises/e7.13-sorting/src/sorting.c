/*
* Programming in C, 4th, Kochan
* Program 7.12
* Created by Guti on 04/05/2018.
*
* Sort an array of integers in ascending order
*/

#include <stdio.h>
#include <stdbool.h>

#define SIZE 6

// Swap array elements at given indeces
void swap(int array[], int i, int j) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

// Sort array in ascending or descending order
void sort(int a[], int n, bool isAscending) {
  int i, j, temp;
  
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (isAscending) {
        if (a[i] > a[j]) { // swap if next is smaller than current
          swap(a, i, j);
        }
      } else {
        if (a[i] < a[j]) { // swap if next is larger than current
          swap(a, i, j);
        }
      }
    }
  }
}

// Print array elements 
void displayArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%i ", array[i]);
  }
  printf("\n");
}

int main(void) {
  
  int array[SIZE] = { 34, -5, -6, 0, 12, 100 };
  
  printf("The array to be sorted: \n");
  displayArray(array, SIZE);
  
  sort(array, SIZE, true);
  printf("\nThe array sorted ascending:\n");
  displayArray(array, SIZE);
  
  sort(array, SIZE, false);
  printf("\nThe array sorted descending:\n");
  displayArray(array, SIZE);
  
  return 0;
}