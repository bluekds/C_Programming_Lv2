#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_SIZE 255
#define LEVEL_UP_RATE 1.1f;

enum Charater_Type { WARRIOR = 0b00, WIZARD = 0b01, ARCHER = 0b10, PRIEST = 0b11 };

typedef unsigned int UINT;

typedef struct {
	union {
		UINT ID;
		struct {
			UINT ID_dummy : 30;
			UINT type : 2;
		};
	};

	UINT Lv;
	char name[MAX_NAME_SIZE];

	union {
		UINT hp;
		struct {
			UINT hp_postFix : 2;
			UINT hp_dummy : 30;
		};
	};

	union {
		UINT ability;
		UINT st; // stamina
		UINT mp; // magic power
		UINT ar; // arrow
		UINT pr; // prayer
	};
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
	UINT type;
	printf("Select Type: 0.Warrior 1.Wizard 2.Archer 3.Priest : ");
	scanf("%d", &type);

	if (type > 3)
		return -1;

	// ID
	_char->ID = ID_base;
	_char->type = type;
	ID_base++;

	// Lv
	_char->Lv = 1;

	// Abilities
	printf("Enter [name] [HP] [ST|MP|AR|PR] : ");
	scanf("%s %d %d", _char->name, &_char->hp, &_char->ability);

	_char->hp_postFix = type;

	return 0;
}

int levelUp(character* _char) {
	_char->Lv++;
	_char->hp = _char->hp * LEVEL_UP_RATE;
	_char->hp_postFix = _char->type;

	_char->ability = _char->ability * LEVEL_UP_RATE;

	return 0;
}

void printCharInfo(character* _char) {
	printf("[Name] %s [ID] %u ", _char->name, _char->ID);

	switch (_char->type) {
	case WARRIOR:
		printf("[Warrior, Lv.%d] [HP] %d [ST] %d\n", _char->Lv, _char->hp, _char->st);
		break;
	case WIZARD:
		printf("[Wizard, Lv.%d] [HP] %d [MP] %d\n", _char->Lv, _char->hp, _char->mp);
		break;
	case ARCHER:
		printf("[Archer, Lv.%d] [HP] %d [AR] %d\n", _char->Lv, _char->hp, _char->ar);
		break;
	case PRIEST:
		printf("[Priest, Lv.%d] [HP] %d [PR] %d\n", _char->Lv, _char->hp, _char->pr);
		break;
	}
}