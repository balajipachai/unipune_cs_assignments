/*
Write a menu driven program to perform the following operations till the user selects Exit.
Accept appropriate data for each option. Use standard library functions from math.h
i. Sine ii. Cosine iii. log iv. ex v. Square Root vi. Exit 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
#include<math.h>
int main(){
    int choice, value;
    do
    {
        printf("\n1.Sine\n2.Cosine\n3.Log\n4.e^x\n5.Square root\n6.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        
        switch (choice)
        {
            case 1:
                printf("Enter the value Sin(x):\t");
                scanf("%d", &value);
                printf("\nSin(%d) = %f\n", value, sin(value));
                break;
        
            case 2:
                printf("Enter the value Cos(x):\t");
                scanf("%d", &value);
                printf("\nCos(%d) = %f\n", value, cos(value));
                break;

            case 3:
                printf("Enter the value log(x):\t");
                scanf("%d", &value);
                printf("\nlog(%d) = %f\n", value, log(value));
                break; 

            case 4:
                printf("Enter the value e^(x):\t");
                scanf("%d", &value);
                printf("\ne^(%d) = %f\n", value, exp(value));
                break;

            case 5:
                printf("Enter the value sqrt(x):\t");
                scanf("%d", &value);
                printf("\nsqrt(%d) = %f\n", value, sqrt(value));
                break;
            
            case 6: 
                printf("\nExitting....\n");
                return 0;

            default: printf("\nEnter a valid choice\n");
            break;
        }
    } while (choice != 6);
    return 0;
}

/*
Output:

balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/a$ gcc mathOperations.c -o mathOperations -lm
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/a$ ./mathOperations 

1.Sine
2.Cosine
3.Log
4.e^x
5.Square root
6.Exit
Enter your choice
1
Enter the value Sin(x):	90

Sin(90) = 0.893997

1.Sine
2.Cosine
3.Log
4.e^x
5.Square root
6.Exit
Enter your choice
2
Enter the value Cos(x):	90

Cos(90) = -0.448074

1.Sine
2.Cosine
3.Log
4.e^x
5.Square root
6.Exit
Enter your choice
3
Enter the value log(x):	100

log(100) = 4.605170

1.Sine
2.Cosine
3.Log
4.e^x
5.Square root
6.Exit
Enter your choice
4
Enter the value e^(x):	5

e^(5) = 148.413159

1.Sine
2.Cosine
3.Log
4.e^x
5.Square root
6.Exit
Enter your choice
5
Enter the value sqrt(x):	225

sqrt(225) = 15.000000

1.Sine
2.Cosine
3.Log
4.e^x
5.Square root
6.Exit
Enter your choice
9

Enter a valid choice

1.Sine
2.Cosine
3.Log
4.e^x
5.Square root
6.Exit
Enter your choice
6

Exitting....
*/