#include <stdio.h>

char* stringCopy(char* _dst, const char* _src) {
	if (_dst == NULL) return NULL;
	int i = 0;
	for (i; _src[i] != '\0'; i++)
		_dst[i] = _src[i];
	_dst[i] = '\0';
	return _dst;
}

int main(int argc, char* argv[]) {
	char str1[255] = { 0 };
	char str2[] = "My name is Kim!";
	printf("str2 = %s\n", str2);

	if (gets_s(str1, 255) == NULL) return -1;
	if (stringCopy(str2, str1) == NULL)	return -1;

	printf("str2 = %s\n", str2);
	return 0;
}