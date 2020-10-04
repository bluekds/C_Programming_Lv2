#include <stdio.h>

int* getSum(int* a, int* b) {
	int sum = *a + *b;
	return &sum;
}

int setArray(void) {
	int array[100] = { 0 };
	return array[0];
}

void main(void) {
	int a = 20, b = 10;
	int* sum = getSum(&a, &b);

	setArray();
	printf("Sum = %d\n", *sum);
}
