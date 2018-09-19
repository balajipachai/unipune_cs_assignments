/*
   Accept a integer and check if it is prime or not
 */
#include<stdio.h>
#include<math.h>

/*
   Function that checks whether the number is prime or not
 */
int isPrime(int number){
	int i = 2;
	for(i; i < number; i++){
		if(number % i == 0){
			return 0;
		}
	}
	return 1;
}

void main(){
	int number, flag = 0;
	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Ceil of number after sqrt: %f\n", ceil(sqrt(number)));
	flag = isPrime((int)ceil(sqrt(number)));
	if(flag){
		printf("Entered number %d is Prime\n", number);
	} else {
		printf("Entered number %d is not Prime\n", number);
	}
}
