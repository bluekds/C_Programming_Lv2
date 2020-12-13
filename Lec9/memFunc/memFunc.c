#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

#define DATASIZE 1024

int main(void) {
	int array[DATASIZE] = { 0 };
	for (int i = 0; i < DATASIZE; i++) array[i] = i;

	int* ptr = (int*)malloc(sizeof(int) * DATASIZE);
	printf("ptr[10] = %d\n", ptr[10]);

	memset(ptr, 0, sizeof(int) * DATASIZE);
	printf("ptr[10] = %d\n", ptr[10]);

	memcpy(ptr, array, sizeof(int) * DATASIZE);
	printf("ptr[10] = %d\n", ptr[10]);

	if (ptr != NULL) {
		free(ptr);
		ptr = NULL;
	}

	return 0;
}