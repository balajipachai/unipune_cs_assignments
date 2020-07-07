#include <stdio.h>
#include <stdbool.h>
#include "array.h"

// Function to determine the union of sets
int *unionOfSets(
    int *setA,
    int *setB,
    int numberOfElementsSetA,
    int numberOfElementsSetB,
    int *AUnionB)
{
    int currentIndex = 0;
    for (int i = 0; i < numberOfElementsSetA; i++)
    {
        AUnionB[i] = setA[i];
        currentIndex += 1;
    }

    bool hasBreakExecuted = false;
    for (int i = 0; i < numberOfElementsSetB; i++)
    {
        hasBreakExecuted = false;
        for (int j = 0; j < numberOfElementsSetA; j++)
        {
            if (setB[i] == AUnionB[j])
            {
                hasBreakExecuted = true;
            }
        }
        if (!hasBreakExecuted)
        {
            AUnionB[currentIndex] = setB[i];
            currentIndex += 1;
        }
    }
    return AUnionB;
}

// Function to determine the intersection of sets
int *intersectionOfSets(
    int *setA,
    int *setB,
    int numberOfElementsSetA,
    int numberOfElementsSetB,
    int *AIntersectionB)
{
    bool isElementInserted = false;
    int currentIndex = 0;
    for (int i = 0; i < numberOfElementsSetA; i++)
    {
        isElementInserted = false;
        for (int j = 0; j < numberOfElementsSetB; j++)
        {
            if ((setA[i] == setB[j]) && !isElementInserted)
            {
                AIntersectionB[currentIndex] = setB[j];
                isElementInserted = true;
                currentIndex += 1;
            }
        }
    }
    return AIntersectionB;
}

int main()
{
    int *setA, *setB, *AUnionB, *AIntersectionB;
    int numberOfElementsSetA, numberOfElementsSetB;
    int numberOfElementsInUnion, numberOfElementsInIntersection;

    printf("Enter the number of elements of Set A::: ");
    scanf("%d", &numberOfElementsSetA);
    printf("Enter the number of elements of Set B::: ");
    scanf("%d", &numberOfElementsSetB);

    numberOfElementsInUnion = numberOfElementsSetA + numberOfElementsSetB;
    numberOfElementsInIntersection = numberOfElementsSetA > numberOfElementsSetB ? numberOfElementsSetB : numberOfElementsSetA;

    setA = generateArray(setA, numberOfElementsSetA);
    setB = generateArray(setB, numberOfElementsSetB);
    AUnionB = generateArray(AUnionB, numberOfElementsInUnion);
    AIntersectionB = generateArray(AIntersectionB, numberOfElementsInIntersection);

    printf("Enter Set A elements::: \n");
    acceptArray(setA, numberOfElementsSetA);
    printf("Enter Set B elements::: \n");
    acceptArray(setB, numberOfElementsSetB);

    printf("Set A\n");
    printArray(setA, numberOfElementsSetA);

    printf("Set B\n");
    printArray(setB, numberOfElementsSetB);

    AUnionB = unionOfSets(setA, setB, numberOfElementsSetA, numberOfElementsSetB, AUnionB);

    printf("Union of Set A & Set B\n");
    for (int i = 0; i < numberOfElementsInUnion; i++)
    {
        if (AUnionB[i] != 0)
        {
            printf("%d\t", AUnionB[i]);
        }
    }
    printf("\n");

    AIntersectionB = intersectionOfSets(setA, setB, numberOfElementsSetA, numberOfElementsSetB, AIntersectionB);

    printf("Intersection of Set A & Set B\n");
    for (int i = 0; i < numberOfElementsInIntersection; i++)
    {
        if (AIntersectionB[i] != 0)
        {
            printf("%d\t", AIntersectionB[i]);
        }
    }
    printf("\n");

    free(setA);
    free(setB);
    free(AUnionB);
    free(AIntersectionB);
    return 0;
}