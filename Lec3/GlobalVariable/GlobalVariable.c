#include <stdio.h>

int counter;

void inc(void) {
	counter++;
}

int main(void) {
	counter = 10;

	printf("Before calling inc() : % d\n", counter);
		inc();
	printf("After calling inc() : % d\n", counter);

		return 0;
}
