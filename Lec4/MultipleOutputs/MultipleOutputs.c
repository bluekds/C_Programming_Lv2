#include <stdio.h>

void multipleArithmetics
(int _a, int _b, int* _pSum, int* _pSub, int* _pMul, float* _pDiv)
{
	*_pSum = _a + _b;
	*_pSub = _a - _b;
	*_pMul = _a * _b;
	*_pDiv = (float)_a / _b;
}

void main (void) {
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);

	int sum = 0, sub = 0, mul = 0;
	float div = 0.f;

	multipleArithmetics(a, b, &sum, &sub, &mul, &div);
	printf("a+b=%d, a-b=%d, a*b=%d, a/b=%.2f\n", sum, sub, mul, div);
}