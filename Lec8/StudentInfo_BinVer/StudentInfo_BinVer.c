#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_STUDENT 5
#define MAX_NUM_STUDENT 255

typedef struct {
	int ID;			// 4 bytes
	char name[8];	// 8 bytes
	float score;	// 4 bytes
} Student; // 16 bytes

int fileOpen(FILE** _fp, char* _fileName, char* _mode) {
	*_fp = fopen(_fileName, _mode);
	if (!*_fp) {
		printf("Fail to open - %s\n", _fileName);
		return -1;
	}
	return 0;
}

int main(void) {
	char* fileName = "StudentList.bin";
	FILE* fp = NULL;

	// Write data
	Student info[NUM_STUDENT] = { {20201000, "Kim", 70.21}, {20202000, "Lee", 90.22}
		, {20203000, "Park", 88.93}, {20204000, "Hong", 77.34}, {20205000, "Jang", 99.95} };
	
	if (fileOpen(&fp, fileName, "ab") < 0) exit(1);
	
	fwrite(info, sizeof(Student), NUM_STUDENT, fp);
	fclose(fp);

	// Read data
	if (fileOpen(&fp, fileName, "rb") < 0) exit(1);

	Student buf[MAX_NUM_STUDENT] = { 0 };
	float sum = 0;
	int numStudent = fread(buf, sizeof(Student), MAX_NUM_STUDENT, fp);
	for (int i = 0 ; i < numStudent; i++)
		sum += buf[i].score;

	printf("%d students, Average = %.2f\n", numStudent, sum / numStudent);
	fclose(fp);

	return 0;
}