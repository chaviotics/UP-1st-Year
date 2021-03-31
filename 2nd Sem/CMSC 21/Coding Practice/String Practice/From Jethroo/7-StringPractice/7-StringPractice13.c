#include <stdio.h>

int main(){
    char word[100];
    int length=0;
    printf("Please give me a sentence: ");
    gets(word);
    while(word[length]!='\0')length++;
    for(int i=0;i<length;i++){
        if(word[i]==' ') {
            for(int j=i;j<length;j++)word[j]=word[j+1];
        }
    }
    printf("%s",word) ;
}