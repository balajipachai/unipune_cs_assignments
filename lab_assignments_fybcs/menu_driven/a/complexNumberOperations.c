/*
Accept two complex numbers from the user (real part, imaginary part). Write a menu driven
program to perform the following operations till the user selects Exit.
i. ADD ii. SUBTRACT iii. MULTIPLY iv. EXIT 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
int main(){
    int choice, realPartOne, imaginaryPartOne, realPartTwo, imaginaryPartTwo, realParts, imaginaryParts;
    printf("\nEnter the real and imaginary part of 1st complex number:\t");
    scanf("%d%d", &realPartOne, &imaginaryPartOne);
    printf("\nEnter the real and imaginary part of 2nd complex number:\t");
    scanf("%d%d", &realPartTwo, &imaginaryPartTwo);
    
    do
    {
        printf("\n1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.EXIT\n");
        printf("Enter your choice:\t");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                realParts = realPartOne + realPartTwo;
                imaginaryParts = imaginaryPartOne + imaginaryPartTwo;
                printf("Addition of (%d %di) + (%d %di) = (%d %di)", realPartOne, imaginaryPartOne, realPartTwo, imaginaryPartTwo, realParts, imaginaryParts);
                break;

            case 2:
                realParts = realPartOne - realPartTwo;
                imaginaryParts = imaginaryPartOne - imaginaryPartTwo;
                printf("Subtraction of (%d %di) - (%d %di) = (%d %di)", realPartOne, imaginaryPartOne, realPartTwo, imaginaryPartTwo, realParts, imaginaryParts);
                break;

            case 3:
            /*
            Multiply: (4 – 3i)(2 + 5i)
            Step 1: Remove Parentheses: 8+20i-6i-15i^2
            Step 2: Simplify the powers of i, specifically remember that i2 = –1: 8+20i-6i-15(-1) => 8+20i-6i+15
            Step 3: Combine like terms, that is, combine real numbers with real numbers and imaginary numbers with imaginary numbers: 23+14i
            */
                realParts = (realPartOne * realPartTwo) + (imaginaryPartOne * imaginaryPartTwo * -1);
                imaginaryParts = (realPartOne * imaginaryPartTwo) + (imaginaryPartOne * realPartTwo) ;
                printf("Multiplication of (%d %di) * (%d %di) = (%d %di)", realPartOne, imaginaryPartOne, realPartTwo, imaginaryPartTwo, realParts, imaginaryParts);
                break;
        
            case 4: 
                printf("Exitting...\n");
                return 0;

            default:
                printf("Enter a valid choice");
                break;
        }
    } while (choice != 4);
    
    return 0;
}

/*
Output:

balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/a$ ./complexNumberOperations 

Enter the real and imaginary part of 1st complex number:	7 -9

Enter the real and imaginary part of 2nd complex number:	4 -6

1.ADD
2.SUBTRACT
3.MULTIPLY
4.EXIT
Enter your choice:	3
Multiplication of (7 -9i) * (4 -6i) = (-26 -78i)
1.ADD
2.SUBTRACT
3.MULTIPLY
4.EXIT
Enter your choice:	1
Addition of (7 -9i) + (4 -6i) = (11 -15i)
1.ADD
2.SUBTRACT
3.MULTIPLY
4.EXIT
Enter your choice:	2
Subtraction of (7 -9i) - (4 -6i) = (3 -3i)
1.ADD
2.SUBTRACT
3.MULTIPLY
4.EXIT
Enter your choice:	4
Exitting...
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/a$ ./complexNumberOperations 

Enter the real and imaginary part of 1st complex number:	4 -3

Enter the real and imaginary part of 2nd complex number:	2 5

1.ADD
2.SUBTRACT
3.MULTIPLY
4.EXIT
Enter your choice:	1
Addition of (4 -3i) + (2 5i) = (6 2i)
1.ADD
2.SUBTRACT
3.MULTIPLY
4.EXIT
Enter your choice:	2
Subtraction of (4 -3i) - (2 5i) = (2 -8i)
1.ADD
2.SUBTRACT
3.MULTIPLY
4.EXIT
Enter your choice:	3
Multiplication of (4 -3i) * (2 5i) = (23 14i)
1.ADD
2.SUBTRACT
3.MULTIPLY
4.EXIT
Enter your choice:	4
Exitting...

*/