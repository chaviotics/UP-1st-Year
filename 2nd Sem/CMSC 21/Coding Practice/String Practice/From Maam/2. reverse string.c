#include<stdio.h>

int main(){
    //2. Reverse. Ask the user for a word. Display the word in reverse.
	char inputWord[100];
	int i=0, i_reverse=0;

    printf("Input word to reverse: ");
    scanf(" %[^\n]*%s", &inputWord);

	while(inputWord[i]!='\0'){
        i++;
	}

    printf("\nReversed word using for loop:");
    for(i_reverse=i; i_reverse>=0; i_reverse--){
        printf("%c", inputWord[i_reverse]);

    }

    printf("\nReversed word using while loop:");
    i_reverse = i;// or use i directly
    while(i_reverse>=0){
        printf("%c", inputWord[i_reverse]);
        i_reverse--;
    }
    printf("\n");
    return 0;
}
