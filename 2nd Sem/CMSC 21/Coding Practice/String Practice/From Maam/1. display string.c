#include<stdio.h>

int main(){
    //1. Display String. Ask the user for a word. Display the word.
	char inputWord[100];
	printf("\n1. Display String. Ask the user for a word. Display the word.\n");
	printf("Enter string to display: ");
	scanf(" %[^\n]*%s", &inputWord);

	int i=0;
	//option 1
	while(inputWord[i]!='\0'){
        printf("%c", inputWord[i]);
        i++;
	}
    //option 2
    printf("\n%s\n", inputWord);
    return 0;
}
