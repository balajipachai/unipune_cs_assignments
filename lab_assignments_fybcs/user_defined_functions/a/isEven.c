/*
Write a function isEven, which accepts an integer as parameter and returns 1 if the number is
even, and 0 otherwise. Use this function in main to accept n numbers and ckeck if they are even
or odd.
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
int main(){
    int isEven(int number);
    int no, n, i = 0;
    printf("Enter how many numbers you want to check for even or odd?\t");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter a number: ");
        scanf("%d", &no);
        printf("%d\n", isEven(no));
    }
    return 0;
}

// Function that checks whether the number is even ?
int isEven(int number){
    if(number % 2 == 0)
        return 1;
    return 0;
}

/*
Output
Enter how many numbers you want to check for even or odd?       5
Enter a number: 10
1
Enter a number: 35
0
Enter a number: 64
1
Enter a number: 58
1
Enter a number: 65
0
*/