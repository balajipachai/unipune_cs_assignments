#include <stdio.h>
#include <math.h>

// Compile the program with this command gcc setb_1.c -lm
int main()
{
    int x1, y1, x2, y2;

    printf("Enter x,y coordinate of first point::: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter x,y coordinate of second point::: ");
    scanf("%d%d", &x2, &y2);

    float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("Distance between the points = %f\n", distance);
    return 0;
}