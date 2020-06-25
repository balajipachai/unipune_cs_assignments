/*
Accept characters till the user enters EOF and count the number of lines entered. Also
display the length of the longest line. (Hint: A line ends when the character is \n) 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
int main(){
    char ch ;
    int numberOfLines = 0, max = 0, count = 0;
    while((ch = getchar()) != EOF){
        count++;
        if(ch == '\n'){
            numberOfLines++;
            if(numberOfLines == 1){
                max = count;
            }else {
                if(count > max){
                    max = count;
                }
            }
            count = 0;
        }
    }
    printf("Number of lines = %d\nLength of the longest line = %d\n", numberOfLines, max);
    return 0;
}

/*
Output:
balaji@DC-21:~/Desktop/C/lab_assignments/nested_loops/b$ ./numberOfLinesEntered 
hey buddy
Number of lines = 1
Length of the longest line = 10

balaji@DC-21:~/Desktop/C/lab_assignments/nested_loops/b$ ./numberOfLinesEntered 
how are you doing?
I am good, how are you?
Me too doing great
Ok, bye see ya 
ok see ya
Number of lines = 5
Length of the longest line = 24
*/