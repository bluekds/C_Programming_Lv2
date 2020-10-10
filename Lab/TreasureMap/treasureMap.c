#include "treasureMap.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define DEBUG_MODE

int getMap(void* _map[], int _hints[]) {
	char* treasure = (char*)malloc(sizeof(char) * MAX_SIZE);
	if (treasure == NULL) {
		printf("[getMap] Fail to allocate memory - treasure\n");
		return -1;
	}

	memset(treasure, 0, sizeof(char) * MAX_SIZE);
	strcpy_s(treasure, sizeof(char) * MAX_SIZE, "You understood the 'pointer' perfectly!");
	int len = strlen(treasure);

#ifdef DEBUG_MODE
	for (int i = 0; i < len; i++) {
		printf("%p ", &treasure[i]);
	}
	printf("\n\n");
#endif

	void*** wayPoints = (void***)malloc(sizeof(void**) * MAX_DEPTH);
	if (wayPoints == NULL) {
		printf("[getMap] Fail to allocate memory - wayPoints\n");
		return -1;
	}

	memset(wayPoints, 0, sizeof(void**) * MAX_DEPTH);
	for (int i = 0; i < MAX_DEPTH; i++) {
		wayPoints[i] = (void**)malloc(sizeof(void*) * len);
		if (wayPoints[i] == NULL) {
			printf("[getMap] Fail to allocate memory - wayPoints[i]\n");
			return -1;
		}
		memset(wayPoints[i], 0, sizeof(void*) * len);
	}

	// Gen hints
	int* hints = (int*)malloc(sizeof(int) * len);
	if (hints == NULL) {
		printf("[getMap] Fail to allocate memory - Hints\n");
		return -1;
	}

	memset(hints, 0, sizeof(int) * len);
	for (int i = 0; i < len; i++) {
		hints[i] = (int)(rand() % MAX_DEPTH);
	}

	// Get map
	for (int i = 0; i < len; i++) {
#ifdef DEBUG_MODE
		printf("%d ", hints[i]);
#endif
		wayPoints[hints[i]][i] = &treasure[i];
		for (int depth = hints[i] - 1; depth >= 0; depth--) {
			wayPoints[depth][i] = &wayPoints[depth + 1][i];
		}
	}

#ifdef DEBUG_MODE
	printf("\n");
	for (int i = 0; i < MAX_DEPTH; i++) {
		for (int j = 0; j < len; j++)
			printf("%p ", wayPoints[i][j]);
		printf("\n");
	}
#endif

	if (_hints == NULL || _map == NULL)
		return -1;

	for (int i = 0; i < len; i++) {
		_map[i] = (void*)wayPoints[0][i];
		_hints[i] = hints[i];
	}

	return len;
}