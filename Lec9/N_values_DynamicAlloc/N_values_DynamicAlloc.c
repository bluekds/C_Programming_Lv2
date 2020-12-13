#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numValues = 0;
	scanf("%d", &numValues);

	int* values = (int*)malloc(sizeof(int)*numValues);
	memset(values, 0, sizeof(int) * numValues);

	for (int i = 0; i < numValues; i++)
		scanf("%d", &values[i]);

	for (int i = 0; i < numValues; i++)
		printf("%d ", values[i]);
	printf("\n");

	if (values != NULL) {
		free(values);
		values = NULL;
	}
	return 0;
}