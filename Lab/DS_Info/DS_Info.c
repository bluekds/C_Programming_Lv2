#include "DS_Info.h"
#include <stdio.h>

void DS_name(void){
	printf("Duksu Kim");
}

void DS_hometown(void){
	printf("Seoul");
}

int DS_age(void) {
	return 100;
}

int DS_studentID(int _n) {
	int id[8] = { 2,0,2,0,1,2,3,4 };
	if (_n > 8)
		return -1;
	return id[_n - 1];
}

void DS_message(void) {
	printf("Welcome to C-Programming Lv2 calss.\n");
	printf("Good luck!\n");
}
