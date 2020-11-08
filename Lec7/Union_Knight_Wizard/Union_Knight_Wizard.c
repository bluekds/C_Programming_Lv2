#include <stdio.h>

#define WIZARD 0
#define KNIGHT 1
#define	ARCHER 2

struct player {
	// Common properties
	int				class;
	char			name[16];
	unsigned int	hp;

	union {	// class specific status
		unsigned int		magicPower;	// for wizard
		unsigned short		stamina;	// for knight
		unsigned char		arrow;		// for archer
	};
};

void printInfo(struct player* _p) {
	printf("[class] %d, [Name] %s, [HP] %d, ", _p->class, _p->name, _p->hp );
	switch (_p->class) {
	case WIZARD:
		printf("[MP] %d\n", _p->magicPower); break;
	case KNIGHT:
		printf("[Stamina] %d\n", _p->stamina); break;
	case ARCHER:
		printf("[Arrow] %d\n", _p->arrow); break;
	}
}

int main(void){

	printf("Size of player structure = %d bytes\n"
		, sizeof(struct player));

	struct player p[3] = {
		{ WIZARD, "Wizard", 100, 4000},
		{ KNIGHT, "Knight", 400, 100},
		{ ARCHER, "Archer", 200, 24 }
	};

	for (int i = 0; i < 3; i++) {
		printInfo(&p[i]);
	}

	return 0;
}