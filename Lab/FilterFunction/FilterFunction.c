#include "FilterFunction.h"
#include <stdio.h>
#include <math.h>
#include <time.h>

#define PI (3.14)
#define LOOP_I(len) for(int i = 0 ; i <len ; i++)
#define MAX(a,b) (a > b ? a : b)
#define MIN(a,b) (a > b ? b : a)


int smoothingFiler5(int _a, int _b, int _c, int _d, int _e)
{
	return (int)((_a + _b + _c + _d + _e)/5.0f);
}

int smoothingFilter(int *_data, int _dataLen, int _index, int _filterSize)
{
	// Make it odd number
	if (_filterSize % 2 == 0)
		_filterSize++;
	int offset = _filterSize / 2;

	int sum = 0;
	for (int i = _index - offset; i <= _index + offset; i++) {
		if (i < 0 || i > _dataLen)
			continue;
		sum += _data[i];
	}

	return sum / _filterSize;
}

int inverseFilter(int _a, int _max, int _min)
{
	if (_a > 0)
		return -_max + (_max - _a);
	else
		return _max + (-_max - _a);
}

void genSineData(int* _data, int _len, int _max) {
	LOOP_I(_len)
		_data[i] = sin((i * PI * 10) / 180.0) * _max;
}

void genData(int* _data, int _len, int _max){
	genSineData(_data, _len, _max);
	
	// add noise
	//srand(time(NULL));
	LOOP_I(_len) {
		int noise = rand() % _max;
		noise = (rand() % 2 == 0 ? noise : -noise);
		if (noise > 0)
			_data[i] += noise;
		_data[i] = MAX(_data[i], -(_max-1));
		_data[i] = MIN(_data[i], _max-1);
		// printf("%d ", _data[i]);
	}
}

void printGraph(int* _data, int _len, int _max) {
	for (int height = 0; height < _max * 2; height++) {
		for (int i = 2; i < _len - 2; i++) {
			_data[i] == (height - _max) ? printf("*") : printf(" ");
		}
		printf("\n");
	}
}