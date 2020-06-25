#include <stdio.h>

// Hint: v = u + at, s = u + at^2
int main()
{
    float initialVelocity, acceleration, time;
    printf("Enter the initial velocity, accleration and time::: ");
    scanf("%f%f%f", &initialVelocity, &acceleration, &time);

    printf("Final velocity v = %f\n", initialVelocity + (acceleration * time));
    printf("Distance s = %f\n", initialVelocity + (acceleration * (time * time)));
    return 0;
}