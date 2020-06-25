/*
Accept x and y coordinates of two points and write a menu driven program to perform the
following operations till the user selects Exit.
i. Distance between points.
ii. Slope of line between the points.
iii. Check whether they lie in the same quadrant.
iv. EXIT
(Hint: Use formula m = (y2-y1)/(x2-x1) to calculate slope of line.) 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
#include<math.h>
#define Square(x) (x * x)
int main(){
    int x1, x2, y1, y2, choice;
    float distance, slope, xCoordinateDiff, yCoordinateDiff;
    printf("Enter x and y co-ordinates of P1: \t");
    scanf("%d%d", &x1, &y1);

    printf("Enter x and y co-ordinates of P2: \t");
    scanf("%d%d", &x2, &y2);

    
    do
    {
        printf("\n1.Calculate distance between P1 and P2\n2.Calculate Slope of Line\n3.Does the Points (P1, P2) lie in the same quadrant?\n4.Exit\n");
        printf("\nEnter your choice: \t");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                xCoordinateDiff = x2 - x1;
                yCoordinateDiff = y2 - y1;
                distance = sqrt(Square(xCoordinateDiff) + Square(yCoordinateDiff));
                printf("\nDistance between P1(%d, %d) and P2(%d, %d) = %f\n", x1, y1, x2, y2, distance);
                break;
        
            case 2:
                xCoordinateDiff = x2 - x1;
                yCoordinateDiff = y2 - y1;
                if(xCoordinateDiff > 0){
                    slope = yCoordinateDiff/xCoordinateDiff;
                }
                printf("\nSlope of the line formed by points P1(%d, %d) and P2(%d, %d) = %f\n",  x1, y1, x2, y2, slope);
                break;

            case 3: 
                if(x1 > 0 && x2 > 0 && y1 > 0 && y2 > 0){
                    printf("\nP1(%d, %d) and P2(%d, %d) lie in the 1st quadrant\n", x1, x2, y1, y2);
                } else if(x1 < 0 && x2 < 0 && y1 < 0 && y2 < 0){
                    printf("\nP1(%d, %d) and P2(%d, %d) lie in the 3rd quadrant\n", x1, x2, y1, y2);
                } else if(x1 < 0 && x2 < 0 && y1 > 0 && y2 > 0){
                    printf("\nP1(%d, %d) and P2(%d, %d) lie in the 2nd quadrant\n", x1, x2, y1, y2);
                } else if(x1 > 0 && x2 > 0 && y1 < 0 && y2 < 0){
                    printf("\nP1(%d, %d) and P2(%d, %d) lie in the 4th quadrant\n", x1, x2, y1, y2);
                } else {
                    printf("\nP1(%d, %d) and P2(%d, %d) does not lie in the same quadrant\n", x1, x2, y1, y2);
                }
                break;
            
            case 4: 
                printf("\nExitting...\n");
                break;

            default:
                printf("\nEnter a valid choice\n");
                break;
        }
    } while (choice != 4);
    return 0;
}

/*
Output:

balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/b$ gcc pointsOperations.c -o pointsOperations -lm
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/b$ ./pointsOperations 
Enter x and y co-ordinates of P1: 	3 2
Enter x and y co-ordinates of P2: 	9 7

1.Calculate distance between P1 and P2
2.Calculate Slope of Line
3.Does the Points (P1, P2) lie in the same quadrant?
4.Exit

Enter your choice: 	1

Distance between P1(3, 2) and P2(9, 7) = 7.810250

1.Calculate distance between P1 and P2
2.Calculate Slope of Line
3.Does the Points (P1, P2) lie in the same quadrant?
4.Exit

Enter your choice: 	2

Slope of the line formed by points P1(3, 2) and P2(9, 7) = 0.833333

1.Calculate distance between P1 and P2
2.Calculate Slope of Line
3.Does the Points (P1, P2) lie in the same quadrant?
4.Exit

Enter your choice: 	3

P1(3, 9) and P2(2, 7) lie in the 1st quadrant

1.Calculate distance between P1 and P2
2.Calculate Slope of Line
3.Does the Points (P1, P2) lie in the same quadrant?
4.Exit

Enter your choice: 	4

Exitting...


balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/b$ ./pointsOperations 
Enter x and y co-ordinates of P1: 	7 -1
Enter x and y co-ordinates of P2: 	-3 5

1.Calculate distance between P1 and P2
2.Calculate Slope of Line
3.Does the Points (P1, P2) lie in the same quadrant?
4.Exit

Enter your choice: 	1

Distance between P1(7, -1) and P2(-3, 5) = 11.661903

1.Calculate distance between P1 and P2
2.Calculate Slope of Line
3.Does the Points (P1, P2) lie in the same quadrant?
4.Exit

Enter your choice: 	2

Slope of the line formed by points P1(7, -1) and P2(-3, 5) = 0.000000

1.Calculate distance between P1 and P2
2.Calculate Slope of Line
3.Does the Points (P1, P2) lie in the same quadrant?
4.Exit

Enter your choice: 	3

P1(7, -3) and P2(-1, 5) does not lie in the same quadrant

1.Calculate distance between P1 and P2
2.Calculate Slope of Line
3.Does the Points (P1, P2) lie in the same quadrant?
4.Exit

Enter your choice: 	4

Exitting...

*/