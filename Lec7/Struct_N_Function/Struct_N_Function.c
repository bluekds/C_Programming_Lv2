#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Card {
	char	name[10];	
	float	power;		
};

void printCard_callByVal(struct Card _card);
void printCard_callByRef(struct Card* _card);

int main(void) {
	struct Card cardA = { "Human", 9.8 }, cardB = { "Elf", 11.2 };

	printCard_callByVal(cardA);
	printCard_callByRef(&cardB);
	return 0;
}

void printCard_callByVal(struct Card _card) {
	printf("--------------\n");
	printf("[%s] power = %.2f\n", _card.name, _card.power);
	printf("--------------\n");
}

void printCard_callByRef(struct Card* _card) {
	printf("--------------\n");
	printf("[%s] power = %.2f\n", (*_card).name, (*_card).power);
	printf("--------------\n");
}
