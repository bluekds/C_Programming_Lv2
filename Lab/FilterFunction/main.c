#include <stdio.h>
#include "FilterFunction.h"

#define DATA_LENGTH 100
#define DATA_MAX 5

int main(void)
{
	int inputSignal[DATA_LENGTH] = { 0 };
	genData(inputSignal, DATA_LENGTH, DATA_MAX);
	
	printf("**** Input Signal ****\n");
	printGraph(inputSignal, DATA_LENGTH, DATA_MAX);

	// Apply filter here
	// Caution: You should not make another array for this problem
	int outputSignal[DATA_LENGTH] = { 0 };
	for (int i = 0; i < DATA_LENGTH; i++)
		outputSignal[i]
		= inverseFilter(
			smoothingFilter(inputSignal, DATA_LENGTH, i, 5)
			, DATA_MAX);

	printf("\n\n**** Output Signal ****\n");
	printGraph(outputSignal, DATA_LENGTH, DATA_MAX);

	return 0;
}

