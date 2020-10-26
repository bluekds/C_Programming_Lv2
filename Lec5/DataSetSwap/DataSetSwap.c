#include <stdio.h>

void printCardInfo(void** _card) {
	printf("[%s]\n", _card[0]);
	printf("|통솔|무력|지력|정치|매력|\n");
	for (int i = 0; i < 5; i++)
		printf("| %d ", *((int*)_card[1] + i));
	printf("|\n");
}

void swapCard(void*** _A, void*** _B) {
	void** temp = *_A;
	*_A = *_B;
	*_B = temp;
}

void main(void) {
	char nameA[4] = { 'K', 'D', 'S', '\0' }, nameB[4] = {'H', 'P', 'C', '\0' };
	int infoA[5] = { 80, 40, 70, 90, 95 }, infoB[5] = {78, 86, 99, 57, 88};

	void* KDS[2] = { nameA, infoA };
	void* HPC[2] = { nameB, infoB };

	void** myCard = KDS;
	void** comCard = HPC;
	
	printf("my card = "); printCardInfo(myCard);
	printf("com's card = "); printCardInfo(comCard);

	printf("***** Card trading *****\n");
	swapCard(&myCard, &comCard);

	printf("my card = "); printCardInfo(myCard);
	printf("com's card = "); printCardInfo(comCard);
}

//void printDataSet(int** _arr, int* _rowLen, int _numRows) {
//	for (int row = 0; row < _numRows; row++) {
//		for (int col = 0; col < _rowLen[row]; col++)
//			printf("%d ", *(_arr[row] + col));
//		printf("\n");
//	}
//}

//int dataA[5] = { 1, 2, 3, 4, 5 }, dataB[2] = { 10, 11 }, dataC[3] = { 100, 200, 300 };
//int dataD[5] = { 6, 7, 8, 9, 0 }, dataE[2] = { 20, 21 }, dataF[3] = { 400, 500, 600 };
//int* dataSetA[3] = { dataA, dataD, dataC };
//int* dataSetB[3] = { dataD, dataB, dataF };
//int  dataSetSize[3] = { 5, 2, 3 };
//int** dA = dataSetA;
//int** dB = dataSetB;

//printf("- DataSet A\n"); printDataSet(dA, dataSetSize, 3);
//printf("- DataSet B\n"); printDataSet(dB, dataSetSize, 3);

//swapDataSet(&dA, &dB);
//printf("*** After Swap ***\n");

//printf("- DataSet A\n"); printDataSet(dA, dataSetSize, 3);
//printf("- DataSet B\n"); printDataSet(dB, dataSetSize, 3);