#include <stdio.h>

int getLength(const char * ptrstring){

    const char *firstIndexPtrString = ptrstring;
    while(*ptrstring != '\0'){
        ptrstring++;
    }

    return (ptrstring - firstIndexPtrString);
}

int main(){

    char string[50];

    printf("String Length Calculator\n-------------------------\n");
    printf("Enter your string: ");
    scanf("%s", &string);

    printf("\nThe length of your string is %d.\n", getLength(string));
}


