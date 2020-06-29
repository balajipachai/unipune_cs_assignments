#include <stdio.h>

// Hint: The triangle is valid if the sum of each of the two sides is greater than the third side
int main()
{
    float firstSide, secondSide, thirdSide;

    printf("Enter the first, second and third side of the triangle::: ");
    scanf("%f%f%f", &firstSide, &secondSide, &thirdSide);

    float sumOfFirstAndSecondSide = firstSide + secondSide;
    float sumOfFirstAndThirdSide = firstSide + thirdSide;
    float sumOfSecondAndThirdSide = secondSide + thirdSide;

    if ((sumOfFirstAndSecondSide > thirdSide) && (sumOfFirstAndThirdSide > secondSide) && (sumOfSecondAndThirdSide > firstSide))
    {
        printf("VALID TRIANGLE\n");
    }
    else
    {
        printf("INVALID TRIANGLE\n");
    }

    return 0;
}