#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned int TYPE_DATA;

TYPE_DATA sum(TYPE_DATA a, TYPE_DATA b) {
	return a + b;
}
TYPE_DATA mul(TYPE_DATA a, TYPE_DATA b) {
	return a * b;
}

int main(void) {
	TYPE_DATA x, y;
	scanf("%d %d", &x, &y);
	printf("Sum = %d\n", sum(x, y));
}