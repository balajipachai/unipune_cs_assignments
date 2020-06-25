/*
Display all perfect numbers below 500. [A perfect number is a number, such that the sum of
its factors is equal to the number itself]. Example: 6 (1 + 2 + 3), 28 (1+2+4+7+14) 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
int main(){
    int number, factors, sumOfFactors = 0;
    for(number = 1; number <= 500; number++){
        if(number == 1){
            printf("%d\t", number);
        }else {
            for(factors = 1; factors <= (number/2); factors++){
                if(number % factors == 0){
                    sumOfFactors += factors;
                }
            }
            // printf("sumOfFactors = %d\n", sumOfFactors);
            //Checks if a number is perfect or not
            if(number == sumOfFactors){
                printf("%d\t", number);
                sumOfFactors = 0;
            }
            sumOfFactors = 0;
        }
    }
    printf("\n");
    return 0;
}

/*
Output:

balaji@DC-21:~/Desktop/C/lab_assignments/nested_loops/b$ gcc perfectNumbers.c -o perfectNumbers
balaji@DC-21:~/Desktop/C/lab_assignments/nested_loops/b$ ./perfectNumbers 
1	6	28	496	

*/