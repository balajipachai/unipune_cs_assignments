/*
Accept a character, an integer and display the next n characters
*/
#include<stdio.h>
void main(){
	int number,i;
	char ch;
	printf("Enter a character and a number: ");
	scanf("%c%d", &ch, &number);
	for(i=1; i<= number; i++){
		printf("%c\t", ch + i);
	}
	printf("\n");
}
