#include <stdio.h>
char * isPalindrome(unsigned long num){
    unsigned long numCopy=num, reversed=0;  
    while(numCopy!=0){   //I'm just making a copy of the number, reversing the copy, and checking if (reversed copy)==(original number)
        reversed+=numCopy%10;
        numCopy/=10;
        if(numCopy!=0) reversed*=10;
    }
    if(reversed==num)return("Yessur");
    else return("Nomam");
}
int main(){
    unsigned long num;
    printf("input: ");
    scanf("%i", &num);
    printf("%s ",isPalindrome(num));
}

