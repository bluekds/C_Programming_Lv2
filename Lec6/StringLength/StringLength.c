#include <stdio.h>

int stringLength(char* _str) {
	if (_str == NULL) return 0;

	int len = 0;
	while (_str[len] != '\0') // The end of string is '\0'
		len++;

	return len;
}

int main(int argc, char* argv[]) {
	char str[255] = { 0 };
	if (gets_s(str, 255) == NULL)
		return -1;
	printf("The length of the string is %d\n", stringLength(str));

	return 0;
}