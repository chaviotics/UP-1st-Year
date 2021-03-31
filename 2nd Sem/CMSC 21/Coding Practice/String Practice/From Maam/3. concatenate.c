#include<stdio.h>
#include<string.h>

int main(){
    //3. Concatenate. Ask the user for two words. Combine both words into one. Display it.
    printf("\n3. Concatenate strings\n");
    char word1[100], word2[100];
    int i1 = 0, i2 = 0;

    printf("\nInput word1:");
    scanf(" %[^\n]*%s", &word1);
    printf("Input word2:");
    scanf(" %[^\n]*%s", &word2);

    //concatenate
    while(word1[i1]!='\0'){
        i1++;
    }
    //printf("%d", i1);

    while(word2[i2]!='\0'){
        word1[i1] = word2[i2];
        i1++;
        i2++;
    }
    word1[i1] = '\0';
    printf("\nConcatenated string:%s", word1);
    printf("\nLength of newly concatenated string: %d\n", i1);

	return 0;
}

