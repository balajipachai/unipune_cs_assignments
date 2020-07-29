#include <stdio.h>
#include "matrix.h"

int main()
{
  int rows, columns;
  int mat[10][10];
  int rowSum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int columnSum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  printf("Enter the number of rows and columns::: ");
  scanf("%d%d", &rows, &columns);
  printf("\nEnter matrix elements::: ");
  acceptMatrix(mat, rows, columns);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      rowSum[i] += mat[i][j];
      columnSum[i] += mat[j][i];
    }
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("%d\t", mat[i][j]);
    }
    printf("%d\t", rowSum[i]);
    printf("\n");
  }

  int sum = 0;
  for (int j = 0; j < columns; j++)
  {
    sum += columnSum[j];
    printf("%d\t", columnSum[j]);
  }
  printf("%d\n", sum);
  return 0;
}