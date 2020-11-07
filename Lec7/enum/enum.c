#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum { Add, Delete, Quit } Menu;

int main(void) {
	Menu menu;
	printf("Size of Menu: %d bytes\n", sizeof(Menu));

	while (1) {
		printf("[%d] Add [%d] Delete [%d] Quit : ", Add, Delete, Quit);
		scanf("%d", &menu);

		switch (menu) {
		case Add:
			printf("You select Add!\n");
			break;
		case Delete:
			printf("You select Delete!\n");
			break;
		case Quit:
			return 0;
		}
	}
}