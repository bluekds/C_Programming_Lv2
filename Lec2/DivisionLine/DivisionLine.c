/** Division Line Function
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/09/06
*/

#include <stdio.h> 

/** Function that prints a division line */
void printDivLine(void) {
	for (int i = 0; i < 10; i++)
		printf("-");
	printf("\n");
}

int main(void) {
	int a = 0, b = 0;

	// Get two numbers
	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);
	printDivLine();

	// Task 1: Add two numbers
	printf("%d + %d = %d\n", a, b, (a + b));
	printDivLine();

	// Task 2: Substract two numbers
	printf("%d * %d = %d\n", a, b, (a * b));
	printDivLine();

	// Task 3: Divide two numbers
	printf("%d / %d = %.2f\n", a, b, ((float)a / b));

	return 0;
}