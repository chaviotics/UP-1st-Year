#include <stdio.h>

int main(){
    char word[10];
    int i, length=0;
    printf("Please give me a word: ");
    scanf(" %s",&word);
    printf("Which letter would you like to delete? ");
    scanf(" %i", &i);
    while(word[length]!='\0'){length++;}
    for(i;i<length;i++){
        word[i]=word[i+1];
    }
    printf("%s",word);
}