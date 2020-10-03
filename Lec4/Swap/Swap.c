#include <stdio.h>

void swap_CallByVal(int _a, int _b) {
	int temp = _a;
	_a = _b;
	_b = temp;
	printf("[In swap_CallByVal()] a = %d, b=%d\n", _a, _b);
}

void swap_CallByRef(int* _pA, int* _pB) {
	int temp = *_pA;
	*_pA = *_pB;
	*_pB = temp;
	printf("[In swap_CallByRef()] a = %d, b=%d\n", *_pA, *_pB);
}

void main(void)
{
	int a = 10, b = 20;
	printf("a = %d, b=%d\n\n", a, b);

	swap_CallByVal(a, b);
	printf("[After swap_CallByVal()]a = %d, b=%d\n\n", a, b);

	swap_CallByRef(&a, &b);
	printf("[After swap_CallByRef()]a = %d, b=%d\n", a, b);
}