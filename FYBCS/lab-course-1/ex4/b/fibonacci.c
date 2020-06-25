/*
   Print the fibonacci series
 */
#include<stdio.h>
int main(){
	int prevTerm = 1, nextTerm = 1, k, number, upcomingTerm, i;
	printf("Enter a number: ");
	scanf("%d", &number);
	printf("Fibonacci series: \n");
	printf("%d\t%d\t", prevTerm, nextTerm);
	for(i =2; i< number; i++){
		upcomingTerm = prevTerm + nextTerm;
		printf("%d\t", upcomingTerm);
		prevTerm = nextTerm;
		nextTerm = upcomingTerm;

	}
	printf("\n");
}
