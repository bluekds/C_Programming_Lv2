#include <stdio.h>

void printArray(int* _array, int _len) {
	for (int i = 0; i < _len; i++) printf("%d ", _array[i]);
	printf("\n");
}

void swapArray(int** _arrayA, int** _arrayB) {
	int* tempArray = *_arrayA;
	*_arrayA = *_arrayB;
	*_arrayB = tempArray;
}

void main(void) {
	int arrayA[5] = { 11, 12, 13, 14, 15 };
	int arrayB[5] = { 21, 22, 23, 24, 25 };

	int* pA = arrayA;
	int* pB = arrayB;

	printArray(pA, 5);
	printArray(pB, 5);

	swapArray(&pA, &pB);
	printf("--- After swapArray() ---\n");

	printArray(pA, 5);
	printArray(pB, 5);
}