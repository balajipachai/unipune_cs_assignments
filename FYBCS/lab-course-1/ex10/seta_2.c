#include <stdio.h>
#include "matrix.h"

int main()
{
  int rows, columns;
  int mat1[10][10];
  int mat2[10][10];
  int matricesSum[10][10];
  int productMatrices[10][10];

  printf("Enter the number of rows and columns::: ");
  scanf("%d%d", &rows, &columns);
  printf("\nEnter first matrix elements:::\n");
  acceptMatrix(mat1, rows, columns);

  printf("\nEnter second matrix elements:::\n");
  acceptMatrix(mat2, rows, columns);
  sumOfMatrices(mat1, mat2, matricesSum, rows, columns);

  printf("\nSum of Mat1 & Mat2:::\n");
  printMatrix(matricesSum, rows, columns);

  productOfMatrices(mat1, mat2, productMatrices, rows, columns);

  printf("\nProduct of Mat1 & Mat2:::\n");
  printMatrix(productMatrices, rows, columns);

  return 0;
}