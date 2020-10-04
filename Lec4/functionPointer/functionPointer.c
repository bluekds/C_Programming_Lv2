#include <stdio.h>

int sum(int _a, int _b) { return _a + _b; }
int sub(int _a, int _b) { return _a - _b; }
int mul(int _a, int _b) { return _a * _b; }

// Get function pointer as a parameter
void printResult(int _a, int _b, int(*_pf)(int, int)) {
	printf("Result = %d\n", _pf(_a, _b));
}

void main(void) {
	int a = 0, b = 0;
	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);

	int (*pFunc)(int, int) = sum; // Function pointer
	printf("Sum = %d\n", pFunc(a, b));

	pFunc = sub;
	printResult(a, b, pFunc);

	int (*pFuncs[3])(int, int) = { sum, sub, mul }; // Function pointer array
	int op = 0;
	printf("Select function: 1.sum, 2.sub, 3.mul: ");
	scanf_s("%d", &op);
	printf("Result = %d\n", pFuncs[op-1](a, b));
}