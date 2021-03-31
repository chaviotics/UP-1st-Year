#include <stdio.h>
int main(){
    char word[10];
        printf("Please input a word: ");
        scanf("%s",&word);
        int length=0;
        while(word[length]!='\0')length++;
        for(int i=length-1;i>=0;--i){
            printf("%c",word[i]);
        }
}

