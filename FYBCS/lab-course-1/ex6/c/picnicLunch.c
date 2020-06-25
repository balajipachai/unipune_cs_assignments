/*
 Write a program to calculate the total price for a picnic lunch that a user is purchasing for her
group of friends. She is first asked to enter a budget for the lunch. She has the option of buying
apples, cake, and bread. Set the price per kg of apples, price per cake, and price per loaf of bread
in constant variables. Use a menu to ask the user what item and how much of each item she
would like to purchase. Keep calculating the total of the items purchased. After purchase of an
item, display the remaining amount. Exit the menu if the total has exceeded the budget. In
addition, provide an option that allows the user to exit the purchasing loop at any time. 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
int main(){
    float budget = 0.0, amountSpend = 0.0, quantity, tempBudget = 0.0, totalAmountSpend = 0.0;
    const float applePerKg = 150, pricePerCake = 300, pricePerLoafBread = 40;
    int choice;
    printf("\nEnter your budget for the picnic lunch:\n");
    scanf("%f", &budget);
    tempBudget = budget;

    
    do
    {
        printf("\n1.Buy Apples (Rs.150/Kg)\n2.Buy Cakes (Rs.300/Unit)\n3.Buy Bread (Rs.40/Loaf)\n4.Exit\n");
        printf("\nEnter your choice\t");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printf("\nHow many kgs of Appples?\t");
                scanf("%f", &quantity);
                amountSpend += (applePerKg * quantity);
                totalAmountSpend += amountSpend;
                if(amountSpend >= tempBudget){
                    printf("\nBudget exceeded\n");
                    printf("\nTotal amount spent on picnic lunch = %f\nRemaining amount = 0.0\n", budget);
                    return 0;
                }else{
                     budget -= amountSpend;
                    printf("\nRemaining amount = %f\n", budget);
                }
                amountSpend = 0;
                break;
        
            case 2:
                printf("\nHow many Cakes?\t");
                scanf("%f", &quantity);
                amountSpend += (pricePerCake * quantity);
                totalAmountSpend += amountSpend;
                if(amountSpend >= tempBudget){
                    printf("\nBudget exceeded\n");
                    printf("\nTotal amount spent on picnic lunch = %f\nRemaining amount = 0.0\n", budget);
                    return 0;
                }else{
                     budget -= amountSpend;
                    printf("\nRemaining amount = %f\n", budget);
                }
                amountSpend = 0;
                break;

            case 3:
                printf("\nHow many Loaves of Bread?\t");
                scanf("%f", &quantity);
                amountSpend += (pricePerLoafBread * quantity);
                totalAmountSpend += amountSpend;
                if(amountSpend >= tempBudget){
                    printf("\nBudget exceeded\n");
                    printf("\nTotal amount spent on picnic lunch = %f\nRemaining amount = 0.0\n", budget);
                    return 0;
                }else{
                     budget -= amountSpend;
                    printf("\nRemaining amount = %f\n", budget);
                }
                amountSpend = 0;
                break;
            case 4:
                printf("\nExitting...\n");
                printf("\nTotal amount spent on picnic lunch = %f\nRemaining amount = %f\n", totalAmountSpend, budget);
                return 0;
            default:
                printf("\nEnter a valid choice\n");
                break;
        }
    } while (choice != 4);
    printf("\nTotal amount spent on picnic lunch = %f\nRemaining amount = %f\n", totalAmountSpend, budget);
    return 0;

}
/*
Output
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/c$ gcc picnicLunch.c -o picnicLunch
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/c$ ./picnicLunch 

Enter your budget for the picnic lunch:
1200

1.Buy Apples (Rs.150/Kg)
2.Buy Cakes (Rs.300/Unit)
3.Buy Bread (Rs.40/Loaf)
4.Exit

Enter your choice	1

How many kgs of Appples?	4

Remaining amount = 600.000000

1.Buy Apples (Rs.150/Kg)
2.Buy Cakes (Rs.300/Unit)
3.Buy Bread (Rs.40/Loaf)
4.Exit

Enter your choice	2

How many Cakes?	2

Remaining amount = 0.000000

1.Buy Apples (Rs.150/Kg)
2.Buy Cakes (Rs.300/Unit)
3.Buy Bread (Rs.40/Loaf)
4.Exit

Enter your choice	4

Exitting...

Total amount spent on picnic lunch = 1200.000000
Remaining amount = 0.000000
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/c$ ./picnicLunch 

Enter your budget for the picnic lunch:
1500

1.Buy Apples (Rs.150/Kg)
2.Buy Cakes (Rs.300/Unit)
3.Buy Bread (Rs.40/Loaf)
4.Exit

Enter your choice	1

How many kgs of Appples?	2

Remaining amount = 1200.000000

1.Buy Apples (Rs.150/Kg)
2.Buy Cakes (Rs.300/Unit)
3.Buy Bread (Rs.40/Loaf)
4.Exit

Enter your choice	2

How many Cakes?	3

Remaining amount = 300.000000

1.Buy Apples (Rs.150/Kg)
2.Buy Cakes (Rs.300/Unit)
3.Buy Bread (Rs.40/Loaf)
4.Exit

Enter your choice	3

How many Loaves of Bread?	7

Remaining amount = 20.000000

1.Buy Apples (Rs.150/Kg)
2.Buy Cakes (Rs.300/Unit)
3.Buy Bread (Rs.40/Loaf)
4.Exit

Enter your choice	4

Exitting...

Total amount spent on picnic lunch = 1480.000000
Remaining amount = 20.000000
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/c$ ./picnicLunch 

Enter your budget for the picnic lunch:
1000

1.Buy Apples (Rs.150/Kg)
2.Buy Cakes (Rs.300/Unit)
3.Buy Bread (Rs.40/Loaf)
4.Exit

Enter your choice	1

How many kgs of Appples?	8

Budget exceeded

Total amount spent on picnic lunch = 1000.000000
Remaining amount = 0.0

*/