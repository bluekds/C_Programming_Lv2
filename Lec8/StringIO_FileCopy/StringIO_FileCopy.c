#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 255

int main(void)
{
	FILE *fpSrc = NULL, *fpDst = NULL;
	char fileName[BUF_SIZE] = { 0 }, buf[BUF_SIZE] = { 0 };

	printf("Input file name: "); scanf("%s", fileName);
	if ((fpSrc = fopen(fileName, "r")) == NULL) {
		fprintf(stderr, "Fail to open the input file - %s\n", fileName);
		exit(-1);
	}

	printf("New file name: "); scanf("%s", fileName);
	if ((fpDst = fopen(fileName, "w")) == NULL) {
		fprintf(stderr, "Fail to open the input file - %s\n", fileName);
		exit(-1);
	}

	// File Copy
	while (fgets(buf, 100, fpSrc) != NULL)
		fputs(buf, fpDst);

	fclose(fpSrc);
	fclose(fpDst);

	return 0;
}
