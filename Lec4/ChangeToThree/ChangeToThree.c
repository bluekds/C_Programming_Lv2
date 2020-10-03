#include <stdio.h>

int changeToThree(int* _val);
int changeToThree_CallByValue(int _val);

void main(void) {

	int val = 0;
	printf("[Before] val = %d\n", val);

	changeToThree_CallByValue(val);
	printf("[changeToThree_CBV()] val = %d\n", val);

	changeToThree(&val);
	printf("[changeToThree()] val = %d\n", val);
}

int changeToThree(int* _val) {
	if (_val != NULL) {
		*_val = 3;
		return 0;
	}
	return -1;
}

int changeToThree_CallByValue(int _val) {
	_val = 3;
	return 0;
}