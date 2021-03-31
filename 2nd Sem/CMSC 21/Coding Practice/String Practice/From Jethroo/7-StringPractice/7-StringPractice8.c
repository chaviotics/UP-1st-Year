#include <stdio.h>

void sort(char word[10]){
    unsigned short int length=0;
    while(word[length]!='\0'){length++;}
    unsigned short int sorted = 0, sureSorted = 0;  //sorted is treated as a boolean, sureSorted counts how many characters you know for sure are sorted
    while(!sorted){
        sorted = 1;
        for(int i=0;i<length-1-sureSorted;i++){ //if word is 9 long, only interate until 8 since we have word[i+1] in the loop, then subtract by how many characters you're sure are sorted
            if(word[i]>word[i+1]){
                sorted = 0;
                char temp = word[i];
                word[i]=word[i+1];
                word[i+1]=temp;
            }
        }
        sureSorted++;   //after every pass of the sort, you're sure that the last char is sorted (the "largest" bubble is sure to have floated to the top)
    }
    printf("%s",word);
    return;
}

int main(){
    char word[10];
    printf("Please input a word for me to sort: ");
    scanf("%s",&word);
    sort(word);
}