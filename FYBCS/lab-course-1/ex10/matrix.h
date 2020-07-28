#include <stdio.h>
#include <stdlib.h>

// TODO Change fixed array sizes to dynamic arrays
/**
 * Function to accept matrix
*/
void acceptMatrix(int array[10][10], int rows, int columns)
{
  int count = 0;
  {
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        scanf("%d", &array[i][j]);
      }
    }
  }
}

/**
 * Function to print the matrix
*/
void printMatrix(int array[10][10], int rows, int columns)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("%d\t", array[i][j]);
    }
    printf("\n");
  }
}

/**
* Function that calculates the transpose of a matrix 
*/
void matrixTranspose(int array[10][10], int transpose[10][10], int rows, int columns)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      transpose[i][j] = array[j][i];
    }
  }
}

/**
 * Function to add 2 matrices
*/
void sumOfMatrices(int mat1[10][10], int mat2[10][10], int sum[10][10], int rows, int columns)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      sum[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}

/**
 * Function to multiply 2 matrices
*/
void productOfMatrices(int mat1[10][10], int mat2[10][10], int product[10][10], int rows, int columns)
{
  int sum;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      product[i][j] = 0;
      for (int k = 0; k < columns; k++)
      {
        product[i][j] += (mat1[i][k] * mat2[k][j]);
      }
    }
    printf("Sum = %d\n", sum);
  }
}