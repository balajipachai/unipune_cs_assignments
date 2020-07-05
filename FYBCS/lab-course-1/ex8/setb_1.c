#include <stdio.h>

int recursiveFibonacci(int number)
{
    int nthFiboNumber;
    if (number == 1 || number == 2)
    {
        return 1;
    }
    else
    {
        nthFiboNumber = recursiveFibonacci(number - 2) + recursiveFibonacci(number - 1);
    }
    return nthFiboNumber;
}

int main()
{
    int number, nthFiboNumber;
    printf("Enter the number::: ");
    scanf("%d", &number);
    nthFiboNumber = recursiveFibonacci(number);
    printf("Nth fibonacci number = %d\n", nthFiboNumber);
    return 0;
}