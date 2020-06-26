#include <stdio.h>

//Hint : surface area=2(lb+lh+bh ), volume = lbh
int main()
{
    float length, breadth, height;

    printf("Enter length, breadth & height of a cuboid::: ");
    scanf("%f%f%f", &length, &breadth, &height);

    float surfaceArea = 2 * ((length * breadth) + (length * height) + (breadth * height));
    float volume = length * breadth * height;
    printf("Surface area of a cuboid = %f\n", surfaceArea);
    printf("Volume of a cuboid = %f\n", volume);
    return 0;
}