#include <stdio.h>
int lowercase(char letter){ //check if something is lowercase
    if(letter>='a'&&letter<='z') return(1);
    return(0);
}
int uppercase(char letter){ //check if something is uppercase
    if(letter>='A'&&letter<='Z') return(1);
    return(0);
}
int letter(char letter){  //check if something is a letter
    if((letter>='A'&&letter<='Z') || (letter>='a'&&letter<='z')) return(1);
    return(0);
}

int main(){
    char word[100];
    scanf("%[^\n]%*c", &word);
    if(lowercase(word[0])) word[0]=word[0]-'a'+'A';  //just to get rid of word[0] because I have a lot of word[i-1] in my for loop
    for(int i=1; word[i]!='\0'; i++){
        if(uppercase(word[i]) && letter(word[i-1])) word[i]=word[i]-'A'+'a';
        if(lowercase(word[i]) && !letter(word[i-1])) word[i]=word[i]-'a'+'A'; //I know you said words are always separated by a space but I'm scared one of your test cases is like "Hi.aLL", where the character before 'a' isn't a space but "aLL" should still be considered as a separate word
    }
    printf("%s", word);
}
