//Date: 2023.10.16
//Purpose: A program that counts the number of lines coming from a text file

#include <stdio.h>
#include <stdlib.h>
int main() {

	int numOfLine = 0;
	int c;
	FILE* pFile = NULL;

	pFile = fopen("myfile.txt", "r"); //Saving address of returned value to pointer

	if (pFile == NULL) {
		perror("There was an error opening the file:");
		return -1;
	}

	while ((c= fgetc(pFile)) != EOF) {
		if (c == '\n') {
			numOfLine++;
		}
	}

	printf("Number of lines in text file: %i", numOfLine);

	fclose(pFile); //Closing the file
	return 0;
}