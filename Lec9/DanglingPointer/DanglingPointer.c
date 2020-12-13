#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* p1 = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
		p1[i] = i * 2;
	printf("%d\n", p1[0]);
	free(p1);

	p1[0] = 1;	// dangling pointer

	return 0;
}