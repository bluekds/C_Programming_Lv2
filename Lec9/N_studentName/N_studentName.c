#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N	1024
#define MAXNAME 64

typedef struct {
	int age;
	float score;
	char name[MAXNAME];
} student;

int setStudent(student* _dst) {
	_dst->age = rand() % 100;
	_dst->score = rand() % 100;
	int nameLen = rand() % MAXNAME;
	for (int i = 0; i < nameLen; i++)
		_dst->name[i] = 'a' + rand() % 26;
}

int main(void) {
	int numStudent = 0;
	student students[N] = { 0 };
	printf("size of students array = %d bytes\n", sizeof(student) * N);

	printf("How many student? ");
	scanf("%d", &numStudent);

	for (int i = 0; i < numStudent; i++)
		setStudent(&students[i]);

	float avg = 0;
	for (int i = 0; i < numStudent; i++)
		avg += students[i].score;
	avg /= numStudent;

	printf("Average score = %.2f\n", avg);

	return 0;
}