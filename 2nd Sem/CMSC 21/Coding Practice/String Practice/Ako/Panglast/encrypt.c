#include <stdio.h>





int main(){

    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char encrypt_letters[26] = {'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a'};

    char sentence[100] = "axzd";
    char encrypt[100]; // answer must be "plcppnfs"
    int sen_len = 0;
    int key = 3;

//    scanf("%[^\n]%*c", &sentence);
//    scanf("%d", &key);

//    while(sentence[sen_len] != '\0') sen_len++;
//
//    printf("%d",sen_len);


    for(int i = 0; sentence[i] != '\0'; i++){
         for(int j = 0; letters[j] != '\0'; j++){
            if(sentence[i] == letters[j]){
               sentence[i] = encrypt_letters[j + key];
               break;
            }
        }
    }

    int i;
    for(i = 0; sentence[i] != '\0'; i++){
        encrypt[i] = sentence[i];
    }

    encrypt[i] = '\0';

    printf("%s", encrypt);


    return 0;
}
