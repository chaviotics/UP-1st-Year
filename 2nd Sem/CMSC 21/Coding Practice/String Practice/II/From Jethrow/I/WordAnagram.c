#include <stdio.h>

int check(int *countA, int *countB){  
    for(int i=0; i<26; i++) if(countA[i]!=countB[i]) return(0);
    return(1);
}

//I'm basically using the same code from AlphabetOccurence to count how many times each letter shows up, and I just check if both words have the same occurences. If they do, it means they're anagrams

int main(){
    int countA[26], countB[26];  
    for(int i=0; i<26; i++){
        countA[i]=0;
        countB[i]=0;
    }
    char wordA[100], wordB[100];
    printf("WordA? ");
    scanf("%[^\n]%*c", &wordA);
    printf("WordB? ");
    scanf("%[^\n]%*c", &wordB);
    for(int i=0; wordA[i]!='\0';i++){
        if(wordA[i]>='a'&&wordA[i]<='z') countA[wordA[i]-'a']++;
        if(wordA[i]>='A'&&wordA[i]<='Z') countA[wordA[i]-'A']++;
    } 
    for(int i=0; wordB[i]!='\0';i++){
        if(wordB[i]>='a'&&wordB[i]<='z') countB[wordB[i]-'a']++;
        if(wordB[i]>='A'&&wordB[i]<='Z') countB[wordB[i]-'A']++;
    } 
    printf("%i", check(countA, countB));
}