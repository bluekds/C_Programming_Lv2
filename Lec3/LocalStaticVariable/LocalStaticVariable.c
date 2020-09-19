#include <stdio.h>

int inc(void) {
	static int counter = 0;
	counter++;
	return counter;
}

int main(void) {
	
	// counter = 10; // Error 
	// the counter variable is a static variable of inc() function

	printf("1st call - inc() : %d\n", inc());
	printf("2nd call - inc() : %d\n", inc());

	return 0;
}
