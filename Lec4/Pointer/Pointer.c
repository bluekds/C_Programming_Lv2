#include <stdio.h>

void main(void) {
	int a = 10, b = 20;
	int *p = NULL;

	printf("size of 'a' : %d bytes\n", (int)sizeof(a));
	printf("size of 'p': %d bytes\n", (int)sizeof(p));

	p = &a;
	*p = 20;
	printf("Value of 'a' : %d\n", a);
	printf("Address of 'a' : %p\n", &a);
	printf("Value of 'p' : %p\n", p);
	printf("Value at the address pointed by 'p' : %d\n\n", *p);

	p = &b;
	printf("Value of 'b' : %d\n", b);
	printf("Address of 'b' : %p\n", &b);
	printf("Value of 'p' : %p\n", p);
	printf("Value at the address pointed by 'p' : %d\n", *p);
}