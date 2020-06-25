/*
 Write a program to display all prime numbers between ____ and ____. 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
//Function that checks whether a number is prime or not
int isPrime(int number){
    int i , divideUpto;
    divideUpto = number/2;
    for( i = 2; i <= divideUpto; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int isPrime(int number);
    int fromNumber, toNumber, isPrimeNo;
    printf("Enter fromNumber and toNumber\n");
    scanf("%d%d", &fromNumber, &toNumber);
    
    printf("Prime Numbers from %d to %d are: \n", fromNumber, toNumber);
    for(int i = fromNumber; i <= toNumber; i++){
        isPrimeNo = isPrime(i);
        if(isPrimeNo){
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}
/*
Output:
Enter fromNumber and toNumber
2
30
Prime Numbers from 2 to 30 are: 
2	3	5	7	11	13	17	19	23	29	
*/