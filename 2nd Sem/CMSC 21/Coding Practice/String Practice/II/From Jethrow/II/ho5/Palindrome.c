#include <stdio.h>
int palindrome(char * word){
    int length=0;
    while(word[length+1]!='\0') length++;
    for(int i=0; i<=length/2; i++) if(word[i]!=word[length-i]) return(0);
    return(1);
}
int main(){
    char word[100];
    int count=0;
    scanf("%[^\n]%*c", &word);
    printf("%i", palindrome(word));
}