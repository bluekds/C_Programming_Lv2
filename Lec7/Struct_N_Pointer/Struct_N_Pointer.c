#include <stdio.h>

struct student {
	char name[16];
	int age;
	char ID[7];
};

int main(void) {
	struct student s1 = { "Kim", 20, "201234" };
	struct student* pS = &s1;

	printf("[%s] Age: %d, ID: %s\n", (*pS).name, (*pS).age, (*pS).ID);
	printf("[%s] Age: %d, ID: %s\n", pS->name, pS->age, pS->ID);

	return 0;
}