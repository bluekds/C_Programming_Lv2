#include <stdio.h>
#include "inc/treasureMap.h"

void* FindingTreasure(void* _map, int _depth) {
	// Write your code here!
}

int main(void) {
	void* map[MAX_SIZE] = { 0 };
	int hints[MAX_SIZE] = { 0 };
	int treasureSize = 0;

	treasureSize = getMap(map, hints);
	for (int i = 0; i < treasureSize; i++) {
		printf("%c", *((char*)FindingTreasure(map[i], hints[i])) );
	}
	printf("\n");
	return 0;
}