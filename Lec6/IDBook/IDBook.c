#include <stdio.h>
#include <string.h>

#define NUM_STUDENT 4
#define	NAME 0
#define ID 1

int main(int argc, char* argv[]) {
	char IdBook[NUM_STUDENT][2][10] = {
		{"KDS", "20201234"},
		{"KYW", "20192535"},
		{"LJH", "20187854"},
		{"HPC", "20180301"}
	};

	char buf[255] = { 0 };
	printf("Enter the student name: ");
	scanf("%s", buf);

	for (int i = 0; i < NUM_STUDENT; i++) {
		if (!strcmp(IdBook[i][NAME], buf)) { // Find!
			printf("%s's ID = %s\n", IdBook[i][NAME], IdBook[i][ID]);
			return 0;
		}
	}

	printf("Fail to find %s in the list.\n", buf);
	return 0;
}