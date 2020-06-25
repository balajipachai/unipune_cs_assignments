/*
 Write a program to display all Armstrong numbers between 1 and 500. (An Armstrong
number is a number such that the sum of cube of digits = number itself Ex. 153 = 1*1*1 + 5*5*5 + 3*3*3 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
int main(){
    int number = 1, temp, rem, sumOfDigits;
    printf("ArmStrong numbers between 1 to 500 are: \n");
    while(number <= 500){
        temp = number;
        while(temp > 0){
            rem = temp % 10;
            sumOfDigits += (rem * rem * rem);
            temp /= 10;
        }

        if(sumOfDigits == number){
            printf("%d\t", number);
        }
        number++;
        sumOfDigits = 0;
    }
    printf("\n");
    return 0;
}