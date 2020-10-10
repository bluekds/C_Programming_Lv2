#include <stdio.h>

void main(void) {
	int a[5] = { 5, 4, 3, 2, 1 };
	int* p = a;

	printf("*(p+4)=%d\n", *(p + 4));
	printf("(*p+4)=%d\n", (*p + 4));

	p = &a;
	printf("*++p: %d\n", *++p);
	p = &a;
	printf("++*p: %d\n", ++*p);
}