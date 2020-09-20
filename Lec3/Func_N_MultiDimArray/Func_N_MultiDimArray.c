#include <stdio.h>

int sum(int[][10], int);
int sumAll(int[][3][10], int);

int main(void) {
	int a[2][3][10] = { 0 };
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 10; k++)
				a[i][j][k] = 1;

	int total = sumAll(a, 2);
	printf("sum of all elements = %d\n", total);
}

int sum(int a[][10], int rowSize) {
	int result = 0;
	for (int row = 0; row < rowSize; row++)
		for (int i = 0 ; i < 10 ; i++)
			result += a[row][i];
	return result;
}

int sumAll(int a[][3][10], int pageSize){
	int result = 0;
	for (int page = 0; page < pageSize; page++)
		result += sum(a[page], 3);
	return result;
}
