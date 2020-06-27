#include <stdio.h>

int main()
{
    float const RENT_PERCENT = 0.1;               // 10 / 100
    float const DEARNESS_ALLOWANCE_PERCENT = 0.3; // 30 / 100
    float const PROFESSIONAL_TAX_PERCENT = 0.05;  // 5 / 100

    int employeeId;
    float salary;

    printf("Enter the employee id and salary::: ");
    scanf("%d%f", &employeeId, &salary);

    float totalDeductions = (RENT_PERCENT * salary) + (DEARNESS_ALLOWANCE_PERCENT * salary) + (PROFESSIONAL_TAX_PERCENT * salary);
    float takeHomeSalary = salary - totalDeductions;
    printf("Take home salary of the employee %d = %f\n", employeeId, takeHomeSalary);
    return 0;
}