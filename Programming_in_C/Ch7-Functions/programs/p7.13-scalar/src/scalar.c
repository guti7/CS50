/*
* Programming in C, 4th, Kochan
* Program 7.13
* Created by Guti on 04/05/2018.
*
* Multiplies a two-dimensional integer array by a scalar integer value
*/
#include <stdio.h>

#define ROWS 3
#define COLS 5

// Function Prototypes
void scalarMultiply(int nRows, int nCols, int matrix[][nCols], int scalar);
void displayMatrix(int nRows, int nCols, int matrix[][nCols]);

int main(void) {
  
  int scalar = 2;
  
  int sampleMatrix[ROWS][COLS] = {
                            {  7, 16, 55, 13, 12 },
                            { 12, 10, 52,  0,  7 },
                            { -2,  1,  2,  4,  9 }
                          };
  
  printf("Original matrix:\n");
  displayMatrix(ROWS, COLS, sampleMatrix);
  
  scalarMultiply(ROWS, COLS, sampleMatrix, scalar);
  
  printf("\nMultiplied by %i:\n", scalar);
  displayMatrix(ROWS, COLS, sampleMatrix);

  scalar = -1;
  scalarMultiply(ROWS, COLS, sampleMatrix, -1);
  
  printf("\nMultiplied by %i:\n", scalar);
  displayMatrix(ROWS, COLS, sampleMatrix);
  
  return 0;
}

// Multiply a matrix of any size by scalar
void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar) {
  int r, c;
  
  for (r = 0; r < nRows; r++) {
    for (c = 0; c < nCols; c++) {
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
