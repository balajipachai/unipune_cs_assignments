#include <stdio.h>

// 20% = 20 / 100 => 0.2 & 30% = 30 / 100 => 0.3
int main()
{
    int annualBasicSalary;

    printf("Enter the annual basic salary::: ");
    scanf("%d", &annualBasicSalary);

    if (annualBasicSalary < 150000)
    {
        printf("The tax amount is 0\n");
    }
    else if (annualBasicSalary >= 150000 && annualBasicSalary < 300000)
    {
        printf("Tax amount = %f \n", (0.2 * annualBasicSalary));
    }
    else
    {
        printf("Tax amount = %f \n", (0.3 * annualBasicSalary));
    }

    return 0;
}