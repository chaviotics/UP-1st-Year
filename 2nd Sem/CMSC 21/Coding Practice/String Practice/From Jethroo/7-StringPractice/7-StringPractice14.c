#include <stdio.h>

int main(){
    char word[100];
    printf("Please give me a sentence: ");
    gets(word);
    int length=0,letters[26];
    for(int i=0;i<26;i++)letters[i]=0; //Initialize the values of letters[] as 0 so we can just use letters++ later
    while(word[length]!='\0') length++;
    for(int i=0;i<length;i++){    //check each letter in word[] and, if it's a letter (between 97 and 122 in ASCII), +1 that letter's corresponding position in letters[]
        if(word[i]>96 && word[i]<123) letters[word[i]-97]++;
    }
    for(int i=0;i<26;i++){  //iterate over each position in letters[] and print the value if it's not 0
        if(letters[i]!=0)printf("%c = %i \n",i+97,letters[i]);
    }
}