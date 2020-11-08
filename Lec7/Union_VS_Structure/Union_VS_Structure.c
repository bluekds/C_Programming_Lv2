#include <stdio.h>

struct statStruct {
	int		memberInt;
	short	memberShort;
	char	memberChar;
};

union statUnion {
	int		memberInt;
	short	memberShort;
	char	memberChar;
};

int main(void) {
	struct statStruct str[3] = { { 5000, 0, 0 } ,{ 0, 1000, 0 },{ 0, 0, 24 } };
	union statUnion uni[3] = { 5000, 1000, 24 };

	printf("Size of structure = %d bytes\n", sizeof(struct statStruct));
	printf("[Structure] %p, %p, %p\n"
		, &str[0].memberInt, &str[0].memberShort, &str[0].memberChar);
	printf("[Structure] %d, %d, %d\n", str[0].memberInt, str[0].memberShort, str[0].memberChar);
	str[0].memberShort = 24;
	printf("[Structure] %d, %d, %d\n", str[0].memberInt, str[0].memberShort, str[0].memberChar);

	printf("\n");

	printf("Size of union = %d bytes\n", sizeof(union statUnion));
	printf("[Union] %p, %p, %p\n"
		, &uni[0].memberInt, &uni[0].memberShort, &uni[0].memberChar);
	printf("[Union] %d, %d, %d\n", uni[0].memberInt, uni[0].memberShort, uni[0].memberChar);
	uni[0].memberShort = 24;
	printf("[Union] %d, %d, %d\n", uni[0].memberInt, uni[0].memberShort, uni[0].memberChar);

	return 0;
}