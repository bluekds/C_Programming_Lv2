#include <stdlib.h>
#include <stdio.h>

#define DATASIZE (1024*1024*512) // 1M

int main(void) {
	//int stackMem[DATASIZE] = { 0 };
	//printf("%d\n", stackMem[10]);

	int* heapMem = (int*)malloc(sizeof(int) * DATASIZE);
	printf("%d\n", heapMem[10]);

	getchar();	return 0;
}