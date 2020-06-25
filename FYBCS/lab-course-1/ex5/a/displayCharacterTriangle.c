/*
Modify the sample program 1 to display n lines as follows (here n=4).
A B C D
E F G
H I
J 
 #########################
 Author: Balaji Pachai
 LinkedIn: www.linkedin.com/in/balaji-pachai-blockchain-nodejs-shell-scripting-aws-deployment-microservices
 For Queries drop me an email: unipunelabassignements@gmail.com
 #########################
*/

#include<stdio.h>
int main(){
    //Initialize k = 65, since 65 is the ASCII value of A
    int numberOfLines, startingCharacter = 0, k = 65;
    printf("Enter the number of lines: \n");
    scanf("%d", &numberOfLines);

    for(int lineNumber = numberOfLines; lineNumber > 0; lineNumber--){
        for(int i = 0; i < lineNumber; i++){
            startingCharacter = k + i;
            printf("%c\t", startingCharacter);
        }
        // After displaying say A B C D
        // The next line should start from E and so on thus we manipulate the value of k
        k = startingCharacter + 1;
        printf("\n");
    }
    return 0;
}
/*
Output:
balaji@DC-21:~/Desktop/C/lab_assignments/nested_loops/a$ ./displayCharacterTriangle 
Enter the number of lines: 
4
A	B	C	D	
E	F	G	
H	I	
J


balaji@DC-21:~/Desktop/C/lab_assignments/nested_loops/a$ ./displayCharacterTriangle 
Enter the number of lines: 
6
A	B	C	D	E	F	
G	H	I	J	K	
L	M	N	O	
P	Q	R	
S	T	
U	
*/