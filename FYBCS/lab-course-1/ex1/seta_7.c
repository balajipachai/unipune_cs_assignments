#include <stdio.h>

int main()
{
    char ch;
    /*
    Here we get the previous and next characters by using their ASCII values
    */

    printf("Enter a character::: ");
    scanf("%c", &ch);

    printf("Previous character = %c\n", ch - 1);
    printf("Next character = %c\n", ch + 1);
    return 0;
}