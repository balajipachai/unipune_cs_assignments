#include <stdio.h>

//Hint: AM = (a+b)/2 , HM = ab/(a+b)
int main()
{
    float num1, num2;

    printf("Enter first & second number::: ");
    scanf("%f%f", &num1, &num2);

    float sumOfTwoNumber = num1 + num2;
    float AM = (sumOfTwoNumber) / 2;
    float HM = (num1 * num2) / sumOfTwoNumber;
    printf("Arithmetic mean = %f\n", AM);
    printf("Harmonic mean = %f\n", HM);
    return 0;
}