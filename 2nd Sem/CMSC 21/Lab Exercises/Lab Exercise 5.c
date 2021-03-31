#include <stdio.h>

/* Function 'square' to square the number
and return it to the main function */

int square(int * x){
    int sqr;

    sqr = *x * *x;
    /* variable 'sqr' multiplies dereferenced
     pointer 'x' with it itself, squaring it. */

    return;
}

int main(){
    int number;

    printf("Number Squarer (Using Pass by Reference)\n-----------------------\n");
    printf("Enter your number to be squared: " );
    scanf("%d", &number);
    printf("\nYour squared number is %d.\n\n", square(&number));

}
