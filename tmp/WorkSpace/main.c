#include <stdio.h> 

int functionName (int _input) {
	int output = 0;
	printf("functin %d\n", _input);
	return output;
}

int main (void) {
	functionName(10);
	int (*funcPointer)(int) = functionName;
	(*funcPointer)(20);
	return 0;
}