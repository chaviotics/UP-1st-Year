#include <stdio.h>

int main(){
    char word[20];
    printf("Please input a word for me to uppercase-ify: ");
    scanf("%s",word);
    short int length = 0;
    while(word[length]!='\0'){length++;}
    for(int i=0;i<length;i++){word[i]-=32;}
    printf("%s",word);
}