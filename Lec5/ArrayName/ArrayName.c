#include <stdio.h>

void funcByArray(int input[]) {
	printf("value of 'input' : %p\n", input);
	printf("address of 'input' : %p\n", &input);
	printf("input[3] = %d\n", input[3]);
}

void funcByPointer(int *input) {
	printf("value of 'input' : %p\n", input);
	printf("address of 'input' : %p\n", &input);
	printf("input[3] = %d\n", input[3]);
}

void main(void) {
	int a[5] = { 1, 2, 3, 4, 5 };
	printf("value of 'a' : %p\n", &a);
	printf("------\n");
	funcByArray(a);
	printf("------\n");
	funcByPointer(a);
}