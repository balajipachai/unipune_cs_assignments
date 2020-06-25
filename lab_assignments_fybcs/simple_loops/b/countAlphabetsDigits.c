/*
Accept characters till the user entersEOF and count the number of alphabets and digits entered
*/
#include<stdio.h>
int main(){
	char ch;
	int countAlphabet = 0, countDigit = 0;
	printf("Start entering characters and end input by EOF\n");
	while((ch = getchar()) != EOF){
		if(ch >= 48 && ch <= 57){
			countDigit++;
		}else {
			countAlphabet++;
		}
	}
	printf("\n Total characters entered = %d\n Digit Count = %d\n Alphabet Count = %d\n", countDigit + countAlphabet, countDigit, countAlphabet);
	return 0;

}
