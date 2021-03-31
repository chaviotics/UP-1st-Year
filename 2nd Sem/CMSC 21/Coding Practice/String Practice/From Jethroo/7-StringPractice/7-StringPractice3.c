#include <stdio.h>
int main(){
    char wordA[20];
    char wordB[20];
    printf("Please input your first word: ");
    scanf("%s",&wordA);
    printf("Please input your second word: ");
    scanf("%s",&wordB);
    printf("%s%s",wordA,wordB);
}