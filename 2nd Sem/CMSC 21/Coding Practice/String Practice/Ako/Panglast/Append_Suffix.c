#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[100];
    char substr[100];
    char result[100];
    int str_i = 0;
    int substr_i = 0;

    scanf("%[^\n]%*c", &str);
    scanf("%[^\n]%*c", &substr);


    while(str[str_i] != '\0'){
        str_i++;
    }

    while(substr[substr_i] != '\0'){
        substr_i++;
    }

//    printf("%d", str_i);

    for(int i = 0; str[i] != '\0'; i++){
        result[i] = str[i];
    }

    int i, j;
    for(i = str_i, j = 0; substr[j] != '\0' ; i++, j++){
        result[i] = substr[j];
    }

    result[i] = '\0';

    printf("\n%s", result);


    return 0;
}
