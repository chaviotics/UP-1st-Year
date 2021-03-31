#include <stdio.h>

void main(){

    char str[100] = "wolf";
    char substr[100] = "ol";
    int  str_len, substr_len;
    int checker = 0; // false (not contains)

    str_len = substr_len = 0;

//    scanf("%[^\n]%*c", &str);
//    scanf("%c", &c);
//    scanf("%d", &idx);

//    while(str[str_len] != '\0') str_len++;
//    while(substr[substr_len] != '\0') substr_len++;

//    printf("%d", str_len);
//    printf("%d", substr_len);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] = substr[0]){
            for(int j = 0; substr[j] != '\0'; j++){
                if(str[i + j] != substr[j]) break;
                if(substr[j + 1] == '\0') checker = 1;
            }
        }
    }

    printf("%d", checker);

}
