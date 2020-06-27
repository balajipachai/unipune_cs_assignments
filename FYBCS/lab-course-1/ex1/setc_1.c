#include <stdio.h>

// Hint: Area of a Rooms is example of cuboids.
// Reference: https://www.math-only-math.com/lateral-surface-area-of-a-cuboid.html
int main()
{
    float roomLength, roomBreadth, roomHeight;
    float doorLength, doorBreadth;
    float windowLength, windowBreadth;
    // Area of the four walls of a room = sum of the four vertical(or lateral) faces = 2(l + b) h
    printf("Enter the length, breadth and height of the room::: ");
    scanf("%f%f%f", &roomLength, &roomBreadth, &roomHeight);

    printf("Enter the length & breadth of the door::: ");
    scanf("%f%f", &doorLength, &doorBreadth);

    printf("Enter the length & breadth of the window::: ");
    scanf("%f%f", &windowLength, &windowBreadth);

    // Total area of the wall to be painted = area of four walls of room - area of door - area of window
    float doorArea = doorLength * doorBreadth;
    float windowArea = windowLength * windowBreadth;
    float roomArea = 2 * (roomLength * roomBreadth) * roomHeight;

    float areaToBePainted = roomArea - windowArea - doorArea;
    float areaToBeWhitewashed = roomLength * roomBreadth;

    printf("Total area to be painted = %f m^2\n", areaToBePainted);
    printf("Area to be whitewashed = %f m^2\n", areaToBeWhitewashed);
    return 0;
}