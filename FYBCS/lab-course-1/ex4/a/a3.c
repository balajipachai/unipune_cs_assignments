/*
   Accept 2 integers x and n and compute x^n
 */
#include<stdio.h>
void main(){
	int x,n, product =1, temp;
	printf("Accept the values of x and n: ");
	scanf("%d%d",&x,&n);
	//For displaying purpose
	temp = n;

	while(n >= 1){
		product *= x;
		n--;
	}
	printf("Temp is %d: ", temp);
	printf("The value of %d^%d = %d\n",x,temp,product);
}
/*
Output
balaji@DC-21:~/Desktop/C/simple_loops$ gcc a3.c -o a3
balaji@DC-21:~/Desktop/C/simple_loops$ ./a3
Accept the values of x and n: 2 3
Temp is 3: The value of 2^3 = 8
balaji@DC-21:~/Desktop/C/simple_loops$ ./a3
Accept the values of x and n: 2 5
Temp is 5: The value of 2^5 = 32
balaji@DC-21:~/Desktop/C/simple_loops$ ./a3
Accept the values of x and n: 4 4
Temp is 4: The value of 4^4 = 256
balaji@DC-21:~/Desktop/C/simple_loops$ ./a3
Accept the values of x and n: 4 3
Temp is 3: The value of 4^3 = 64

*/
