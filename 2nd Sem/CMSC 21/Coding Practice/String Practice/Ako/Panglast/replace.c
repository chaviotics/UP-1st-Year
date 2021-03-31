#include <stdio.h>

int main(){

    char str[100] = "mew";
    char c = 'n';
    int idx = 2, str_len = 0;

//    scanf("%[^\n]%*c", &str);
//    scanf("%c", &c);
//    scanf("%d", &idx);

    while(str[str_len] != '\0') str_len++;

//    printf("%d", str_len);

    for(int i = str_len - 1; i >= idx; i--){
        if(i = idx){
            str[i] = c;
        }
    }

    printf("%s", str);


    return 0;
}

