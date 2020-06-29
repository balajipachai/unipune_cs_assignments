#include <stdio.h>

// Hint leap year is divisible by 4 and not by 100 or divisible by 400
int main()
{
    // If the last 2 digits of a whole number are divisible by 4 then the entire number is divisible by 4
    int year;

    printf("Enter the year::: ");
    scanf("%d", &year);

    int lastTwoDigits = year % 100;

    if (!(lastTwoDigits % 4))
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is NOT a leap year\n", year);
    }
    return 0;
}
