#include <stdio.h>

int main(int argc, char* argv[]) {
	char sInt[] = "10";;
	char sFloat[] = "3.14";

	int valInt = 0;
	float valFloat = 0;
	printf("%d, %f\n", valInt, valFloat);

	sscanf(sInt, "%d", &valInt);
	sscanf(sFloat, "%f", &valFloat);
	printf("%d, %f\n", valInt, valFloat);

	return 0;
}
