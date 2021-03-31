
#include<stdio.h>
#include<string.h>

int main(){
    //Substring. Given two words str and substr. Find out if substr is in str.
    char str[100], substr[100];
    char findChar;
    int indexToRemove=0, i = 0, str_size = strlen(str), foundFlag=0;

    printf("\nEnter word:");
    scanf(" %[^\n]*%s%s", &str);
    printf("Length of input string = %d\n", strlen(str));
    printf("\nEnter ith index to remove(from 0 to %d only):", strlen(str)-1);
    scanf("%d", &indexToRemove);


    if(indexToRemove>=0 && indexToRemove<strlen(str)){
        for(int i=indexToRemove; i<=strlen(str)-1; i++){
            str[i] = str[i+1];
        }
        printf("\nOutput string:%s", str);
        printf("\nLength of output string: %d\n", strlen(str));
    }else{
        printf("\nIndex %d is out of bounds\n", indexToRemove);
    }





	return 0;
}
