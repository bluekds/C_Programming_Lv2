#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Card {
	char	name[10];	// 10 bytes
	int		power;		// 4 bytes
};

int main(void) {
	struct Card cardA = { 0 }, cardB = { 0 };

	printf("CardA Name: ");	scanf("%s", cardA.name);
	printf("CardA Power: "); scanf("%d", &cardA.power);

	printf("CardB Name: ");	scanf("%s", cardB.name);
	printf("CardB Power: "); scanf("%d", &cardB.power);

	if (cardA.power == cardB.power)
		printf("Draw!");
	else if(cardA.power > cardB.power)
		printf("%s win!", cardA.name);
	else
		printf("%s win!", cardB.name);

	return 0;
}