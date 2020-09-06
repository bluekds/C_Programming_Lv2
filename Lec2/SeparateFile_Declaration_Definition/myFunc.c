/** Example of using separate files for function declaration and defnition
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/09/06
*/

#include <stdio.h>

/** Function Definition */
int myFunc(int _input) {
	int output = _input * 2;
	printf("I got %d\n", _input);
	return output; // return value
}