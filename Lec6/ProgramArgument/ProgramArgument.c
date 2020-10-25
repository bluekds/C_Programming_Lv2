#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	printf("argc = %d\n", argc);
	if (argc < 3) {
		printf("Usage: ProgramArgument.exe number1 number2\n");
		return 0;
	}
	for (int i = 0; i < argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);

	printf("result = %d\n", atoi(argv[1]) + atoi(argv[2]));
	return 0;
}