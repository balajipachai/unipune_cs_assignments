#include <stdio.h>
#include "array.h"

int *insertionSort(int *array, int numberOfElements)
{
    int key, j;
    for (int i = 0; i < numberOfElements; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j -= 1;
        }
        array[j + 1] = key;
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
    array = insertionSort(array, numberOfElements);
    printArray(array, numberOfElements);
    free(array);
    return 0;
}