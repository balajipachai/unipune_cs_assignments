/*
Write a simple menu driven program for a shop, which sells the following items:
|Item    | Price |
Shoes       200
Bags        300
T-Shirt     500
Pant        450
Wrist-Watch 750
------------------
The user selects items using a menu. For every item selected, ask the quantity. If the quantity of
any item is more than 10, give a discount of _____%. When the user selects Exit, display the
total amount. 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
int main(){
    float totalAmount, discountAmount, discountGiven = 0.2; //20%
    int quantity, choice, giveDiscountFlag = 0;
    do
    {
        printf("\nSelect the items to buy?\n1.Shoes\n2.Bags\n3.T-Shirt\n4.Pant\n5.Wrist-Watch\n6.Exit\n");
        printf("\nEnter you choice:\t");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("\nEnter the quantity:\t");
                scanf("%d", &quantity);
                totalAmount += 200 * quantity;
                
                if (quantity > 10) {
                    giveDiscountFlag = 1;
                }
                break;

            case 2:
                printf("\nEnter the quantity:\t");
                scanf("%d", &quantity);
                totalAmount += 300 * quantity;
                
                if (quantity > 10) {
                    giveDiscountFlag = 1;
                }
                break;
        
            case 3:
                printf("\nEnter the quantity:\t");
                scanf("%d", &quantity);
                totalAmount += 500 * quantity;
                
                if (quantity > 10) {
                    giveDiscountFlag = 1;
                }
                break;

            case 4:
                printf("\nEnter the quantity:\t");
                scanf("%d", &quantity);
                totalAmount += 450 * quantity;
                
                if (quantity > 10) {
                    giveDiscountFlag = 1;
                }
                break;

            case 5:
                printf("\nEnter the quantity:\t");
                scanf("%d", &quantity);
                totalAmount += 750 * quantity;
                
                if (quantity > 10) {
                    giveDiscountFlag = 1;
                }
                break;

            case 6:
                printf("\nExitting...\n");
                break;

            default:
                printf("\nEnter a valid choice\n");
                break;
        }

    } while (choice != 6);
    
    //If this flag is set it implies 20% discount has to be given on the totalAmount
    if(giveDiscountFlag){
        discountAmount = totalAmount * discountGiven;
        totalAmount -= discountAmount;
    }

    printf("\nTotal Amount = %f\n", totalAmount);
    return 0;
}

/*
Output:
NO DISCOUNT

balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/b$ ./shopItems 

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	1

Enter the quantity:	1

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	2

Enter the quantity:	1

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	3

Enter the quantity:	1

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	4

Enter the quantity:	1

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	5

Enter the quantity:	1

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	6

Exitting...

Total Amount = 2200.000000


DISCOUNT
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/b$ gcc shopItems.c -o shopItems 
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/b$ ./shopItems 

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	1

Enter the quantity:	11

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	2

Enter the quantity:	1

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	3

Enter the quantity:	1

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	4

Enter the quantity:	1

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	5

Enter the quantity:	1

Select the items to buy?
1.Shoes
2.Bags
3.T-Shirt
4.Pant
5.Wrist-Watch
6.Exit

Enter you choice:	6

Exitting...

Total Amount = 3360.000000
*/