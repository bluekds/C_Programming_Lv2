/** Exaple of array intialization methods
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/08/23
*/

#include <stdio.h>

int main(void)
{
	int array1[5] = { 0 };
	int array2[5] = { 1, 2, 3, 4, 5 };
	int array3[] = { 10, 20, 30, 40, 50 };

	printf("Array 1 : ");
	for (int i = 0; i < 5; i++) printf("%d ", array1[i]);
	printf("\n");

	printf("Array 2 : ");
	for (int i = 0; i < 5; i++) printf("%d ", array2[i]);
	printf("\n");

	printf("Array 3 (Array size = %d): ", sizeof(array3)/sizeof(int));
	for (int i = 0; i < 5; i++) printf("%d ", array3[i]);
	printf("\n");

	return 0;
}