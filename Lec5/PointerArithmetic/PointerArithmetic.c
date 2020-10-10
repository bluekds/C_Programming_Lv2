#include <stdio.h>

void main(void) {
	char* pChar = (char*)100;
	int* pInt = (int*)100;
	double* pDouble = (double*)100;

	printf("sizeof(char): %d, pChar: %d, pChar+1: %d, pChar-1: %d\n"
		,sizeof(char), pChar, pChar + 1, pChar - 1);
	printf("sizeof(int): %d, pInt: %d, pInt+1: %d, pInt-1: %d\n"
		, sizeof(int), pInt, pInt + 1, pInt - 1);
	printf("sizeof(double): %d, pDouble: %d, pDouble+1: %d, pDouble-1: %d\n"
		, sizeof(double), pDouble, pDouble + 1, pDouble - 1);
}
