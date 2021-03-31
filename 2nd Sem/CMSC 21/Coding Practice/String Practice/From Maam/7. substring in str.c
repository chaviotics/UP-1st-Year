#include<stdio.h>
#include<string.h>

int main(){
    //7. Substring. Given two words str and substr. Find out if substr is in str.
    char str[100], substr[100];
    char findChar;
    int i = 0, foundFlag=0, strSize=0, substrSize=0;
    printf("\n7. Substring. Given two words str and substr. Find out if substr is in str.\n");
    printf("\nEnter string:");
    scanf(" %s", &str);
    printf("Enter substring to find:");
    scanf(" %s", &substr);

    /***
    Getting the size of string manually by counting the number elements in the character array or use strlen from string.h
    **/
    while(str[i]!='\0'){
        i++;
    }
    strSize = i;
    i=0;//reset index i to 0
    while(substr[i]!='\0'){
        i++;
    }
    substrSize = i;
    i=0;//reset index i to 0

    /***
    Check if lengths using loop == lengths using strlen using printf
    **/
//    printf("**%d\t%d\t%d**", strlen(str), strlen(substr), strlen(str)-strlen(substr));
//    printf("\n**%d\t%d\t%d**", strSize, substrSize, strSize - substrSize);

    while(str[i] != '\0'){//or use for loop using strlen
        int sameCharCount = 0;
        int ii = i;//let ii be the starting index from string which we will search the substring
        if(ii<strSize-substrSize+1){ //search only up to index where index+strlen(substr) < strlen(str)
            for(int j=0; j<substrSize; j++){//loop through every character of substring substr
                if(str[ii]==substr[j]){//check if each character each character of string and substring is equal or the same
                    sameCharCount++;
                }
                ii++;
            }
        }
        if(sameCharCount == strlen(substr)){ //When the number of same character (sameCharCount) == size of the legnth of substring, it means that  the substring is present in str
            foundFlag = 1;//set the found indicator flag to 1 (meaning found)
            break; //break, exit immediately from the while loop (no need to look or search further in the string)
        }
        i++;
    }

    if(foundFlag == 1){
        printf("\n\nYes\n");
    }else{
        printf("\n\nNo\n");
    }



	return 0;
}
