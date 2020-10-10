#include <stdio.h>

int sumArray(int* _arr, int _len) {
	int sum = 0;
	for (int i = 0; i < _len; i++) {
		sum += *_arr; _arr++;
	}
	return sum;
}

void main(void) {
	int data[3][5] = { 0 };
	int* pData = data;
	for (int i = 0; i < 3 * 5; i++) {
		*pData = i;
		printf("%d ", *pData);
		if ((i+1) % 5 == 0) printf("\n");
		pData++;
	}

	for (int i = 0; i < 3; i++) {
		printf("sum of row %d = %d\n", i, sumArray(data[i], 5));
	}
}