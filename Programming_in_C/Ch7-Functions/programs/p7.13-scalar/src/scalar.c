/*
* Programming in C, 4th, Kochan
* Program 7.13
* Created by Guti on 04/05/2018.
*
* Multiplies a two-dimensional integer array by a scalar integer value
*/
#include <stdio.h>

int main(void) {
  void scalarMultiply(int matrix[3][5], int scalar);
  void displayMatrix(int matrix[3][5]);
  
  int scalar = 2;
  
  int sampleMatrix[3][5] = {
                            {  7, 16, 55, 13, 12 },
                            { 12, 10, 52,  0,  7 },
                            { -2,  1,  2,  4,  9 }
                          };
  
  printf("Original matrix:\n");
  displayMatrix(sampleMatrix);
  
  // scalarMultiply(sampleMatrix, scalar);
  // 
  // printf("\nMultiplied by %i:\n", scalar);
  // displayMatrix(sampleMatrix);
  // 
  // scalar = -1;
  // scalarMultiply(sampleMatrix, -1);
  // 
  // printf("\nMultiplied by %i:\n", scalar);
  // displayMatrix(sampleMatrix);
  
  return 0;
}



// Display matrix
void displayMatrix(int matrix[3][5]) {
  int r, c;
  
  for (r = 0; r < 3; r++) {
    printf("    ");
    for (c = 0; c < 5; c++) {
      printf("%3i ", matrix[r][c]);
    }
    printf("\n");
  }
}
