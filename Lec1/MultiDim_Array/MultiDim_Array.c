/** Exaple of multi-dimensional array
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/08/25
*/

#include <stdio.h>

int main(void)
{
	// 1D array version
	int S1_Scores[5] = { 11, 12, 13, 14, 15 } ;
	int S2_Scores[5] = { 21, 22, 23, 24, 25 } ;
	int Sn_Scores[5] = { 31, 32, 33, 34, 35 } ;

	for (int i = 0; i < 5; i++) printf("%d ", S1_Scores[i]);
	printf("\n");
	for (int i = 0; i < 5; i++) printf("%d ", S2_Scores[i]);
	printf("\n");
	// ...
	for (int i = 0; i < 5; i++) printf("%d ", Sn_Scores[i]);
	printf("\n");

	printf("\n\n");

	// 2D array version
	int S_Scores[3][5] = {
		{ 41, 42, 43, 44, 45 },
		{ 51, 52, 53, 54, 55 },
		{ 61, 62, 63, 64, 65 }
	};
	for (int studentID = 0; studentID < 3; studentID++) {
		for (int i = 0; i < 5; i++)
			printf("%d ", S_Scores[studentID][i]);
		printf("\n");
	}

	return 0;
}