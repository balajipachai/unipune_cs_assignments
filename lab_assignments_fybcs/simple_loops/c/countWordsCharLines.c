/*
Accept characters from the user till the user enters * and count the number of characters, words and lines entered by the user.
Author: Balaji Pachai
Date Created: 09/05/2018
*/
#include<stdio.h>
int main(){
	char ch;
	int wordCount = 0, lineCount = 0, characterCount = 0;
	printf("Start inputing characters and to stop inputting enter *\n");
	while((ch = getchar()) != '*'){
		if(ch == ' ' || ch == '\t' || ch == '\n'){
			wordCount++;
			if(ch == '\n'){
				lineCount++;
			}
		}else if(ch == '\n'){
			lineCount++;
		}
		characterCount++;
	}

	printf(" Number of words = %d\n Number of lines = %d\n Number of characters = %d\n", wordCount, lineCount, characterCount);

}
