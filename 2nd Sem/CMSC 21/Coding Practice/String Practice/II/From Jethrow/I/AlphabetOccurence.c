#include <stdio.h>

int main(){
    int count[26];
      //Basically I declared an array with 26 slots, 1 for each letter, unya every time I see a letter kay I just +1 that letter's 'slot' in the array. count[0] keeps track of A's, count[1] keeps track of B's, etc.
    for(int i=0; i<26; i++){
        count[i]=0; //fill the array with 0s because if you don't, it's still initialized with random numbers
    }

    char word[100];

    printf("Word? ");
    scanf("%[^\n]%*c", &word);

    for(int i=0; word[i]!='\0';i++){

        if(word[i]>='a'&&word[i]<='z'){
            count[word[i]-'a']++; //count lowercase letters
        }
        if(word[i]>='A'&&word[i]<='Z'){
            count[word[i]-'A']++; //count uppercase letters
        }
    }

    for(int i=0; i<26;i++){
        if(count[i]>0){
            printf("%c = %i\n", ('a'+i), count[i]);
        }  //The if statement is here so that I only print letters that occured at least once
    }

}
