#include <stdio.h>

int main(){

    int number = 10;
    int student_number = 201911186;
    int *ptrnumber = NULL;
    int x;

    ptrnumber = &number;

    x = ptrnumber;

    printf("ptrnumber = %p", ptrnumber);

    printf("\n&ptrnumber = %p", &ptrnumber);

    printf("\nx @ ptrnumber = %p", &ptrnumber);





}
