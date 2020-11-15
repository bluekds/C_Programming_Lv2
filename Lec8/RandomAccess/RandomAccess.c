#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;

	fp = fopen("text.txt", "w");
	fputs("1234567890", fp);
	fclose(fp);

	fp = fopen("text.txt", "r");

	fseek(fp, 3, SEEK_SET);
	printf("fseek(fp, 3, SEEK_SET) = %c \n", fgetc(fp));

	fseek(fp, -2, SEEK_END);
	printf("fseek(fp, -1, SEEK_END) = %c \n", fgetc(fp));

	fclose(fp);
	return 0;
}
