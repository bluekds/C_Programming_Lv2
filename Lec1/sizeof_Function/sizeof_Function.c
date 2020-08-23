#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("Size of data type 'int' : %d byte(s)\n", sizeof(int));
	printf("Size of the variable 'x' : %d byte(s)\n", sizeof(x));
	printf("Size of the number '10' : %d byte(s)\n", sizeof(10));

	return 0;
}