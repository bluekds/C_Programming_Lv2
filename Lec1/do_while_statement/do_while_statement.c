/** Exaple of the do-while statement
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/08/29
*/

#include <stdio.h> 

int main(void) {

    int i = 0, n = 0, repeat = 0;

    do {
        printf("Enter the target column : ");
        scanf_s("%d", &n);
        
        i = 1;
        while (i < 10) {
            printf("%d * %d = %d\n", n, i, n * i);
            i++;
        }

        printf("Do you want to see another column? (yes = 1, no = 0) : ");
        scanf_s("%d", &repeat);

    } while (repeat);

    return 0;
}
