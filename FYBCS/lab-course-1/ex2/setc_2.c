#include <stdio.h>

// If total sales is > 1000 then 20% discount
// If total sales is > 500 & < 1000 then 15% discount
// If total sales is > 200 & < 500 then 8% discount
int main()
{
    int quantityItemOne, quantityItemTwo, quantityItemThree;
    float rateItemOne, rateItemTwo, rateItemThree;

    printf("Enter the rate for item1, item2 and item3::: ");
    scanf("%f%f%f", &rateItemOne, &rateItemTwo, &rateItemThree);

    printf("Enter the quantity for item1, item2 and item3::: ");
    scanf("%d%d%d", &quantityItemOne, &quantityItemTwo, &quantityItemThree);

    float totalSales = (quantityItemOne * rateItemOne) + (quantityItemTwo * rateItemTwo) + (quantityItemThree * rateItemThree);
    float discount, amountPayable;
    printf("T.Sales\tDiscount\tA.Payable\n");
    if (totalSales > 1000)
    {
        discount = 0.2 * totalSales;
        amountPayable = totalSales - discount;
        printf("%.2f\t%.2f\t\t%.2f\n", totalSales, discount, amountPayable);
    }
    else if (totalSales > 500 && totalSales < 1000)
    {
        discount = 0.15 * totalSales;
        amountPayable = totalSales - discount;
        printf("%.2f\t%.2f\t\t%.2f\n", totalSales, discount, amountPayable);
    }
    else if (totalSales > 200 && totalSales < 500)
    {
        discount = 0.08 * totalSales;
        amountPayable = totalSales - discount;
        printf("%.2f\t%.2f\t\t%.2f\n", totalSales, discount, amountPayable);
    }
    else
    {
        printf("%.2f\t---\t%.2f\n", totalSales, totalSales);
    }

    return 0;
}