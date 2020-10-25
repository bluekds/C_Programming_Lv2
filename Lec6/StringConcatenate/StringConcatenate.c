#include <stdio.h>

int stringLength(char* _str);
char* stringCopy(char* _dst, const char* _src);

char* stringConcatenate(char* _dst, const char* _src) {
	if (_dst == NULL) return NULL;
	int len = stringLength(_dst);
	stringCopy(&_dst[len], _src);
}

int main(int argc, char* argv[]) {
	char str1[255] = "My name is ";
	char str2[255] = { 0 };
	printf("str1 = %s\n", str1);

	if (gets_s(str2, 255) == NULL) return -1;
	if (stringConcatenate(str1, str2) == NULL)	return -1;

	printf("str1 = %s\n", str1);
	return 0;
}

int stringLength(char* _str) {
	if (_str == NULL) return 0;

	int len = 0;
	while (_str[len] != '\0') // The end of string is '\0'
		len++;

	return len;
}

char* stringCopy(char* _dst, const char* _src) {
	if (_dst == NULL) return NULL;
	int i = 0;
	for (i; _src[i] != '\0'; i++)
		_dst[i] = _src[i];
	_dst[i] = '\0';
	return _dst;
}
