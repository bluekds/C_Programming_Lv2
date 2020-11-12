#include <stdio.h>

struct Character { // 4 bytes
	unsigned int type : 1;	// 0: Human, 1: Elf
	unsigned int : 1;		// bit padding
	unsigned int lv : 6;
	unsigned int hp : 12;
	unsigned int mp : 12;
};

void printCharInfo(struct Character* _char) {
	if ((*_char).type == 0)
		printf("[Human] ");
	else
		printf("[Elf] ");

	printf("LV: %d, HP: %d, MP: %d\n", (*_char).lv, (*_char).hp, (*_char).mp);
}

int main(int argc, char* argv[]) {
	printf("Sizeof(struct Character): %d bytes\n", sizeof(struct Character));

	struct Character myChar = { 0, 32, 2047, 1258 };
	printCharInfo(&myChar);

	struct Character myChar2 = { 4, 100, 5047, 6258 }; // Overflow!
	printCharInfo(&myChar2);

	return 0;
}