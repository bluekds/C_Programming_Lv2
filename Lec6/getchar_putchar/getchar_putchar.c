#include <stdio.h>

int main(int argc, char* argv[]) {
	int c = 0;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}

	return 0;
}