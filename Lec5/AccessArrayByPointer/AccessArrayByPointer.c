#include <stdio.h>

void main(void) {
	int a[5] = { 1, 2, 3, 4, 5 };
	int* pArr = a;

	printf("*(a+1)=%d\n", *(a + 1));
	printf("*(pArr+1)=%d\n\n", *(pArr + 1));

	printf("value of 'a':\t\t%p\n", a);
	printf("address of 'a[1]':\t%p\n\n", &a[1]);

	printf("value of 'pArr':\t%p\n", pArr);
	printf("value of 'pArr+1':\t%p\n\n", pArr + 1);

	// Print elements of the array a
	for (int i = 0; i < 5; i++) {
		printf("(pArr:%p), *pArr = %d\n", pArr, *pArr);
		pArr++;
	}
}