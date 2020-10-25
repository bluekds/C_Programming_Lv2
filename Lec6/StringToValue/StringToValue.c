#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char sInt[] = "100";
	char sFloat[] = "10.5";

	int valInt = atoi(sInt);
	double valDouble = atof(sFloat);

	printf("valInt = %d, valDouble = %lf\n", valInt, valDouble);
	
	double result = valInt + valDouble;
	printf("Result = %lf\n", result);
}