#include <stdio.h>
#include "inc/treasureMap.h"

char* FindingTreasure(char* _map, int _depth) {
	if (_depth == 0)
		return _map;
	else {
		unsigned long long nextPtrVal = *((unsigned long long*)_map);
		char* next = (char*)nextPtrVal;
		return FindingTreasure(next, _depth - 1);
	}
}

int main(void) {
	char* map[MAX_SIZE] = { 0 };
	int hints[MAX_SIZE] = { 0 };
	int treasureSize = 0;

	treasureSize = getMap(map, hints);
	for (int i = 0; i < treasureSize; i++) {
		printf("%c", *FindingTreasure(map[i], hints[i]));
	}
	printf("\n");
	return 0;
}