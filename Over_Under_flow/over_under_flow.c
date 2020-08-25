/** Examples of the overflow and underflow
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/08/25
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	// Overflow example
	unsigned int x = UINT_MAX;
	printf("[0] x = %u\n", x);
	x = x + 1;
	printf("[1] x + 1 = %u\n", x);

	// Underflow exmaple
	float e1 = 1.23e-38;
	float e2 = 1.23e-46;
	printf("e1 = %e\n",e1);
	printf("e2 = %e\n",e2);

	// Effective number example
	float y1 = 1.234567890123456789;
	double y2 = 1.234567890123456789;
	printf("y1 (float) = %.25f\n", y1);
	printf("y2 (double) = %.25f\n", y2);

	return 0;
}
