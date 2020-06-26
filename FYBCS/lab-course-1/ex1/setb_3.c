#include <stdio.h>

int main()
{
    int amount, quotient, remainder;
    int countOfFiveRupeesNote = 0, countOfTwoRupeesNote = 0, countOfOneRupeeNote = 0;

    printf("Enter the amount to be withdrawn::: ");
    scanf("%d", &amount);

    quotient = amount / 5;
    remainder = amount % 5;
    countOfFiveRupeesNote = quotient;
    amount = remainder;

    if (!remainder)
    {
        printf("Total number of currency notes of each denomination the cashier will have to give\n");
        printf(
            "Rs.5 notes = %d\t Rs.2 notes = %d\t Rs.1 notes = %d\n",
            countOfFiveRupeesNote, countOfTwoRupeesNote, countOfOneRupeeNote);
        return 0;
    }

    quotient = amount / 2;
    remainder = amount % 2;
    countOfTwoRupeesNote = quotient;
    amount = remainder;

    if (!remainder)
    {
        printf("Total number of currency notes of each denomination the cashier will have to give\n");
        printf(
            "Rs.5 notes = %d\t Rs.2 notes = %d\t Rs.1 notes = %d\n",
            countOfFiveRupeesNote, countOfTwoRupeesNote, countOfOneRupeeNote);
        return 0;
    }

    countOfOneRupeeNote = amount;
    printf("Total number of currency notes of each denomination the cashier will have to give\n");
    printf(
        "Rs.5 notes = %d\t Rs.2 notes = %d\t Rs.1 notes = %d\n",
        countOfFiveRupeesNote, countOfTwoRupeesNote, countOfOneRupeeNote);
    return 0;
}