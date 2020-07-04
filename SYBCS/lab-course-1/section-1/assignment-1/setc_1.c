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

int *insertionSort(int *array, int numberOfElements)
{
    int key, j;
    int swapCount = 0;
    for (int i = 0; i < numberOfElements; i++)
    {
        key = array[i];
        j = i - 1;

        // The < condition sorts the array in descending order
        while (j >= 0 && array[j] < key)
        {
            swapCount += 1;
            array[j + 1] = array[j];
            j -= 1;
        }
        // This implies the array is already sorted
        if (!swapCount)
        {
            printf("\n The array is already sorted\n\n");
            break;
        }
        array[j + 1] = key;
    }
    printf("\nNumber of swaps made = %d\n\n", swapCount);
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

    array = insertionSort(array, numberOfElements);
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
