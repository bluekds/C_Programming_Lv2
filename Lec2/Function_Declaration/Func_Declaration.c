/** Example of function declaration
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/09/06
*/

#include <stdio.h> 

/** Function declaration
* @param	_input	A parameter of this function
* @return	int		The return type of this function
*/
int functionName(int _input);

/** Main function */
int main(void)
{
	// Function call before writing function definition
	int funcOut = functionName(10);

	printf("The output of the function = %d\n", funcOut);
	return 0;
}

/** Function Definition */
int functionName(int _input) {
	int output = _input * 2;
	printf("I got %d\n", _input);
	return output; // return value
}