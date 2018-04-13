/*
* Programming in C, 4th, Kochan
* Exercise 7.12
* Created by Guti on 04/11/2018.
*
* Program finds the transpose form of a matrix
*/

#include <stdio.h>

#define ROWS 4
#define COLS 4

void transposeMatrix(int nRows, int nCols, int matrix[][nCols], int transposed[][nRows]);

void transposeSquareMatrixInPlace(int nRows, int nCols, int matrix[][nCols]);
void swap(int matrix[][COLS], int i, int j);
void displayMatrix(int nRows, int nCols, int matrix[][nCols]);

int main(void) {
  int sampleMatrix[ROWS][COLS] = {
                            {  7, 16, 55, 13 },
                            { 12, 10, 52,  0 },
                            { -2,  1,  2,  4 },
                            { -7,  9, 43,  4 },
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
  
  printf("\nTranspose Square Matrix in-place:\n");
  transposeSquareMatrixInPlace(ROWS, COLS, sampleMatrix);
  displayMatrix(COLS, ROWS, sampleMatrix);
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

// For square matrix
void transposeSquareMatrixInPlace(int rows, int cols, int matrix[][cols]) {
  int row, col;
  
  for (row = 0; row < rows; row++) {
    for (col = row + 1; col < cols; col++) {
      // Swap items
      swap(matrix, row, col);
    }
  }
}

// Swap Elements for transpose position
void swap(int matrix[][COLS], int i, int j) {
  int temp = matrix[i][j];
  matrix[i][j] = matrix[j][i];
  matrix[j][i] = temp;
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