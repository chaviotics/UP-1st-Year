#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fpointer;
    fpointer = fopen("sample.txt", "r");

    fclose(fpointer);

}
