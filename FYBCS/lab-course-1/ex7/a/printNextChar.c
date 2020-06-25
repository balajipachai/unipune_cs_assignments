/*
 Write a function, which accepts a character and integer n as parameter and displays the next
n characters. 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
int main(){
    void printNextChars(char ch, int n);
    char c;
    int numberOfNextChars;
    printf("Enter a character and 'n' for printing the next n characters:\t");
    scanf("%c%d", &c, &numberOfNextChars);
    printNextChars(c, numberOfNextChars);
    return 0;
}

//Function that prints the next n characters
void printNextChars(char ch, int n){
    int i;
    for(i = 1; i <= n; i++){
        printf("%c\t", (ch + i));
    }
}