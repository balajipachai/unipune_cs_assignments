#include <stdio.h>
#include "array.h"

int isPrime(int element)
{
    if (element == 1)
    {
        return 0;
    }

    for (int i = 2; i <= (element / 2); i++)
    {
        if (!(element % i))
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int numberOfElements, element;
    int *primeArray;
    int ifElementIsPrime, primeIndex = 0;
    printf("Enter the number of elements::: ");
    scanf("%d", &numberOfElements);
    primeArray = generateArray(primeArray, numberOfElements);

    // Here we are not using the acceptArray() of array.h
    // As and when the user enters the number we will check
    // if the number is a prime, if yes, we will push this into the primeArray
    printf("Enter the elements::: ");
    for (int i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &element);
        ifElementIsPrime = isPrime(element);
        if (ifElementIsPrime)
        {
            primeArray[primeIndex] = element;
            primeIndex += 1;
        }
    }
    printf("Array containing prime numbers is:\n");
    printArray(primeArray, primeIndex);
    free(primeArray);
    return 0;
}