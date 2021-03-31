#include <stdio.h>
int main(){
    char word[100];
    int count=0;
    scanf("%[^\n]%*c", &word);
    for(int i=0; word[i]!='\0'; i++) if((word[i]=='m' || word[i]=='M') && (word[i+1]=='e' || word[i+1]=='E')) count++;
    printf("%i", count);
}