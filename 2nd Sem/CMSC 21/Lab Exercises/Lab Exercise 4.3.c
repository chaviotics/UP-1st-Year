#include <stdio.h>

void copyString(char to[], char from[]){ // ++i

    int i;

    for(i = 0; from[i] != '\0'; ++i){
       to[i] = from[i];
    }

    to[i] = '\0';

}

//void copyString(char to[], char from[]){ // i++
//
//    int i;
//
//    for(i = 0; from[i] != '\0'; ++i){
//       to[i] = from[i];
//    }
//
//    to[i] = '\0';
//
//}

int main(){

    char string1[] = "A string to be copied";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

}


