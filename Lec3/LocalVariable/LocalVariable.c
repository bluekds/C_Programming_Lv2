#include <stdio.h>

int main(void) {
	int a = 10, b = 0;
	printf("a = %d, b = %d\n", a, b);

	for (int i = 0; i < 1; i++) {
		int a;
		b++;
		printf("a = %d, b = %d\n", a, b);
	}

	{
		int a;
		b++;
		printf("a = %d, b = %d\n", a, b);
	}
}
