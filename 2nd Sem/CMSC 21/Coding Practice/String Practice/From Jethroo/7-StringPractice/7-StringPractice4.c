#include <stdio.h>

void search(char word[20], char find){
    short int length=0;
    while(word[length]!='\0'){length++;}
     for(int i=0;i<length;i++){
        if(word[i]==find){printf("It's here!");return;}
    }
    printf("I couldn't find it :(");
    return;
}
int main(){
    char word[20];
    char find;
    printf("Please input a word: ");
    gets(word);
    printf("Please input a character to search for: ");
    scanf(" %c",&find);
    printf("The word is %s and you're searching for %c.\n\n",word, find);
    search(word, find);
}

