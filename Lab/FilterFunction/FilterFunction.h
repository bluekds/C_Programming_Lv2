#pragma once

#define DATA_MAX 5
#define DATA_MIN (-DATA_MAX)

int smoothingFiler5(int _a, int _b, int _c, int _d, int _e);
int smoothingFilter(int _data[], int _dataLen, int _index, int _filterSize);
int inversionFilter(int _input);

void genSineData(int* _data, int _len, int _max);
void genData(int* _data, int _len, int _max);
void printData(int* _data, int _len, int _max);