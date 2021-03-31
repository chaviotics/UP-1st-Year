#include <stdio.h>
int main(){
    char word[100];
    int count=0;
    scanf("%[^\n]%*c", &word);
    for(int i=0; word[i]!='\0';i++) if(word[i]==' ' || word[i]=='.') count++; 
    printf("%i", count);
    //I'm assuming you're only giving me one sentence.
    //If you give me two sentences, seperated by a period and a space, I'm gonna count 1 extra word. 
    
    //I'm also assuming sentences don't start with a space and words are always seperated by exactly one space, which you promised
}
