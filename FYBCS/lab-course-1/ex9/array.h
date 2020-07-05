#include <stdio.h>
#include <stdlib.h>

/**
 * Function to generate an array of random numbers
*/
int *generateArray(int *baseAddress, int numberOfElements)
{
    baseAddress = (int *)calloc(numberOfElements, sizeof(int));
    if (baseAddress == NULL)
    {
        printf("Dynamic memory allocation failed\n");
        exit(0);
    }
    return baseAddress;
}

/**
 * Function to display the contents of an array
*/
void printArray(int *array, int numberOfElements)
{
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

/**
 * Function to accept an array
*/
void acceptArray(int *array, int numberOfElements)
{
    printf("Enter the elements::: ");
    for (int i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &array[i]);
    }
}