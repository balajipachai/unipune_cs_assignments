#include <stdio.h>
#include <math.h>

// Hint: Quadratic Equation = ax^2 + bx + c = 0
// x = (-b + sqrt(b^2 -4ac)) / 2a
// D = b^2 - 4ac
// If D > 0, Two real solutions
// If D = 0, One real solution
// If D < 0, Complex solutions
int main()
{
    int a, b, c;

    printf("Enter the values of a, b and c::: ");
    scanf("%d%d%d", &a, &b, &c);

    float d = sqrt(pow(b, 2) - (4 * a * c));

    float firstRoot, secondRoot;

    firstRoot = (-b + d) / (2 * a);
    secondRoot = (-b - d) / (2 * a);

    printf("Roots of the equation are\n");
    printf("r1 = %f and r2 = %f\n", firstRoot, secondRoot);
    return 0;
}