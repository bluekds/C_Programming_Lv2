#include <stdio.h>

void main(void) {
	int a = 10;
	int* p = &a;	// pointer
	int** dP = &p;	// double pointer

	printf("a=%d\t&a=%p\n", a, &a);
	printf("*p=%d\tp=%p\t&p=%p\n", *p, p, &p);
	printf("**dP=%d\t*dp=%p\tdp=%p\n", **dP, *dP, dP);
}