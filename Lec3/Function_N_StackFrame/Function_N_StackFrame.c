#include <stdio.h>

void funcB(int input, int a)
{
	a++;
	input++;
	printf("[funcB] input: %d, a: %d\n", input, a);
}

void funcA(int input)
{
	int a = 0;
	input++;
	funcB(input, a);
	printf("[funcA] input: %d, a: %d\n", input, a);
}

int main(void)
{
	int input = 0;
	funcA(input);
	printf("[Main] input: %d\n", input);
	return 0;
}