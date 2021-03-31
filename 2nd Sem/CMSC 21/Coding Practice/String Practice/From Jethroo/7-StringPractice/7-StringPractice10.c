#include <stdio.h>

int main(){
    char word[10], letter, temp;
    int i, length=0;
    printf("Please give me a word: ");
    scanf(" %s",&word);
    printf("What letter would you like to insert? ");
    scanf(" %c", &letter);
    printf("Where would you like to insert it? ");
    scanf("%i",&i);
    while(word[length]!='\0'){length++;}
    for(int j=length;j>i;j--){
        word[j]=word[j-1];
    }
    word[i]=letter;
    printf("%s",word);
}