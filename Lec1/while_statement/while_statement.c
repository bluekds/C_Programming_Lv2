/** Exaple of the while statement
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/08/29
*/

#include <stdio.h> 

int main(void) {

    int i = 1;
    int n = 0;
    printf("Enter the target column : ");
    scanf_s("%d", &n);

    while (i <= 9)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
