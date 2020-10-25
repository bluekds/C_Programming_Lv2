#include <stdio.h>

int main(int argc, char* argv[]) {
	char str1[4] = "You";
	char str2[4] = { 'c', 'a', 'n', '\0'};
	char str3[] = "do C language well!";

	printf("%s %s %s\n", str1, str2, str3);
	return 0;
}