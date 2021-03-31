#include <stdio.h>

int main(){
    int length=0;
    char word[100];
    printf("Word? ");
    scanf(" %s" &word);
    while(word[length]!='\0')length++;
    printf("%i", length);
    //This actually prints the 'regular' length of the string, not the array length. DOG has a length of 3, even though the last index of the array is actually 2
}