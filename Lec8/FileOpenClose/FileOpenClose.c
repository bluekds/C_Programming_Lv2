#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	char* fileName = "text.txt";
	FILE* fp = NULL;
	fp = fopen(fileName, "w");

	if (fp == NULL) {
		printf("Fail to open the file - %s\n", fileName);
		return 0;
	}
	printf("The %s file was opened.\n", fileName);

	fclose(fp);
	printf("The %s file was closed.\n", fileName);
}