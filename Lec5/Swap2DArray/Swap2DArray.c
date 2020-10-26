#include <stdio.h>

void print2DArray(int** _arr, int _rowSize, int _colSize) {
	for (int i = 0; i < _rowSize * _colSize; i++) {
		printf("%d ", *_arr); ((int*)_arr)++;
		if ((i + 1) % _colSize == 0) printf("\n");
	}
}

void swap2DArray(int*** _A, int*** _B) {
	int** temp = *_A;
	*_A = *_B;
	*_B = temp;
}

void main(void) {
	// 2D array
	int A[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int B[2][3] = { {10, 20, 30}, {40, 50, 60} };
	
	int** pA = A;
	int** pB = B;

	printf("- Array A\n");  print2DArray(pA, 2, 3);
	printf("- Array B\n");  print2DArray(pB, 2, 3);

	swap2DArray(&pA, &pB);
	printf("*** After Swap() *** \n");

	printf("- Array A\n");  print2DArray(pA, 2, 3);
	printf("- Array B\n");  print2DArray(pB, 2, 3);
}