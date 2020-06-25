/*
   Program to accept 2 integers x and y and calculate the sum of al integers berween x and y (both inclusive)
 */
#include<stdio.h>
void main(){
	int x, y;
	printf("Enter the value of x and y: ");
	scanf("%d%d", &x, &y);

	int i, sum =0;
	for(i=x; i<=y; i++){
		sum+=i;
	}
	printf("Sum: = %d\n", sum);
}
/*
Output
Enter the value of x and y: 2 5
Sum: = 14
balaji@DC-21:~/Desktop/C/simple_loops$ ./a2
Enter the value of x and y: 6 8
Sum: = 21
balaji@DC-21:~/Desktop/C/simple_loops$ ./a2
Enter the value of x and y: 0 10
Sum: = 55
balaji@DC-21:~/Desktop/C/simple_loops$ ./a2
Enter the value of x and y: 0 11
Sum: = 66
balaji@DC-21:~/Desktop/C/simple_loops$ ./a2
Enter the value of x and y: 0 20
Sum: = 210
balaji@DC-21:~/Desktop/C/simple_loops$ ./a2
Enter the value of x and y: 1 20
Sum: = 210
*/
