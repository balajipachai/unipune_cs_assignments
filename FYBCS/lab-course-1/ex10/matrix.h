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