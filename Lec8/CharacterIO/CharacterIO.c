#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("test.txt", "w");
	if (!fp) {
		printf("Fail to open the file as the write mode.\n"); return 0;
	}

	fputc('a', fp);	fputc('B', fp);	fputc('1', fp);
	fclose(fp);

	if (!(fp = fopen("test.txt", "r"))) {
		printf("Fail to open the file as the read mode.\n"); return 0;
	}

	char c = 0;
	while ((c = fgetc(fp)) != EOF)
		printf("%c", c);

	fclose(fp);
	return 0;
}
