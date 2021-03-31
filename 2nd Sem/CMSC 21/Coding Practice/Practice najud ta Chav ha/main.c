#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int checker(int *countA, int *countB){
    for(int i = 0; i < 26; i++){
        if(countA[i] != countB[i]){
            return(0);
        }
    }
    return(1);
}

int main(){

    int countA[26], countB[26];
    int counter = 0;

    for(int i = 0; i < 26; i++){
        countA[i] = 0;
        countB[i] = 0;
    }

    char strA[100], strB[100];
    scanf("%[^\n]%*c", &strA);
    scanf("%[^\n]%*c", &strB);

    for(int i = 0; strA[i] != '\0'; i++){
        if(strA[i] >= 'a' && strA[i] <= 'z'){
            countA[strA[i]-'a']++;
        }
        if(strA[i] >= 'A' && strA[i] <= 'Z'){
            countA[strA[i]-'A']++;
        }
    }

    for(int i = 0; strB[i] != '\0'; i++){
        if(strB[i]>='a' && strB[i]<='z'){
            countB[strB[i]-'a']++;
        }
        if(strB[i]>='A' && strB[i]<='Z'){
            countB[strB[i]-'A']++;
        }
    }




    for(int i = 0; i < 26; i++){
        if(countA[i]>0){
            printf("%c = %d\n", ('a' + i), countA[i]);
        }
    }

    printf("\n");

    for(int i = 0; i < 26; i++){
        if(countB[i]>0){
            printf("%c = %d\n", ('a' + i), countB[i]);
        }
    }

    printf("\n");

    printf("%d", checker(countA, countB));


}


