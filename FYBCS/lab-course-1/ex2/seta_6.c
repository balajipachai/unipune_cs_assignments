#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character::: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Entered character %c is a vowel\n", ch);
    }
    else
    {
        printf("Entered character %c is a consonant\n", ch);
    }
    return 0;
}