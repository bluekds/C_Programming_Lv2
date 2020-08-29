/** Exaple of the for loop statement
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/08/29
*/

#include <stdio.h> 

int main(void) {

    int n = 0;
    printf("Enter the target column : ");
    scanf_s("%d", &n);

    for (int i = 0 ; i < 10 ; i++)
        printf("%d * %d = %d\n", n, i, n * i);

    return 0;
}
