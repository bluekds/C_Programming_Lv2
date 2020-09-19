#include <stdio.h>

int c = 0; // static variable

void inc(void);

int main(void)
{
	inc(); 	inc();	inc();
	return 0;
}

void inc(void)
{
	static int a = 0; // lifetime of a is from program start to end
	int b = 0;	// lifetime of b is from function start to end

	printf("a: %d, b: %d, c: %d\n", a, b, c);

	a++; b++; c++;
}