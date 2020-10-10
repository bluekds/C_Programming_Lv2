#include <stdio.h>

#define ROW_SIZE 3
#define COL_SIZE 5

void main(void) {
	int arr[ROW_SIZE][COL_SIZE] = { 0 };
	for (int row = 0; row < ROW_SIZE; row++)
		for (int col = 0; col < COL_SIZE; col++)
			arr[row][col] = 10 * row + col;

	int* pArr = arr;
	printf("%d\n", arr[1][3]);
	printf("%d\n", *(pArr + 1* COL_SIZE + 3));

	for (int row = 0; row < ROW_SIZE; row++) {
		for (int col = 0; col < COL_SIZE; col++)
			printf("%d\t", *(pArr + (row * COL_SIZE) + col));
		printf("\n");
	}
}