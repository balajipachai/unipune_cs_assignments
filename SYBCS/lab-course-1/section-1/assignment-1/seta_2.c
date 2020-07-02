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
