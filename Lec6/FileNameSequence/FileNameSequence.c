#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char* buf[255] = { 0 };
	char* baseName = "data";

	for (int i = 0; i < 10; i++) {
		sprintf(buf, "%s%d.txt", baseName, i);
		printf("%s\n", buf);
	}

	return 0;
}