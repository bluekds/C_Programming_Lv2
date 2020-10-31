#include <stdio.h>
#include <string.h>

struct Card {
	char name[16];
	int cost;
	int atk;
	int hp;
	char skill[255];
};

int main(int argc, char* argv[])
{
	struct Card cardA = { "밀항자", 6, 4, 4, "전투의.." };

	printf("%s(Cost: %d)\n", cardA.name, cardA.cost);
	printf("Atk: %d, HP: %d\n", cardA.atk, cardA.hp);

	printf("\n저주에 당했습니다\n\n");
	cardA.atk = 2; 	cardA.hp = 2;

	printf("%s(Cost: %d)\n", cardA.name, cardA.cost);
	printf("Atk: %d, HP: %d\n", cardA.atk, cardA.hp);

}