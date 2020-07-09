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
    return baseAddress;
}

/**
 * Function to display the contents of an array
*/
void printArray(int *array, int numberOfElements)
{
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

/**
 * Function to accept an array
*/
void acceptArray(int *array, int numberOfElements)
{
    for (int i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &array[i]);
    }
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

/**
 * Function to find an element in the array using Binary Search
 * Compare x with the middle element.
 * If x matches with middle element, we return the mid index.
 * Else If x is greater than the mid element, then x can only lie in right half subarray 
 *     after the mid element.
 * So we recur for right half.
 * Else (x is smaller) recur for the left half.
 * lb = lower bound
 * ub = upper bound
*/
int binarySearch(int *array, int lb, int ub, int thisValueExists)
{
    if (ub >= lb)
    {
        int midIndex = lb + (ub - lb) / 2;

        if (array[midIndex] == thisValueExists)
        {
            return midIndex;
        }

        // if thisValueExists > array[midIndex] then it exists in the right sub array
        if (thisValueExists > array[midIndex])
        {
            return binarySearch(array, midIndex + 1, ub, thisValueExists);
        }

        // else the value exists in the left sub array
        return binarySearch(array, lb, midIndex - 1, thisValueExists);
    }
    return -1;
}

/**
 * Function to remove the duplicate elements from array
*/
int *removeDuplicate(int *array, int numberOfElements)
{
    int key = 0;
    for (int i = 0; i < numberOfElements; i++)
    {
        for (int j = i + 1; j < numberOfElements; j++)
        {
            if (array[i] == array[j])
            {
                array[i] = 0;
            }
        }
    }
    return array;
}