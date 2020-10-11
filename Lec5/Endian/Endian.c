#include <stdio.h>

void main(void) {
	unsigned int a = 0x00ABCDEF;
	printf("a : %x\n", a);

	unsigned char* p = &a;
	printf("*p : %x\n", *p);

	if (*p == 0xef)
		printf("My system uses little-endian!\n");
	else
		printf("My system uses big-endian!\n");
}