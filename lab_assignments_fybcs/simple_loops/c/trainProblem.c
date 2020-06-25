/*
A train leaves station A at 04.00 a.m and travels at 80kmph. After every 30 minutes, it reaches a station where it halts for 10 minutes. It reaches its final destination B at 1.00 p.m. Display a table showing its arrival and departure time at every intermediate station. Also calculate the total distance between A and B.
Author: Balaji Pachai
Date Created: 09/05/2018
*/
#include<stdio.h>
int main(){
	//function to convert stopsAtEveryMinute value to in between 0 to 1
	float getStopsAtEveryStationFor(float minutes);

	float startTime, endTime, arrivalTime = 0.0, departureTime = 0.0, distance, speed, stopsAtEveryStationFor, i, leavesEveryStationAfter, departedLastStationAt;
	int counter = 0 ;
	printf("\nEnter the start time: ");
	scanf("%f", &startTime);

	printf("\nEnter the end time: ");
	scanf("%f", &endTime);

	printf("\nTrain stops at every station for ? minutes: ");
	scanf("%f", &stopsAtEveryStationFor);
	stopsAtEveryStationFor = getStopsAtEveryStationFor(stopsAtEveryStationFor);

	printf("\nTrain leaves every station after ? minutes: ");
	scanf("%f", &leavesEveryStationAfter);
	leavesEveryStationAfter = getStopsAtEveryStationFor(leavesEveryStationAfter);

	printf("\nEnter the speed of train in kmph: ");
	scanf("%f", &speed);

	//distance travelled
	distance = speed * (endTime - startTime);
	
	// Tabel format
	printf("\n-------------------------------------------------");
	printf("\n|Station|\t|Arrival Time|\t|Departure Time|");
	printf("\n-------------------------------------------------");
	for(i = startTime; i <= endTime ; i+=stopsAtEveryStationFor){
		if(counter == 0){
			arrivalTime = startTime;
			departureTime = arrivalTime + leavesEveryStationAfter;
			departedLastStationAt = departureTime;
			// if arrivalTime or departureTime > 24 then accordingly adjust time
			if(arrivalTime > 24){
				arrivalTime -= 24;
			}

			if (departureTime > 24){
				departureTime -= 24;
			}
			printf("\n|Station%d|\t|%f|\t|%f|", counter, arrivalTime, departureTime);
		}else {
			arrivalTime = departedLastStationAt  + stopsAtEveryStationFor;
			if(i != endTime){
                        	departureTime = arrivalTime + leavesEveryStationAfter;
				departedLastStationAt = departureTime;
			} else {
				departureTime = 0.0;
			}

			// if arrivalTime or departureTime > 24 then accordingly adjust time
                        if(arrivalTime > 24){
                                arrivalTime -= 24;
                        }

                        if (departureTime > 24){
                                departureTime -= 24;
                        }

                        printf("\n|Station%d|\t|%f|\t|%f|", counter, arrivalTime, departureTime);
		}
		counter++;
	}
	printf("\n------------------------------------------------\n");
	printf("\n*****************Total distance travelled = %f km ************************\n", distance);
	return 0;
}

//function to convert stopsAtEveryMinute value to in between 0 to 1
float getStopsAtEveryStationFor(float minutes){
	return (minutes/60);
}
