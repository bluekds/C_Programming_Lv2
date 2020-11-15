#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char* fileName = "binary.bin";
	int buf[5] = { 0 };
	FILE* fp = fopen(fileName, "rb");

	if ( !fp ) {
		fprintf(stderr, "Fail to open the file - %s\n", fileName);
		exit(1);
	}

	size_t i = fread(buf, sizeof(int), 5, fp);
	printf("Success to read %d object(s).\n", i);
	for (int i = 0; i < 5; i++)
		printf("%d ", buf[i]);

	fclose(fp);
	return 0;
}
