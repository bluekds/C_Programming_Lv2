/** Example of using static library
* (C Programming Lv.2 (CPA141) Lecture 2)
@author Duksu Kim
@date	2020/09/06
*/

#include <stdio.h>
#include "MyLib.h" // The path of the header file

int main(void)
{
	printf("Name = ");
	printDS_Name();
	printf("Student ID = ");
	printDS_StudentID();
}