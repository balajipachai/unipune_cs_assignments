/*
   Program to accept real number 'x' and integer 'n' and calculate the sum of first 'n' terms of the series x+3x+5x+7x+......
 */
#include<stdio.h>
int main(){
	float x, sum = 0.0;
	int n, i;
	printf("Enter the value of x and n: ");
	scanf("%f%d", &x, &n);

	for(i = 1; i <= n ; i+=2){
		sum += (i * x);
	}
	printf("Sum of series: %f\n", sum);
	return 0;
}

