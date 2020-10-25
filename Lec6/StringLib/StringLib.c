#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char str1[255] = "Hello world";
	char str2[255] = "I love C ";

	printf("|str1| = %d, |str2| = %d\n", strlen(str1), strlen(str2));

	strcpy(str1, "Programming");
	printf("[After strcpy] str1: %s, str2: %s\n", str1, str2);

	strcat(str2, str1);
	printf("[After strcat] str1: %s, str2: %s\n", str1, str2);

	return 0;
}