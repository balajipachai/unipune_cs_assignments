#include <stdio.h>

// Hint: C=5/9(F-32), K = C + 273.15
int main()
{
    float tempInFahrenheit;
    float const INT_CONST = 5.0 / 9.0;
    printf("Enter temperature in fahrenheit::: ");
    scanf("%f", &tempInFahrenheit);

    if (tempInFahrenheit == 32)
    {
        printf("Temperature in Celcius = 0\n");
        printf("Temperature in Kelvin = 273.15\n");
        return 0;
    }

    float const tempInCelcius = INT_CONST * (tempInFahrenheit - 32);
    printf("Temperature in Celcius = %f\n", tempInCelcius);
    printf("Temperature in Kelvin = %f\n", tempInCelcius + 273.15);
    return 0;
}