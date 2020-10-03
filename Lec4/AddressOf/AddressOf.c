#include <stdio.h>

void main(void) {
	int a = 0;
	printf("Address of the variable 'a' : %p\n", &a);
	printf("Address of the variable 'a' : %0x\n", &a);

	scanf_s("%d", &a);
	printf("a = %d\n", a);
}