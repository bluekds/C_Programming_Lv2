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
	struct Card cardA = { "������", 6, 4, 4, "������.." };

	printf("%s(Cost: %d)\n", cardA.name, cardA.cost);
	printf("Atk: %d, HP: %d\n", cardA.atk, cardA.hp);

	printf("\n���ֿ� ���߽��ϴ�\n\n");
	cardA.atk = 2; 	cardA.hp = 2;

	printf("%s(Cost: %d)\n", cardA.name, cardA.cost);
	printf("Atk: %d, HP: %d\n", cardA.atk, cardA.hp);

}