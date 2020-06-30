#include <stdio.h>

// Let 3 subjects be A, B, C
// Total marks = 300
// Marks Secured = A + B + C
// Average = Marks Secured / 3
// Percentage = Marks Secured / Total Marks * 100
// Class I = above 75%
// Class II = above 60% & less than 75%
// Pass Class = above 35% & less than 60$
// Faile Class = below 35%
int main()
{
    int A, B, C;
    int const TOTAL_MARKS = 300;
    printf("Enter the marks for the subjects A, B & C::: ");
    scanf("%d%d%d", &A, &B, &C);

    float marksSecured = A + B + C;
    printf("Secured marks: %f\n", marksSecured);

    float average = marksSecured / 3;
    printf("Average : %f\n", average);

    float percentage = (marksSecured / TOTAL_MARKS) * 100;
    printf("Percentage : %f\n\n", percentage);

    printf("Total \tSecured\tAverage\tPercent\tClass\n");
    if (percentage > 75.0)
    {
        printf("%d\t%.2f\t%.2f\t%.2f\tI\n", TOTAL_MARKS, marksSecured, average, percentage);
    }
    else if (percentage > 60.0 && percentage < 75.0)
    {
        printf("%d\t%.2f\t%.2f\t%.2f\tII\n", TOTAL_MARKS, marksSecured, average, percentage);
    }
    else if (percentage > 35.0 && percentage < 60.0)
    {
        printf("%d\t%.2f\t%.2f\t%.2f\tPASS\n", TOTAL_MARKS, marksSecured, average, percentage);
    }
    else
    {
        printf("%d\t%.2f\t%.2f\t%.2f\tFAIL\n", TOTAL_MARKS, marksSecured, average, percentage);
    }

    return 0;
}