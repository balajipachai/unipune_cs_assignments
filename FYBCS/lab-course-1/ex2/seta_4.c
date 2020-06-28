#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int number, unitPlaceDigit;
    bool isDivisibleByFive = false, isDivisibleBySeven = false;

    printf("Enter the number::: ");
    scanf("%d", &number);

    // A number is divisible by 5 if the digit at unit place is either 0 or 5
    unitPlaceDigit = number % 10;
    if (unitPlaceDigit == 0 || unitPlaceDigit == 5)
    {
        isDivisibleByFive = true;
    }

    // We need to double the last digit of the number and then subtract it from the remaining number.
    // If the result is divisible by 7, then the original number will also be divisible by 7.
    int quotient, remainder, operation;

    if (number >= 10 || number <= 99)
    {
        operation = number % 7;
        isDivisibleBySeven = true;
    }
    else
    {
        while (number > 0)
        {
            quotient = number / 10;
            remainder = number % 10;
            operation = abs(quotient - (remainder * remainder));
            if (operation == 0 || operation == 7)
            {
                isDivisibleBySeven = true;
                break;
            }
            number = operation;
        }
    }

    if (isDivisibleByFive && isDivisibleBySeven)
    {
        printf("Entered number %d is divisible by 5 and 7\n", number);
    }
    else
    {
        printf("Entered number %d is not divisible by 5 and 7\n", number);
    }
    return 0;
}