#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM_CARDS 3

struct Card {
	char	name[10];	// 10 bytes
	int		power;		// 4 bytes
};

int main(void) {
	struct Card cards[NUM_CARDS] = { 0 };

	for (int i = 0; i < NUM_CARDS; i++) {
		printf("Card-%d Info: ", i); scanf("%s %d", cards[i].name, &cards[i].power);
	}

	int best = 0;
	for (int i = 1; i < NUM_CARDS; i++)
		if (cards[i].power > cards[best].power)
			best = i;

	printf("%s is the best card!\n", cards[best].name);

	return 0;
}