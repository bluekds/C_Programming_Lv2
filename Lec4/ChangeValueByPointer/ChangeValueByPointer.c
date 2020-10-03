#include <stdio.h>

void main(void) {
	int a = 10;
	int* pA = NULL;
	pA = &a;

	printf("[Before] a = %d\n", a);
	if (pA != NULL)
		*pA = 20;
	printf("[After] a = %d\n", a);
}