#include <stdio.h>

// If the number of days by which the member is late is less than 5 days then fine is Rs.10
// If the number of days by which the member is late is in between 6 to 10 days then fine is Rs.18
// If the number of days by which the member is late is greater than 10 days then fine is Rs.25
int main()
{
    int daysByWhichMemberIsLate, numberOfBooks;

    printf("Enter the number of days by which the member is late::: ");
    scanf("%d", &daysByWhichMemberIsLate);

    printf("Enter the number of books returned late::: ");
    scanf("%d", &numberOfBooks);

    int fine;
    if (daysByWhichMemberIsLate <= 5)
    {
        fine = numberOfBooks * 10;
        printf("Fine charged for %d books = %d\n", numberOfBooks, fine);
    }
    else if (daysByWhichMemberIsLate > 5 && daysByWhichMemberIsLate <= 10)
    {
        fine = numberOfBooks * 18;
        printf("Fine charged for %d books = %d\n", numberOfBooks, fine);
    }
    else if (daysByWhichMemberIsLate > 10)
    {
        fine = numberOfBooks * 25;
        printf("Fine charged for %d books = %d\n", numberOfBooks, fine);
    }
    return 0;
}