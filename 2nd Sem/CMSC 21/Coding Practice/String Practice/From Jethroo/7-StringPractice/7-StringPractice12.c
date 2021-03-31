#include <stdio.h>

int main(){
    char word[20];
    int length=0, count=0;
    printf("Please give me a word: ");
    scanf(" %s",word);
    while(word[length]!='\0'){length++;}
    for(int i=0;i<length;i++){
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){count++;}
    }
    printf("%i",count);

}