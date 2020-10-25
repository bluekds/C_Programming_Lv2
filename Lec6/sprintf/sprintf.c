#include <stdio.h>

int main(int argc, char* argv[]) {
	int valInt = 10;
	float valFloat = 3.14;

	char str[255] = { 0 };
	printf("str = %s\n", str);

	sprintf(str, "valInt = %d, valFloat = %.2f\n", valInt, valFloat);
	printf("str = %s\n", str);

	return 0;
}