/*
   Program to accept an integer 'n' and display all even numbers upto 'n'
 */
#include<stdio.h>
void main(){
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	int i;
	printf("Even numbers up till %d are: \n", number);
	for(i=0; i<=number; i++){
		if(i % 2 == 0){
			printf("%d\t", i);
		}
	}
}
