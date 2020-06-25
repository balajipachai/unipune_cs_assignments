/*
Program which accepts a number and checks if the number is a palindrome
Author: Balaji Pachai
Date Create: 09/05/2018
*/
#include<stdio.h>
int main(){
	int number, remainder, reversedNumber[6], i, temp, originalNumber[6], count = 0, tempCount = 0, flag = 0;
	printf("Enter the number: ");
	scanf("%d", &number);
	temp = number;
	// The reverse number will be stored in the array reversedNumber
	while(number > 0){
		remainder = number % 10;
		reversedNumber[count] = remainder;
		number /= 10;
		count++;
	}

	printf("Reversed number array: \n");
	for(i = 0; i < count; i++){
                printf("%d\t", reversedNumber[i]);
	}

	// Re-assign the temp variable's value to number
	number = temp;
	tempCount = count - 1;

	// Add original number to originalNumber array
	while(number > 0){
		remainder = number % 10;
		originalNumber[tempCount] = remainder;
		tempCount--;
		number /= 10;
	}

	printf("\nOriginal number array: \n");
        for(i = 0; i < count; i++){
                printf("%d\t", originalNumber[i]);
        }

	// Check if reversedNumber == originalNumber
	for(i = 0; i < count; i++){
		if(reversedNumber[i] != originalNumber[i]){
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		printf("\nEntered number %d is palindrome\n", temp);
	} else {
		printf("\nEntered number %d is not a palindrome\n", temp);
	}
	
}
