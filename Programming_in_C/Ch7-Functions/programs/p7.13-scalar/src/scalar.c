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
  void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
  
  int scalar = 2;
  
  int sampleMatrix[3][5] = {
                            {  7, 16, 55, 13, 12 },
                            { 12, 10, 52,  0,  7 },
                            { -2,  1,  2,  4,  9 }
                          };
  
  printf("Original matrix:\n");
  displayMatrix(3, 5, sampleMatrix);
  
  scalarMultiply(sampleMatrix, scalar);
  
  printf("\nMultiplied by %i:\n", scalar);
  displayMatrix(3, 5, sampleMatrix);

  scalar = -1;
  scalarMultiply(sampleMatrix, -1);
  
  printf("\nMultiplied by %i:\n", scalar);
  displayMatrix(3, 5, sampleMatrix);
  
  return 0;
}

// Multiply a 3 x 5 matrix by scalar
void scalarMultiply(int matrix[3][5], int scalar) {
  int r, c;
  
  for (r = 0; r < 3; r++) {
    for (c = 0; c < 5; c++) {
      matrix[r][c] *= scalar;
    }
  }
}

// Display matrix of any size
void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]) {
  int r, c;
  
  for (r = 0; r < nRows; r++) {
    printf("    ");
    for (c = 0; c < nCols; c++) {
      printf("%4i ", matrix[r][c]);
    }
    printf("\n");
  }
}
