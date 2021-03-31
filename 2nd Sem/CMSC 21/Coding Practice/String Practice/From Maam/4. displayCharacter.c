#include<stdio.h>
#include<string.h>

int main(){
    //4. Display ith character. Initialize a word, display ith character
    char word[100] = "rainbow";
    int ith = 0, strSize = 0;

    printf("\n4. Display ith character of %s\n", word);
    printf("Enter ith index(from 0 to %d only): ", strlen(word)-1);
    scanf("%d", &ith);


    //Get length of string in two ways.
//    int strSize = strlen(word); //First, use strlen to get length of string OR

    while(word[strSize]!='\0'){ //Second, manually get length of string without using strlen(str)
        strSize++;
    }

    if(ith>=0 && ith<strSize){//check if user ith index is valid
        printf("%c", word[ith]);
    }else{
        printf("Index %d is out of bounds", ith);
    }
    printf("\n");

	return 0;
}
