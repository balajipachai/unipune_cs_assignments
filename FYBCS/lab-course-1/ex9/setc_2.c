#include <stdio.h>
#include <string.h>

int main()
{
    char characterArray[100];

    int charInt, charCount[26] = {0}, key = 0;
    int strLength;

    printf("Enter the string::: ");
    fgets(characterArray, sizeof(characterArray), stdin);

    strLength = strlen(characterArray);
    printf("Character\tCount\n");
    for (int i = 0; i < strLength; i++)
    {
        /* If the current character is lowercase alphabet */
        if (characterArray[i] >= 'a' && characterArray[i] <= 'z')
        {
            charCount[characterArray[i] - 97]++;
        }
        else if (characterArray[i] >= 'A' && characterArray[i] <= 'Z')
        {
            charCount[characterArray[i] - 65]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (charCount[i] != 0)
        {
            printf("'%c' \t \t%d\n", (i + 97), charCount[i]);
        }
    }
    return 0;
}