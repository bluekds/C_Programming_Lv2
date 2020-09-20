#include <stdio.h>

// Move n blocks [from] -> [to]
void hanoiTower(int nunBlocks, char from, char temp, char to);

int main(void)
{

	int x = 0;
	printf("Enter the number of blocks: ");
	scanf_s("%d", &x);

	hanoiTower(x, 'A', 'B', 'C');
}

void hanoiTower(int nunBlocks, char from, char temp, char to)
{
	if (nunBlocks == 1)
		printf("Move the block 1: %c -> %c.\n", from, to);
	else
	{
		hanoiTower(nunBlocks - 1, from, to, temp);
		printf("Move the block %d: %c -> %c.\n", nunBlocks, from, to);
		hanoiTower(nunBlocks - 1, temp, from, to);
	}
}

