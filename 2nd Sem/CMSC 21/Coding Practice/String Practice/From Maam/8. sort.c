
#include<stdio.h>
#include<string.h>

int main(){
    //8. Sort. Given a word, sort its letters in ascending order.
    char str[100];
    char charToInsert;
    int indexToInsert=0, strSize=0, swapCount = 0, sortFlag = 0;//sortFlag = 0 is not sorted, sortFlag=1 when sorted. Assume array is not sorted.

    //User input str, charToInsert and indexToInsert
    printf("\nEnter word:");
    scanf(" %[^\n]*%s", &str);


    //Get length of string in two ways.
//    int strSize = strlen(str); //First, use strlen to get length of string OR

    while(str[strSize]!='\0'){ //Second, manually get length of string without using strlen(str)
        strSize++;
    }
    printf("Size(length) of string: %d", strSize);
    //Continually sort until there are no longer swappings in the array (i.e., number of swappings == 0 means the array is sroted)
    while(sortFlag==0){
        swapCount = 0; //reset value of swapCount to 0 before making value comparisons in the array
        char tempChar;
        for(int i=0; i<strSize-1; i++){
            if(str[i]>str[i+1]){
                swapCount++;
                tempChar = str[i+1];
                str[i+1] = str[i];
                str[i] = tempChar;
            }
        }
        if(swapCount==0){//if there were no swappings during the for loop search, change the sortFlag = 1 which means that the array is sorted
            sortFlag=1;
        }//else if swapCount>0, it means the array is not yet sorted
    }

    printf("\n\nSorted string: %s\n", str); //output sorted string



	return 0;
}
