#include <stdlib.h>

void memAlloc(void) {
	int* ptr = NULL;
	ptr = (int*)malloc(sizeof(int) * 1024 * 1024);
}

int main(void) {
	while (1)
		memAlloc();
	return 0;
}