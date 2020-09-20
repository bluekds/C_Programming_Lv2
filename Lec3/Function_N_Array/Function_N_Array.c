#include <stdio.h>

int sum_callByVal(int a0, int a1, int a2) {
	int result = a0 + a1 + a2;
	a0 = 10;
	return result;
}

int sum_callByRef(int a[], int arraySize) {
	int result = 0;
	for (int i = 0; i < arraySize; i++)
		result += a[i];
	a[0] = 10;
	return result;
}

int main(void) {
	int a[3] = { 1, 2, 3 };
	
	printf("CallByVal: sum = %d, a[0] = %d\n"
		, sum_callByVal(a[0], a[1], a[2]), a[0]);
	printf("CallByRef: sum = %d, a[0] = %d\n"
		, sum_callByRef(a, 3), a[0]);
}