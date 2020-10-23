#include <stdio.h>

int main(void) {
	char str1[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char str2[5] = { 'H', 'e', 'l', 'l', 'o' };

	printf("Ascii code of NULL character : %d\n", '\0');
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	return 0;
}