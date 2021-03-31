#include<stdio.h>
#include<string.h>

int main(){
    //initialize a word, display ith character
    char givenWord[100] = "rainbow";
    char findChar;
    int i = 0, str_size = strlen(givenWord), foundFlag=0;

    printf("\nEnter word:");
    //scanf("%[^\n]s",name);
    scanf("%[^\n]%*c", &givenWord);
    //line 12
    //source:voted answer in https://stackoverflow.com/questions/6282198/reading-string-from-input-with-space-character

    printf("\nUPPERCASE: ");
    while(givenWord[i] != '\0'){
        if((givenWord[i] >= 97) && (givenWord[i] <= 122)){ //alphabet characters only
            givenWord[i] -= 32;
            printf("%c", givenWord[i]);
        }else{
            printf("%c", givenWord[i]); // non-alphabet characters such as !@#, etc
        }
        i++;
    }
    printf("\n");


	return 0;
}
