#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter the three numbers::: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 < num3)
    {
        printf("%d is between %d and %d\n", num1, num2, num3);
    }
    else
    {
        printf("Not in between\n");
    }
    return 0;
}