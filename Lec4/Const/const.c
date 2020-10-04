#include <stdio.h>

int getMax(const int* a, int* b) {
	//*a = 10; // error
	return (*a > * b ? *a : *b);
}

void main(void) {
	int a = 20, b = 10;
	printf("Max = %d\n", getMax(&a, &b));

	const int *pA = &a; // *pA is constant
	*pA = 100;	// error
	pA = &b;	// okay

	int* const pB = &b; // pB is constant
	*pB = 100;	// okay
	pB = &a;	// error
}