#include <stdio.h>

#include "inc\DS_Info.h"
#include "inc\GD_Info.h"

int main(void)
{
	DS_name();
	printf(" ("); DS_hometown(); printf(", %d)\n", DS_age());
	printf("student ID : ");
	for (int i = 1; i <= 8; i++)
		printf("%d", DS_studentID(i));
	printf("\n");
	DS_message();

	printf("--------------------\n");

	GD_name();
	printf(" ("); GD_hometown(); printf(", %d)\n", GD_age());
	printf("student ID : ");
	for (int i = 1; i <= 8; i++)
		printf("%d", GD_studentID(i));
	printf("\n");
	GD_message();
}