#include <stdio.h>

int main(void) {
	char str[10] = { 'H', 'e', 'l', 'l', 'o', ' ', 'C', '!', '\0'};

	int i = 0;
	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	printf("%s", str);

	return 0;
}