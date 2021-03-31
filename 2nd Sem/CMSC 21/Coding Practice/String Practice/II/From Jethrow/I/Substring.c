#include <stdio.h>

int main(){
    char word[100];
    int start, end, length=0;
    printf("Word? ");
    scanf("%[^\n]%*c", &word);
    while(word[length]!='\0') length++;
    printf("Start? ");
    scanf(" %i", &start);
    printf("End? ");
    scanf(" %i", &end);
    printf("Word: %s Start: %i End: %i\n", word, start, end);
    if((start>=0 && start<=end && start<=length) && (end>=0 && end<=length)) for(int i=start; i<=end;i++) printf("%c", word[i]);  
    //as long as <start> and <end> don't break any rules, print every letter in <word> from <start> to <end>
}