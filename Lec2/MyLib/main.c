/** Example of making user-defined library
* (C Programming Lv.2 (CPA141) Lecture 2)
@author Duksu Kim
@date	2020/09/06
*/

#include <stdio.h>
#include "MyLib.h"

int main(void) {
	printf("My name = ");
	printDS_Name();

	printf("My student ID = ");
	printDS_StudentID();

	return 0;
}
