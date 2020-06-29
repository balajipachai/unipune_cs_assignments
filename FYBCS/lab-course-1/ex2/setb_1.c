#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character::: ");
    scanf("%c", &ch);

    // ASCII value for digits 0..9 are from 48 - 57
    if (ch >= 48 && ch <= 57)
    {
        printf("%c is a digit\n", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c is a lowercase character\n", ch);
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("%c is an UPPERCASE character\n", ch);
    }

    return 0;
}