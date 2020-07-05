#include <stdio.h>
#include "array.h"

void countFrequency(int *array, int nubmerOfElements)
{
    int allCount = 0, currentElementCount = 1;
    for (int i = 0; i < nubmerOfElements; i++)
    {
        currentElementCount = 1;
        for (int j = i + 1; j <= nubmerOfElements; j++)
        {
            if (array[i] == array[j])
            {
                currentElementCount += 1;
            }
        }
        allCount += currentElementCount;
        printf("Frequency of %d = %d\n", array[i], currentElementCount);
        if (allCount == nubmerOfElements)
        {
            printf("All elements in the array has been counted\n");
            break;
        }
    }
}

int main()
{
    int numberOfElements;
    int *array;
    printf("Enter the number of elements::: ");
    scanf("%d", &numberOfElements);
    array = generateArray(array, numberOfElements);
    acceptArray(array, numberOfElements);
    printf("Entered array is\n");
    printArray(array, numberOfElements);
    countFrequency(array, numberOfElements);
    free(array);
    return 0;
}