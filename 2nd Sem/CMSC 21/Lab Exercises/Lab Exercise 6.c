#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int limit;
    char * string;

    printf("String Printer (Using Dynamic Allocation Memory)\n-----------------------\n");

    printf("Enter the limit of your string: \n");
    scanf("%d", &limit); // gives the limit of the pointer or how many elements the array can store

    string = (char *) malloc(limit * sizeof(char));
    // allocates the memory for the pointer 'string' with the limit as the number of elements in an 'array'

    printf("Enter your string: \n");
    scanf("%s", string);

    printf("\nString = %s\n\n", string);

    free(string); // memory is freed

}


