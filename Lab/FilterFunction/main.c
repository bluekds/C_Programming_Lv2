#include <stdio.h>
#include "FilterFunction.h"

#define	DATA_LENGTH 100

int main(void)
{
	int inputData[DATA_LENGTH] = { 0 };
	genData(inputData, DATA_LENGTH, DATA_MAX);
	
	printf("**** Input Data ****\n");
	printData(inputData, DATA_LENGTH, DATA_MAX);

	// Apply filter here
	// Caution: You should not make another array for this problem
	int outputData[DATA_LENGTH] = { 0 };
	for (int i = 0; i < DATA_LENGTH; i++) {
		outputData[i]
			= inversionFilter(
				smoothingFilter(inputData, DATA_LENGTH, i, 5)
			);
	}

	printf("\n\n**** Output Data ****\n");
	printData(outputData, DATA_LENGTH, DATA_MAX);

	return 0;
}

