#include <stdio.h>
#include "array.h"

int frequencyOf(int *array, int numberOfElements, int countOccurencesOf)
{
    int count = 0;
    for (int i = 0; i < numberOfElements; i++)
    {
        if (array[i] == countOccurencesOf)
        {
            count += 1;
        }
    }
    return count;
}

int main()
{
    int *array, numberOfElements, countOccurencesOf, count;
    printf("Enter the number of elements::: ");
    scanf("%d", &numberOfElements);
    array = generateArray(array, numberOfElements);
    acceptArray(array, numberOfElements);
    printf("Entered array is\n");
    printArray(array, numberOfElements);
    printf("Enter the number to count its occurences of in the array::: ");
    scanf("%d", &countOccurencesOf);
    count = frequencyOf(array, numberOfElements, countOccurencesOf);
    printf("Count of %d in the array is %d\n", countOccurencesOf, count);
    free(array);
    return 0;
}