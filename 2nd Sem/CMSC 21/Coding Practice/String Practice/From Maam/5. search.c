#include<stdio.h>
#include<string.h>

int main(){
    //5. Search. Initialize a word. Ask the user for a letter. Display whether the character is in the word or not.
    char givenWord[100] = "rainbow";
    char findChar;
    int i = 0, foundFlag=0;

    printf("\n5. Search. Initialize a word. Ask the user for a letter. Display whether the character is in the word or not.\n");
    printf("\nEnter word: ");
    scanf(" %[^\n]*%s", &givenWord);
    //There are issues when writing scanf consecutively
    //For more info, check out the links below
    //1. https://stackoverflow.com/questions/9562218/c-multiple-scanfs-when-i-enter-in-a-value-for-one-scanf-it-skips-the-second-s
    //2. https://www.geeksforgeeks.org/problem-with-scanf-when-there-is-fgetsgetsscanf-after-it/

    printf("\nEnter character to find: ");
    scanf("  %c", &findChar);

    while(givenWord[i] != '\0'){
        //printf("\n%c-%c", givenWord[i], findChar);
        if(givenWord[i] == findChar){
            foundFlag = 1;
            break;
        }
        i++;
    }
    if(foundFlag == 1){
        printf("\nuh-huh(yes)!\n");
    }else{
        printf("\nnuh-uh(no)!\n");
    }



	return 0;
}
