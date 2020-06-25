#include <stdio.h>

// Hint: surface area = 2πr^2 + 2πrh, volume = πr^2h
int main()
{
    float const PI = 3.14;
    float radius, height;
    float surfaceArea, volume;
    printf("Enter the radius of the cylinder::: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder::: ");
    scanf("%f", &height);
    surfaceArea = 2 * PI * radius * radius * height;
    volume = PI * radius * radius * height;

    printf("Surface area of cylinder = %f", surfaceArea);
    printf("\nVolume of cyliner = %f\n", volume);
    return 0;
}