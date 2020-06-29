#include <stdio.h>

int main()
{
    int seconds, minutes, hours;

    printf("Enter the seconds, minutes and hours ::: ");
    scanf("%d%d%d", &seconds, &minutes, &hours);

    if ((seconds >= 0 && seconds < 60) && (minutes >= 0 && minutes < 60) && (hours >= 0 && hours < 24))
    {
        printf("VALID TIME\n");
    }
    else
    {
        printf("INVALID TIME\n");
    }

    return 0;
}