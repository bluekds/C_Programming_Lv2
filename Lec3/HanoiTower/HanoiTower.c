#include <stdio.h>

// Move n blocks [from] -> [to]
void hanoiTower(int numBlocks, char from, char temp, char to);

int main(void)
{

	int x = 0;
	printf("Enter the number of blocks: ");
	scanf_s("%d", &x);

	hanoiTower(x, 'A', 'B', 'C');
}

void hanoiTower(int numBlocks, char from, char temp, char to)
{
	if (numBlocks == 1)
		printf("Move the block 1: %c -> %c.\n", from, to);
	else
	{
		hanoiTower(numBlocks - 1, from, to, temp);
		printf("Move the block %d: %c -> %c.\n", numBlocks, from, to);
		hanoiTower(numBlocks - 1, temp, from, to);
	}
}

