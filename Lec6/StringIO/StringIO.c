#include <stdio.h>

int main(int argc, char* argv[]){
	char str[255] = { 0 };

	printf("Enter a sentence : ");
	if (gets_s(str, 255) == NULL) {
		printf("Fail to get a string\n");
		return -1;
	}

	if (puts(str) == EOF) {
		printf("Fail to put a string");
		return 0;
	}
}