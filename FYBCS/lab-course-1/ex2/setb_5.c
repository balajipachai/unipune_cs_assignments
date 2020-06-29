#include <stdio.h>

// I Quadrant: X and Y both are +ve
// II Quadrant: X +ve and Y -ve
// III Quadrant: X and Y both are -ve
// IV Quadrant: X -ve and Y +ve
int main()
{
    float x, y;

    printf("Enter the X and Y coordinate of a point::: ");
    scanf("%f%f", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("P(%f, %f) lies in I Quadrant\n", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("P(%f, %f) lies in II Quadrant\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("P(%f, %f) lies in III Quadrant\n", x, y);
    }
    else
    {
        printf("P(%f, %f) lies in IV Quadrant\n", x, y);
    }

    return 0;
}