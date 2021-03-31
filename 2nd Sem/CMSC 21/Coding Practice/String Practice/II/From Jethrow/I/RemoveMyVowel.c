#include <stdio.h>

int main(){
    char word[100];
    printf("Word? ");
    scanf("%[^\n]%*c", &word);
    for(int i=0; word[i]!='\0'; i++) {
        if(word[i]=='a' || word[i]=='A' || word[i]=='e' || word[i]=='E' || word[i]=='i' || word[i]=='I' || word[i]=='o' || word[i]=='O' || word[i]=='u' || word[i]=='U') {
            for(int j=i; word[j]!='\0'; j++)  word[j]=word[j+1]; //This just scoots the remaining letters to the left, effectively deleting the vowel where <i> is
            i--; //this i-- makes the program double check duplicate vowels. Without this i--, a "food" will be returned as "fod" instead of "fd"
        }
    }
    printf("%s", word);
}
