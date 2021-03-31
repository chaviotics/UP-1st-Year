#include<stdio.h>
#include<string.h>

int main(){

    //12. Count vowels.
    char str[100];
    char charToInsert;
    int i=0, vowelCount=0;

    printf("\n12. Count vowels");
    printf("\nEnter word: ");
    scanf(" %[^\n]*%s", &str);

    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='A' ||
           str[i]=='e' || str[i]=='E' ||
           str[i]=='i' || str[i]=='I' ||
           str[i]=='o' || str[i]=='O' ||
           str[i]=='u' || str[i]=='U'){
            vowelCount++;
        }
        i++;
    }

    printf("\nNumber of vowels: %d\n", vowelCount);


    return 0;

}
