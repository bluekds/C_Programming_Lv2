#include <stdio.h> 

#define FLOAT_ZERO (10e-6)

int main(void)
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("x == y ? : ");
	if (x == y)
		printf("Same number!\n");
	else
		printf("Different number\n");

	printf("x - y < FLOAT_ZERO ? : ");
	if ((x - y) < FLOAT_ZERO)
		printf("Same number!\n");
	else
		printf("Different number\n");

	return 0;
}
