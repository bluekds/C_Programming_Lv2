#include <stdio.h>
#include <math.h>
#include "FilterFunction.h"

#define PI (3.14)
#define	SIGNAL_LENGTH 100
#define SIGNAL_MAX 5
#define SIGNAL_MIN (-SIGNAL_MAX)

void genInput(int* _signal);
void printGraph(int *_signal);

int main(void)
{
	int inputSignal[SIGNAL_LENGTH] = { 0 };	genInput(inputSignal);
	printf("**** Input Signal ****\n");
	printGraph(inputSignal);

	// Apply filter here
	// Caution: You should not make another array for this problem
	int outputSignal[SIGNAL_LENGTH] = { 0 };
	for (int i = 2; i < SIGNAL_LENGTH-2; i++)
		outputSignal[i] =
			inverseFilter(smoothingFiler(inputSignal[i - 2], inputSignal[i - 1], inputSignal[i], inputSignal[i + 1], inputSignal[i + 2])
						, SIGNAL_MAX, SIGNAL_MIN);

	printf("\n\n**** Output Signal ****\n");
	printGraph(outputSignal);

	return 0;
}

void genInput(int* _signal) {
	for (int i = 0; i < SIGNAL_LENGTH; i++) {
		_signal[i] = sin((i * PI * 10) / 180.0) * SIGNAL_MAX;
	}
}

void printGraph(int *_signal) {
	for (int height = 0; height < SIGNAL_MAX * 2; height++) {
		for (int i = 2; i < SIGNAL_LENGTH - 2; i++) {
			_signal[i] == (height - SIGNAL_MAX) ? printf("*") : printf(" ");
		}
		printf("\n");
	}
}