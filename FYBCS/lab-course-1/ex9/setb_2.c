#include <stdio.h>
#include "array.h"

/**
 * Function that sorts an array using Bubble Sort
*/
int *bubbleSort(int *array, int numberOfElements)
{
    int temp = 0;
    for (int pass = 0; pass < numberOfElements; pass++)
    {
        for (int i = pass + 1; i < numberOfElements; i++)
        {
            if (array[pass] > array[i])
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
    int numberOfElements, *array;
    printf("Enter the number of elements::: ");
    scanf("%d", &numberOfElements);
    array = generateArray(array, numberOfElements);
    acceptArray(array, numberOfElements);
    printf("Unsorted array\n");
    printArray(array, numberOfElements);
    printf("Sorted array\n");
    array = bubbleSort(array, numberOfElements);
    printArray(array, numberOfElements);
    free(array);
    return 0;
}