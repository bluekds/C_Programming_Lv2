#include <stdio.h>

extern void printValue(void);
extern int valA; // valA is defined in another file

void main(void)
{
	printValue();
	valA = 10;
	printValue();
}