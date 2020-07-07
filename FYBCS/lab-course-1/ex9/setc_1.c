#include <stdio.h>
#include "array.h"

int main()
{
    int *array1, *array2, *mergedArray;
    int numberOfElementsInArray1, numberOfElementsInArray2, numberOfElementsInMergedArray;

    printf("Enter the number of elements in array 1::: ");
    scanf("%d", &numberOfElementsInArray1);

    printf("Enter the number of elements in array 2::: ");
    scanf("%d", &numberOfElementsInArray2);

    numberOfElementsInMergedArray = numberOfElementsInArray1 + numberOfElementsInArray2;

    array1 = generateArray(array1, numberOfElementsInArray1);
    array2 = generateArray(array2, numberOfElementsInArray2);
    mergedArray = generateArray(mergedArray, numberOfElementsInMergedArray);

    printf("Enter array1 elements::: ");
    acceptArray(array1, numberOfElementsInArray1);

    printf("Enter array2 elements::: ");
    acceptArray(array2, numberOfElementsInArray2);

    int currentIndex = 0;
    for (int i = 0; i < numberOfElementsInArray1; i++)
    {
        mergedArray[i] = array1[i];
        currentIndex += 1;
    }

    for (int i = 0; i < numberOfElementsInArray2; i++)
    {
        mergedArray[currentIndex] = array2[i];
        currentIndex += 1;
    }

    mergedArray = bubbleSort(mergedArray, numberOfElementsInMergedArray);
    printf("Merged array::: \n");
    printArray(mergedArray, numberOfElementsInMergedArray);

    free(array1);
    free(array2);
    free(mergedArray);

    return 0;
}