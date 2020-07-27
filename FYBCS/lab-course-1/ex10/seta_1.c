#include <stdio.h>
#include "matrix.h"

int main()
{
  int rows, columns;
  int mat[10][10];
  int transposeMat[10][10];
  printf("Enter the number of rows and columns::: ");
  scanf("%d%d", &rows, &columns);
  printf("\nEnter matrix elements::: ");
  acceptMatrix(mat, rows, columns);
  printf("Entered matrix is::: \n");
  printMatrix(mat, rows, columns);
  printf("Transpose of entred matrix is::: \n");
  matrixTranspose(mat, transposeMat, rows, columns);
  printMatrix(transposeMat, rows, columns);
  return 0;
}