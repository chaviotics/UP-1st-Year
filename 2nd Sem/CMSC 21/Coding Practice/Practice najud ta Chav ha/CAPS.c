#include <stdio.h>
#include <stdlib.h>


int main(){

    int countLetters=0, countUpperLetters=0;

    char word[100];

    printf("String? ");

    scanf("%[^\n]%*c", &word);


    for(int i = 0; word[i] != '\0'; i++){

        if(word[i] >= 'A' && word[i] <= 'Z'){
            countUpperLetters++;
        }
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')){
            countLetters++;
        }
    }

    if(countUpperLetters > (countLetters/5)){
        for(int i = 0; word[i] != '\0'; i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                word[i] = (word[i] - 'A' + 'a');
            }
        }
    }

    printf("%s", word);

    return 0;

}


