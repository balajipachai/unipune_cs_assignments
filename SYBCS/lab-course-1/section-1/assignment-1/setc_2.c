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
    for (int i = 0; i < numberOfElements; i++)
    {
        baseAddress[i] = rand() % 100;
    }
    return baseAddress;
}

/**
 * Function that sorts an array using Bubble Sort
*/
int *bubbleSort(int *array, int numberOfElements)
{
    int temp = 0;
    for (int pass = 0; pass < numberOfElements; pass++)
    {
        for (int i = pass + 1; i <= numberOfElements; i++)
        {
            if (array[pass] < array[i])
            {
                // swap the elements
                temp = array[pass];
                array[pass] = array[i];
                array[i] = temp;
            }
        }
    }
    return array;
}

int main()
{
    int numberOfElements;
    int *array;

    printf("Enter the number of elements::: ");
    scanf("%d", &numberOfElements);

    array = generateArray(array, numberOfElements);

    printf("Unsorted array::: \n");
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");

    array = bubbleSort(array, numberOfElements);
    printf("Sorted array::: \n");
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);
    return 0;
}