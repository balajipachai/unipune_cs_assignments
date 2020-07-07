#include <stdio.h>
#include "array.h"

int main()
{
    int numberOfElements, *array;

    printf("Enter the number of elements::: ");
    scanf("%d", &numberOfElements);

    array = generateArray(array, numberOfElements);
    acceptArray(array, numberOfElements);

    printf("Array with duplicate elements\n");
    printArray(array, numberOfElements);

    // Remove duplicate elements from the array
    array = removeDuplicate(array, numberOfElements);

    // Sort the array after removing the duplicates
    array = bubbleSort(array, numberOfElements);

    printf("Array after removing duplicate elements\n");
    for (int i = 0; i < numberOfElements; i++)
    {
        if (array[i] != 0)
        {
            printf("%d\t", array[i]);
        }
    }
    printf("\n");
    free(array);
    return 0;
}