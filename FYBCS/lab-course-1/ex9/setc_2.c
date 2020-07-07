#include <stdio.h>

int main()
{
    char characterArray[100];

    printf("Enter the string::: ");
    scanf("%[^\n]s", characterArray);

    int charCount = 0;

    printf("Character\tCount\n");
    for (int i = 0; i < 100; i++)
    {
        charCount = 0;
        for (int j = i + 1; j < 100; j++)
        {
            if (characterArray[i] == characterArray[j])
            {
                charCount += 1;
            }
        }
        printf("%c\t%d\n", characterArray[i], charCount);
    }

    return 0;
}