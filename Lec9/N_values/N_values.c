#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 100

int main(void) {
	int values[N] = { 0 };
	int numValues = 0;
	scanf("%d", &numValues);
	for (int i = 0; i < numValues; i++)
		scanf("%d", &values[i]);

	for (int i = 0; i < numValues; i++)
		printf("%d ", values[i]);
	printf("\n");

	return 0;
}