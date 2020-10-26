#include <stdio.h>

int main(int argc, char* argv[]) {
	char* strs[3]
		= { "first", "second", "third" };

	for (int i = 0; i < 3; i++)
		printf("%s ", strs[i]);
	printf("\n");

	scanf("%s", strs[0]); // error!

	return 0;
}