#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[]) {
	int c = 0;

	while ((c = getchar()) != EOF) {
		if (isupper(c))
			c = tolower(c);
		else
			c = toupper(c);
		putchar(c);
	}

	return 0;
}