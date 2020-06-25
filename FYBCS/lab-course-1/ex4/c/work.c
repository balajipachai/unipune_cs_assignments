/*
 A task takes 4 ½ hours to complete. Two workers, A and B start working on it and take turns
alternately. A works for 25 minutes at a time and is paid Rs 50, B works for 75 minutes at a time
and is paid Rs. 150. Display the total number of turns taken by A and B, calculate their total
amounts and also the total cost of the task.
*/
#include<stdio.h>
int main(){
	int totalTime = 4.5 * 60, asPerMinuteSalary = 2, bsPerMinuteSalary = 2, turns = 0, remainingTime, flag = 0, aWorkedFor = 0, bWorkedFor = 0;
	float asSalary = 0.0, bsSalary = 0.0;
	while(totalTime >= 0){
		turns++;
		if (totalTime > 25) {
			remainingTime = totalTime - 25;
			aWorkedFor += (totalTime - remainingTime);
			totalTime = remainingTime;
		}else{
			remainingTime = totalTime;
			aWorkedFor += remainingTime;
			totalTime = remainingTime;
			flag = 1;
		}
		
		
		if (totalTime > 75) {
			remainingTime = totalTime - 75;	
			bWorkedFor += (totalTime - remainingTime);
			totalTime = remainingTime ;
		} else {
			remainingTime = totalTime;
			bWorkedFor += remainingTime;
			totalTime = remainingTime ;
			flag = 1;
		}
		if (flag) {
			break;
		}
		
	}

	asSalary = asPerMinuteSalary * aWorkedFor;
	bsSalary = bsPerMinuteSalary * bWorkedFor;
	
	printf("Number of turns taken by A and B = %d\nA's Salary = %f\nB's Salary = %f\nTotal Amount (A+B) = %f\nTotal cost of the task = %f\nA worked for = %d minutes\nB worked for = %d minutes", turns, asSalary, bsSalary, (asSalary + bsSalary), (asSalary + bsSalary), aWorkedFor, bWorkedFor);

}
