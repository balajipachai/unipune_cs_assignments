/*
Author: Balaji Pachai
Date Created: 09/04/2018
Accept a number n and display each digit in words. Example: 123, Output: One-Two-Three
 */
#include<stdio.h>
int main(){
	void printDigit(int number);
	int number, array[6], count = 0, remainder, i;
	printf("Enter the number: ");
	scanf("%d",&number);

	while(number > 0){
		remainder = number % 10;
		array[count] = remainder;
		number /= 10;
		count++;
	}

	// Traverse the array and call printDigit()
	for(i = count - 1 ; i >= 0 ; i--){
		printDigit(array[i]);
		if(i != 0){
			printf("-");
		}
	}
	printf("\n");
	return 0;
}

// Function that prints the digit in word
void printDigit(int number){
	switch(number){
		case 0 : printf("Zero");
			 break;

		case 1 : printf("One");
			 break;

		case 2 : printf("Two");
			 break;

		case 3 : printf("Three");
			 break;

		case 4 : printf("Four");
			 break;

		case 5 : printf("Five");
			 break;

		case 6 : printf("Six");
			 break;

		case 7 : printf("Seven");
			 break;

		case 8 : printf("Eight");
			 break;

		case 9 : printf("Nine");
			 break;
		default: printf("No case matched\n");
			 break;

	}
}
