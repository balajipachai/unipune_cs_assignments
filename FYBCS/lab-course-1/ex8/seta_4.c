#include <stdio.h>

int recursivePower(int x, int y)
{
    int answer = 1;
    if (y != 0)
    {
        return (x * recursivePower(x, y - 1));
    }
    else
    {
        return 1;
    }
}

int main()
{
    int x, y, answer;
    printf("Enter the value of x & y::: ");
    scanf("%d%d", &x, &y);
    answer = recursivePower(x, y);
    printf("Calculated %d^%d = %d\n", x, y, answer);
    return 0;
}