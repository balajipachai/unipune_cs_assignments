#include <stdio.h>

void recursivePrint(int number)
{
    if (number < 10)
    {
        printf("%d\t\n", number);
    }
    else
    {
        int lastDigit = number % 10;
        printf("%d\t", lastDigit);
        recursivePrint(number / 10);
    }
}
int main()
{
    int number;
    printf("Enter the number to be printed in the recursive order::: ");
    scanf("%d", &number);
    recursivePrint(number);
    return 0;
}