#include <stdio.h>
#include <stdlib.h>

int main(){

    char word[100];
    int i = 0, i_rev = 0;

    scanf("%[^\n]%*c", &word);

    while(word[i] != '\0'){
        i++;
    }

    i_rev = i - 1;

    for(i_rev; i_rev >= 0; i_rev--){
        printf("%c", word[i_rev]);
    }

    printf("%s", word);

    return 0;
}


