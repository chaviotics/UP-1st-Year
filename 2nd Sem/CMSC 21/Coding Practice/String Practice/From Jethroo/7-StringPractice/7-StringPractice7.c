#include <stdio.h>

void compare(char str[20], char subStr[10]){
    short int lenSubStr=0, lenStr=0;
    short int flag=0;
    while(str[lenStr]!='\0'){lenStr++;}     //count how long string and substring are
    while(subStr[lenSubStr]!='\0'){lenSubStr++;}
    for(int i=0;i<=lenStr-lenSubStr;i++){   //if substring is 5 letters, we don't need to check the last 4 letters of string anymore
        if(str[i]==subStr[0]){
            for(int j=0; j<lenSubStr;j++){
                if(str[i+j]!=subStr[j]){break;}    //once you find a letter that doesn't match, move on to the next iteration
                if(j==lenSubStr-1){printf("I found it at %i! ",i);flag=1;}
            }
        }
    }
    if(flag=0) printf("I couldn't find it at all :(");
    return;
}

int main(){
    char str[20];
    printf("Please declare a string: ");
    scanf(" %s",&str);
    char subStr[10];
    printf("Please declare a substring: ");
    scanf(" %s",&subStr);
    compare(str, subStr);
}
