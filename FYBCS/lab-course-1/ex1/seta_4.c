#include <stdio.h>

//Hint: perimeter = 2 π (a+b) , area = π (a^2 -b^2 )
int main()
{
    float const PI = 3.14;
    float innerRadius, outerRadius;

    printf("Enter the inner & outer radius of the ring::: ");
    scanf("%f%f", &innerRadius, &outerRadius);
    printf("Perimeter of the ring = %f\n", (2 * PI * (innerRadius + outerRadius)));
    printf("Area of the ring = %f\n", PI * ((innerRadius * innerRadius) - (outerRadius * outerRadius)));
    return 0;
}