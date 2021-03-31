#include<stdio.h>
#include<string.h>

int main(){
    //10. Substring. Given two words str and substr. Find out if substr is in str.
    char str[100];
    char charToInsert;
    int indexToInsert=0, strSize=0;

    //User input str, charToInsert and indexToInsert
    printf("\n10. Substring. Given two words str and substr. Find out if substr is in str. \nAssume user input of character is always a character (i.e. size = 1)\n\n");
    printf("\nEnter word: ");
    scanf(" %[^\n]*%s", &str);
    printf("Length of string: %d\n", strlen(str));
    printf("\nEnter character to insert: ");
    scanf(" %c", &charToInsert);
    printf("\nEnter ith index/position to insert the character(from 0 to %d only): ", strlen(str));
    scanf("%d", &indexToInsert);

    /**
    Can be modified to accept or insert a character @ index > strlen(str)+1 by putting spaces  between  strleng(str) and index-1, then character @ index
    **/

    //Get length of string in two ways.
//    int strSize = strlen(str); //First, use strlen to get length of string OR

    while(str[strSize]!='\0'){ //Second, manually get length of string without using strlen(str)
        strSize++;
    }

    if(indexToInsert>=0 && indexToInsert<=strSize){//Check user input index is valid

        char tempChar;
        char oldChar = str[indexToInsert];
        int j;
        //move characters one by one to the right of the indexToInsert
        for(j=indexToInsert+1; j<=strSize+1; j++){//start at 1 element after the indexToStart
            tempChar = str[j];//temporarily store the element @ current j index
            str[j] = oldChar; //assign element @ current j index  to the oldChar or element from previous index
            oldChar = tempChar; //set oldChar to the initial current value of j index (tempChar)
//            printf("\t**%d\t%c\t%c\t%c\n", j, tempChar, str[j], str[j+1]);
        }

        str[indexToInsert] = charToInsert;//insert new character @ user indicated index
        str[j] = '\0';//insert a terminator to end the string using the last value of j index
        printf("\nNew string = %s", str);
        printf("\nLength of new string = %d or %d", strlen(str), j-1);
    }else{
        printf("\nIndex %d is out of bounds", indexToInsert);//user input index is invalid
    }

	return 0;
}
