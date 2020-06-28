#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character::: ");
    scanf("%c", &ch);

    // ASCII from 48 to 57 represents the digits 0 to 9
    if (ch >= 48 && ch <= 57)
    {
        printf("Entered character %c is in the range 0 to 9\n", ch);
    }
    else
    {
        printf("Entered character %c is not in the range 0 to 9\n", ch);
    }
    return 0;
}