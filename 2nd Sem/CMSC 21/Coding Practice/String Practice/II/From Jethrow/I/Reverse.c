#include <stdio.h>

int main(){
    char word[100], reversed[100]; //we could've just printed the word[] array backwards, but sir said we need to store the reversed string in a separate variable.
    int length = 0;
    printf("String? ");
    scanf("%[^\n]%*c", &word);
    while (word[length] != '\0')length++;
    for(int i=0; i<length; i++) reversed[i]=word[length-1-i]; //word[length-1-i] is the libog part here, but basically the -i part means word[] iterates backwards while reverse[] iterates forwards. the -1 is there because length is 1 more than it should be
    reversed[length]='\0'; //reversed[] is right now just a list of flipped strings, we need top cap it off with \0 to tell the program where it stops. Try commenting this line out, you'll get gibberish
    printf("%s", reversed);
}