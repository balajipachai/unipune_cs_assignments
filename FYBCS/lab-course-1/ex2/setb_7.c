#include <stdio.h>

int main()
{
    int costPrice, sellingPrice;

    printf("Enter the cost price and selling price::: ");
    scanf("%d%d", &costPrice, &sellingPrice);

    if (costPrice > sellingPrice)
    {
        printf("Loss = %d\n", (costPrice - sellingPrice));
    }
    else if (sellingPrice > costPrice)
    {
        printf("Profit = %d\n", (sellingPrice - costPrice));
    }
    else
    {
        printf("Neither Profit nor Loss\n");
    }

    return 0;
}