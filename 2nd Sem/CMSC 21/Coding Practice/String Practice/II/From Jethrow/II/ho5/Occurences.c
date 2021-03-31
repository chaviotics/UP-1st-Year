#include <stdio.h>
int main(){
    char word[100], letter;
    int flag=0;
    scanf("%[^\n]%*c", &word);
    scanf("%c", &letter);
    for(int i=0; word[i]!='\0'; i++) if(word[i]==letter){
        printf("%i ", i);
        flag=1;
    } 
    if(!flag) printf("-1");  //I'm a bit confused here but in your doc you outputted -1 when the letter didn't show up so
}
