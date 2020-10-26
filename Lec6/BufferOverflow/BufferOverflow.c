#include <stdio.h>

int main(void) {
	char str[10] = { 0 };
	gets_s(str, 10);
	puts(str);
}