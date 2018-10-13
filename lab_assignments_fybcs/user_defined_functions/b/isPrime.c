/*
 Write a function isPrime, which accepts an integer as parameter and returns 1 if the number
is prime and 0 otherwise. Use this function in main to display the first 10 prime numbers. 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>

int isPrime(int number){
    int i, divUpto;
    divUpto = number / 2;

    for(i = 2; i <= divUpto; i++){
        if(number % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int isPrime(int number);
    int no = 2, count = 0;
    printf("Printing the first 10 Prime Numbers\n");
    printf("\nNumber\tisPrime");
    while(count < 10){
        printf("\n%d\t", no);
        printf("%d\t",isPrime(no));
        count++;
        no++;
    }
    printf("\n");
    return 0;
}