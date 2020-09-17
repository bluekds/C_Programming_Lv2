#include "FilterFunction.h"

int smoothingFiler(int _a, int _b, int _c, int _d, int _e)
{
	return (int)((_a + _b + _c + _d + _e)/5.0f);
}

int inverseFilter(int _a, int _max, int _min)
{
	if (_a > 0)
		return _min + (_max - _a);
	else
		return _max + (_min - _a);
}

