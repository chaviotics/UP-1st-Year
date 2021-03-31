#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[100] = "mewtwo";
    char c = 'o';
    int str_len = 0;
    int i = 2;

//    printf("String? ");
//    scanf("%[^\n]%*c", &str);
//    printf("Character to insert? ");
//    scanf("%c", &c);
//    printf("Index to insert? ");
//    scanf("%d", &i);

    while(str[str_len] != '\0'){
        str_len++;
    }

    printf("%d\n", str_len);

    for(int x = str_len; x > 0; x--){
        if(x != i){
            str[str_len] = str[str_len - 1];
        }
        else{
            str[x] = c;
        }
    }

    printf("%s", str);

    return 0;
}
