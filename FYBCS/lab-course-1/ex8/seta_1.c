#include <stdio.h>

int recursiveSumOfDigits(int number, int sumOfDigits)
{
    int quotient = 0, remainder = 0;
    if (number > 0)
    {
        quotient = number / 10;
        remainder = number % 10;
        sumOfDigits += remainder;
        number = quotient;
        recursiveSumOfDigits(number, sumOfDigits);
    }
    else
    {
        return sumOfDigits;
    }
}

int main()
{
    int number, sumOfDigits = 0;
    printf("Enter the number::: ");
    scanf("%d", &number);
    sumOfDigits = recursiveSumOfDigits(number, sumOfDigits);
    printf("Sum of digits of %d = %d\n", number, sumOfDigits);
    return 0;
}