#include <stdio.h>

int recursiveCalculateNumber(int number)
{
    int an = 0;
    if (number == 1 || number == 2)
    {
        return 3;
    }
    else
    {
        an += 2 * recursiveCalculateNumber(number - 1) + 3 * recursiveCalculateNumber(number - 2);
    }
    return an;
}

int main()
{
    int number, an;
    printf("Enter the number::: ");
    scanf("%d", &number);
    an = recursiveCalculateNumber(number);
    printf("Calculated an for %d = %d\n", number, an);
    return 0;
}