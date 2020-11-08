#include <stdio.h>

union status {	
	unsigned int		magicPower;	
	unsigned short		stamina;	
	unsigned char		arrow;		
};

void printMember(union status *_data) {
	printf("%d, %d, %d\n"
		, _data->magicPower, _data->stamina, _data->arrow);
}

int main(void) {
	union status stat[3] = { 5000, 1000, 24 };
	printf("Size of union = %d bytes\n", sizeof(union status));

	for (int i = 0; i < 3; i++) {
		printf("[%d] ", i);	printMember(&stat[i]);
	}

	printf("%p, %p, %p\n"
		, &stat[0].magicPower, &stat[0].stamina, &stat[0].arrow);

	printMember(&stat[0]);
	stat[0].arrow = 50;
	printMember(&stat[0]);
	
	return 0;
}