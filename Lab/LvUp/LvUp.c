#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_SIZE 255
#define LEVEL_UP_RATE 1.1f;

enum Charater_Type { };
typedef unsigned int UINT;

typedef struct {
	// define this structure
} character;

void printCharInfo(character* _char);
int setCharInfo(character* _char);
int levelUp(character* _char);

int ID_base = 1000;

int main() {
	character myChar = { 0 };

	if (setCharInfo(&myChar) < 0) {
		printf("Error!\n");
		return 0;
	}

	printCharInfo(&myChar);

	for (int i = 0; i < 5; i++) {
		levelUp(&myChar);
		printCharInfo(&myChar);
	}

	return 0;
}

int setCharInfo(character* _char) {
	// write your code here
	return _char->ID;
}

int levelUp(character* _char){
	// write your code here
	return _char->ID;
}

void printCharInfo(character* _char) {
	// write your code here
}