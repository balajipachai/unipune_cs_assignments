#include <stdio.h>
#include "array.h"

int linearSearch(int *array, int numberOfElements, int key)
{
    for (int i = 0; i < numberOfElements; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int *array, numberOfElements, elementPosition, key;
    printf("Enter the number of elements::: ");
    scanf("%d", &numberOfElements);
    array = generateArray(array, numberOfElements);
    acceptArray(array, numberOfElements);
    printf("Entered array is\n");
    printArray(array, numberOfElements);
    printf("Enter the key to be searched::: ");
    scanf("%d", &key);
    elementPosition = linearSearch(array, numberOfElements, key);
    if (elementPosition < 0)
    {
        printf("Entered key %d does not exist in the array\n", key);
    }
    else
    {
        printf("Entered key %d exists in the array at index %d\n", key, elementPosition);
    }

    free(array);
    return 0;
}