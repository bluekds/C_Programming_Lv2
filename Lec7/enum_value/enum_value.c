#include <stdio.h>

enum menu { Add = 10, Delete = 20, Quit = 30 };
enum weekday { Mon = 2, Tue, Wed, Thur = 10, Fri, Sat, Sun };

int main(void) {
	printf("%d %d %d\n", Add, Delete, Quit);
	printf("%d %d %d %d %d %d %d\n",
		Mon, Tue, Wed, Thur, Fri, Sat, Sun);
}