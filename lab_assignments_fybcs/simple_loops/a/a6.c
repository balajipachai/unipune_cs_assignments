/*
   Accept an integer and reverse the number
 */
#include<stdio.h>
void main(){
	int number;
	printf("Enter the number: ");
	scanf("%d", &number);
	printf("Entered number is %d ", number);
	printf("Reversed number is: ");
	while(number > 0){
		printf("%d", number % 10);
		number /= 10;
	}
	printf("\n");
}
