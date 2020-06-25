/*
Write a program, which accepts a character from the user and checks if it is an alphabet, digit
or punctuation symbol. If it is an alphabet, check if it is uppercase or lowercase and then change
the case. 
#########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
#########################
*/
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    int choice;
    printf("Enter the Character: \t");
    scanf("%c", &ch);
    do{
        printf("\n1.ISALPHABET\n2.ISDIGIT\n3.ISPUNCTUATIONSYMBOL\n4.EXIT\n");
        printf("Enter your choice: \t");
        scanf("%d", &choice);
        switch(choice){
            case 1: if(isalpha(ch)){
                printf("\nALPHABET\n");
                //If it is in lowercase or uppercase then change the case
                if(islower(ch)){
                    printf("\nLOWERCASE %c to UPPERCASE %c\n", ch, toupper(ch));
                }else {
                    printf("\nUPPERCASE %c to nLOWERCASE %c\n", ch, tolower(ch));
                }
            } else {
                printf("\nNOT AN APLHABET\n");
            }
            break;

            case 2: if(isdigit(ch)){
                printf("\nDIGIT\n");
            } else {
                printf("\nNOT A DIGIT\n");
            }
            break;

            case 3: if(ispunct(ch)){
                printf("\nPUNCTUATION SYMBOL\n");
            } else {
                printf("\nNOT A PUNCTUATION SYMBOL\n");
            }
            break;

            default: printf("Exitting...\n");
            break;
        }
    }while(choice != 4);
    return 0;
}

/*
Output:
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/a$ gcc checkAlphabet.c -o checkAlphabet
balaji@DC-21:~/Desktop/C/unipune_cs_assignments/lab_assignments_fybcs/menu_driven/a$ ./checkAlphabet 
Enter the Character: 	a

1.ISALPHABET
2.ISDIGIT
3.ISPUNCTUATIONSYMBOL
4.EXIT
Enter your choice: 	3

NOT A PUNCTUATION SYMBOL

1.ISALPHABET
2.ISDIGIT
3.ISPUNCTUATIONSYMBOL
4.EXIT
Enter your choice: 	2

NOT A DIGIT

1.ISALPHABET
2.ISDIGIT
3.ISPUNCTUATIONSYMBOL
4.EXIT
Enter your choice: 	1

ALPHABET

LOWERCASE a to UPPERCASE A

1.ISALPHABET
2.ISDIGIT
3.ISPUNCTUATIONSYMBOL
4.EXIT
Enter your choice: 	4
Exitting...

*/
