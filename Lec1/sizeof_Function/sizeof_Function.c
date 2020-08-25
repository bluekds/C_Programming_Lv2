/** Exaple usages of sizeof() function
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/08/23
*/

#include <stdio.h>

int main(void)
{
	unsigned int x = 0;
	printf("Size of data type 'int' : %d byte(s)\n", sizeof(int)) ;
	printf("Size of the variable 'x' : %d byte(s)\n", sizeof(x)) ;
	printf("Size of the number '10' : %d byte(s)\n", sizeof(10)) ;

	return 0;
}