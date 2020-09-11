/** Example solution code for character information in a single int variable
* (C Programming Lv.2 (CPA141) Lecture 2)
@author Duksu Kim
@date	2020/09/11
*/

#include <stdio.h>
#include <limits.h>

int main(void) {

	unsigned int num = 0;
	int type = 0, lv = 0, hp = 0, mp = 0;

	printf("������ �Է� �Ͻÿ� : ");
	scanf_s("%u", &num);

	// ������ 12 bits = MP
	mp = num & 0xFFF; // 1111 1111 1111
	num = num >> 12;

	// 12 bits = HP
	hp = num & 0xFFF; // 1111 1111 1111
	num = num >> 12;

	// 6 bits = Level
	lv = num & 0x3F; // 0011 1111
	num = num >> 6;

	// �ֻ��� 2 bits = ����
	type = num;

	printf("����:");
	(type == 0) ? printf("�޸�  ") :
		(type == 1) ? printf("��ũ  ") :
		(type == 2) ? printf("�𵥵�  ") :
		(type == 3) ? printf("����  ") : printf("");

	printf("Lv. %d HP:%d MP:%d\n", lv, hp, mp);
}

/* Hints
* 	unsigned int charInfo = INT_MAX;

	// get the last 12 bits in a integer -> MP
	unsigned int filter = 0xfff; // 0011 1111 1111
	unsigned int value = charInfo & filter;
	printf("value = %d\n", value);

	// get from 3rd bit to 8th bits (6 bits) -> Lv.
	filter = 0xbf;
	filter <<= 24;
	value = charInfo & filter;
	value >>= 24;
	printf("value = %d\n", value);
*/