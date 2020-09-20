#include <stdio.h>

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}

int main(void)
{
	int x = 0;
	long f;

	printf("Enter an integer number:");
	scanf_s("%d", &x);

	f = factorial(x);
	printf("The factorial of %d is %d.\n", x, f);

	return 0;
}
