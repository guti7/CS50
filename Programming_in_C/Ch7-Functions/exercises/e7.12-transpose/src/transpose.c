/*
* Programming in C, 4th, Kochan
* Exercise 7.12
* Created by Guti on 04/11/2018.
*
* Program finds the transpose form of a matrix
*/

#include <stdio.h>

#define ROWS 5
#define COLS 4

void transposeMatrix(int nRows, int nCols, int matrix[][nCols], int transposed[][nRows]);
void displayMatrix(int nRows, int nCols, int matrix[][nCols]);

// int sampleMatrix[ROWS][COLS];

int main(void) {
  int sampleMatrix[ROWS][COLS] = {
                            {  7, 16, 55, 13 },
                            { 12, 10, 52,  0 },
                            { -2,  1,  2,  4 },
                            { -7,  9, 43,  4 },
                            {  5,  1, -1,  7 },
                          };
  // int sampleMatrix[ROWS][COLS] = {
  //                           {  7, 16, 55, 13 },
  //                           {  5,  1, -1,  7 },
  //                         };
                          
  
  printf("Original Matrix:\n");
  displayMatrix(ROWS, COLS, sampleMatrix);
  
  int transposedMatrix[COLS][ROWS];
  transposeMatrix(ROWS, COLS, sampleMatrix, transposedMatrix);
  printf("Transpose Matrix:\n");
  displayMatrix(COLS, ROWS, transposedMatrix);
  
}

// Takes in the matrix to transpose
void transposeMatrix(int nRows, int nCols, int matrix[][nCols], int transpose[][nRows]) {
  int r, c;
  for (r = 0; r < nRows; r++) {
    for (c = 0; c < nCols; c++) {
      transpose[c][r] = matrix[r][c];
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