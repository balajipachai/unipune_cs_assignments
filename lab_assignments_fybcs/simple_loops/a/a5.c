/*
   Accept an integer and count the number of digits in the number
 */
#include<stdio.h>
void main(){
	int number, count = 0, temp;
	printf("Enter the number: ");
	scanf("%d", &number);
	temp = number;
	while (number > 0){
		number /= 10;
		count++;
	}
	printf("Number of digits in %d = %d\n", temp, count);
}
