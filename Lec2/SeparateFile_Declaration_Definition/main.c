/** Example of using separate files for function declaration and defnition
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/09/06
*/

#include <stdio.h> 
#include "myFunc.h"

/** Main function */
int main(void)
{
	// Function call before writing function definition
	int funcOut = myFunc(10);

	printf("The output of the function = %d\n", funcOut);
	return 0;
}