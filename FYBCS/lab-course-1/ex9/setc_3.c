#include <stdio.h>
#include "array.h"

int main()
{
    int numberOfElements, *array;
    int exists;
    int value;

    printf("Enter the number of elements::: ");
    scanf("%d", &numberOfElements);

    array = generateArray(array, numberOfElements);
    printf("Enter the array elements::: ");
    acceptArray(array, numberOfElements);

    printf("Enter the value to be found in the array::: ");
    scanf("%d", &value);

    printf("Unsorted array::: \n");
    printArray(array, numberOfElements);

    printf("Sorted array::: \n");
    array = bubbleSort(array, numberOfElements);
    printArray(array, numberOfElements);

    exists = binarySearch(array, 0, numberOfElements - 1, value);

    if (exists >= 0)
    {
        printf("%d exists in the array at index %d\n", value, exists);
    }
    else
    {
        printf("%d does not exists in the array\n", value);
    }

    return 0;
}