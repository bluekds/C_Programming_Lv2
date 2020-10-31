#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM_CARDS 3

struct Card {
	char	name[10];	// 10 bytes
	int		power;		// 4 bytes
};

int main(void) {
	struct Card cards[NUM_CARDS] = { 0 };
	int elementSize = sizeof(struct Card);
	printf("The num of elements in the array cards:%d\n"
		, sizeof(cards) / elementSize);

	printf("elementSize = %d\n", elementSize);

	printf("Sizeof(struct Card): %d bytes\n", sizeof(struct Card));
	printf("addr of name: %p\n", cards[0].name);
	printf("addr of power: %p\n", &cards[0].power);

	return 0;
}