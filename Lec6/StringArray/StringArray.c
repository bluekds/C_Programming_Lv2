#include <stdio.h>
#include <string.h>

int main(int argc, char* argv) {
	char strs[3][6] = { "one", "two", "three" };
	for (int i = 0; i < 3; i++)
		printf("%s ", strs[i]);
	printf("\n");

	char buf[255] = { 0 };
	for (int i = 0; i < 3; i++) {
		printf("Enter string %d: ", i);
		scanf("%s", strs[i]);
	}

	for (int i = 0; i < 3; i++)
		printf("%s ", strs[i]);

	return 0;
}