/** Exaple of if and if-else statements
* (C Programming Lv.2 (CPA141) Lecture 1)
@author Duksu Kim
@date	2020/08/29
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer number :");
    scanf_s("%d", &number);

    if (number > 0)
        printf("It is a positive number.\n");

    if (number < 0)
        printf("It is a negative number.\n");

    if (number % 2 == 0) {
        printf("It is an even number.\n");
    }
    else {
        printf("It is an odd number.\n");
    }

    return 0;
}

