#include <stdio.h>
char * isPalindrome(long num){
    long numCopy=num, reversed=0;   //I have no idea how to solve this but because I'm not allowed to store into an array, I have to store
                                    //as an actual number unya I'm using the 'long' data type for that, pero problem is it only takes like 9 digits
    while(numCopy!=0){
        reversed+=numCopy%10;
        numCopy/=10;
        reversed*=10;
    }
    reversed/=10;  //I need to divide by 10 pa kay the way my while loop is structured, naa pa koy usa ka *10 na leftover
    //what I'm doing is getting the number, reversing it, and checking if the reversed number is the same as the original number
    if(reversed==num)return("yep");
    else return("nope");
}
int main(){
    long num;
    scanf("%i", &num);
    printf("%s ",isPalindrome(num));
}

