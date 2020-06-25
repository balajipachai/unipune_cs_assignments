/*
Accept real number x and integer n and calculate the sum of first n terms of the series (1/x) + (1/x^2) + (1/x^3)....
*/
#include<stdio.h>
int main(){
	// Function that calculates x^n
	int power(int number, int exponent);
	float x, sum = 0.0, powerOfX;
	int number, i;
	printf("Enter the value for x and n: ");
	scanf("%f%d", &x, &number);
	
	for(i = 1; i <= number; i++){
		powerOfX = power(x, i);
		sum += (i/powerOfX);
	}
	printf("Sum of Upon Series is %f\n", sum);
	
}

//Function that calculates x^n
int power(int number, int exponent){
	float answer = 1;
	int i = 0;
	for(i ; i < exponent ; i++){
		answer *= number ;
	}
	return answer;
}

