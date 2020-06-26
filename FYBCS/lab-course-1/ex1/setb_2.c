#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter the two numbers::: ");
    scanf("%d%d", &num1, &num2);

    printf("Before interchanging First number = %d, Second number = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After interchanging First number = %d, Second number = %d\n", num1, num2);
    return 0;
}