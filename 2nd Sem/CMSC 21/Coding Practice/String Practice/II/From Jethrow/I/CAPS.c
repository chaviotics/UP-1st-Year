#include <stdio.h>

int main(){
    int countLetters=0, countUpperLetters=0;
    char word[100];
    printf("String? ");
    scanf("%[^\n]%*c", &word);
    for(int i=0; word[i]!='\0';i++){ //basically we're counting all the letters and counting all the uppercase letters. We only do the thing if 20% of the letters are uppercase
        if((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')) countLetters++;
        if(word[i]>='A' && word[i]<='Z') countUpperLetters++;
    }
    if(countUpperLetters>(countLetters/5)) for(int i=0; word[i]!='\0'; i++) if(word[i]>='A' && word[i]<='Z') word[i]=(word[i]-'A'+'a'); //20% is the same as dividing by 5, so we can say if(countUpperLetters>(countLetters/5)). Also, word[i]=word[i]-'A'+'a' basically converts word[i] from uppercase to lowercase (refer to ASCII table if that sounded weird)
    printf("%s", word);
}