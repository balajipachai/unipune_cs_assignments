#include <stdio.h>

int recursiveGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        recursiveGCD(b, (a % b));
    }
}

int main()
{
    int a, b, gcd;
    printf("Enter the two numbers::: ");
    scanf("%d%d", &a, &b);
    gcd = recursiveGCD(a, b);
    printf("The GCD of %d and %d = %d\n", a, b, gcd);
    return 0;
}