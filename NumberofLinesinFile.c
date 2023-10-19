//Date: 2023.10.16
//Purpose: A program that counts the number of lines coming from a text file

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "myfile.txt"
int main() {

	int numOfLine = 0;
	int c;
	FILE* pFile = NULL;

	pFile = fopen(FILENAME, "r"); //Saving address of returned value to pointer

	if (pFile == NULL) {
		perror("There was an error opening the file:");
		exit(1); //stops the whole program instant, return only exits the block 
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