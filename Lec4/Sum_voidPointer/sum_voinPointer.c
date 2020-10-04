#include <stdio.h>

#define TYPE_INT	0
#define TYPE_FLOAT	1
#define TYPE_DOUBLE 2


void* sum(void* _a, void* _b, void* _result, int _type) {
	switch (_type) {
	case TYPE_INT:
		*((int*)_result) = *(int*)_a + *(int*)_b;
		break;
	case TYPE_FLOAT:
		*((float*)_result) = *(float*)_a + *(float*)_b;
		break;
	case TYPE_DOUBLE:
		*((double*)_result) = *(double*)_a + *(double*)_b;
		break;
	default:
		printf("[Sum] unsupported type : %d\n", _type);
	}
	return _result; // success
}

void main(void) {
	int intA = 1, intB = 2, intRe = 0;
	float floatA = 2.f, floatB = 15.f, floatRe = 0.f;

	sum(&intA, &intB, &intRe, TYPE_INT);
	printf("integer a + b = %d\n", intRe);

	printf("float a + b = %f\n"
			, *((float*)sum(&floatA, &floatB, &floatRe, TYPE_FLOAT))
	);
}