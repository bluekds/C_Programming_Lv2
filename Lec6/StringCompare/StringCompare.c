#include <stdio.h>

int stringCompare(const char* _str1, const char* _str2) {
	if (_str1 == NULL || _str2 == NULL) return -1;
	while (*_str1 == *_str2) {	// compare the current characters
		if (*_str1 == '\0')		// end of the string 1
			return 0;
		_str1++; _str2++;		// move to next character
	}
	return (unsigned char)*_str2 - (unsigned char)*_str1;
}

int main(int argc, char* argv[]) {
	char str1[255] = { 0 }, str2[255] = { 0 };
	printf("Enter str1: "); gets_s(str1, 255);
	printf("Enter str2: "); gets_s(str2, 255);

	if (stringCompare(str1, str2) == 0)
		printf("Two strings are same!");
	else
		printf("Two strings are different.");
}

char* strtok(char* str, const char *delimiters)