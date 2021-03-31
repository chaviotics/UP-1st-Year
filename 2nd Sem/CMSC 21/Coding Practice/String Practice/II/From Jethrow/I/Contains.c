#include <stdio.h>

// 1. check every letter in wordA
// 2. if that letter in  wordA == starting letter of wordB
//     a. Check every letter of wordB
//     b. if that letter of wordB doesn't match the letter of wordA, check the next letter in step (2) (this is where I use the break statement)
//     c. if you're at the end of wordB, you can say it contains wordB
// 3. If you never got to (2.c), just say it doesn't contain wordB

int contains(char * wordA,char * wordB){ //Here, you could also say (char wordA[100], char wordB[100]) but you need to know the exact length of wordA and wordB. Writing it this way is a bit more forgiving
    for(int i=0; wordA[i]!='\0';i++) if(wordA[i]==wordB[0]){
        for(int j=0;wordB[j]!='\0';j++){
            if(wordA[i+j]!=wordB[j]) break;
            if(wordB[j+1]=='\0') return(1);
        }
    }
    return(0);
}
int main(){
    char wordA[100], wordB[100];
    printf("WordA? ");
    scanf(" %s", &wordA);
    printf("WordB? ");
    scanf(" %s", &wordB);
    printf("%i", contains(wordA, wordB));
}