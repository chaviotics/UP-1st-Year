#include <stdio.h>

int main(){ // number 2 - Placing and dereferencing in a pointer pointing at a null address

    int *ptrnumber = NULL; // We declared a pointer pointing to NULL, or nothing.
    *ptrnumber = 5; // We put in a value 5 in the value where ptrnumber is pointing to, which is null.

    printf("%d\n", *ptrnumber);

}

