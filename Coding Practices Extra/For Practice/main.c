#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//int main(){
//
//    char inputword[100];
//
//    printf("Input the string: \n");
//    scanf("%[^\n]*%s", &inputword);
//
//    printf("Your string is '%s'.", inputword);
//
//    return 0;
//}Happy Birthday and God bless!!!
//
//int main(){
//
//    char word[100];
//    int i = 0, i_reversed = 0;
//
//    printf("Input word to be reversed: ");
//    scanf("%[^\n]*%s", &word);
//
//    while(word[i] != '\0'){
//        i++;
//    }
//
//    printf("The reverse is: ");
//    for(i_reversed = i; i_reversed >= 0; i_reversed--){
//        printf("%c", word[i_reversed]);
//    }
//
//
//    return 0;
//}
//
//

//int main(){
//
//    char word1[100], word2[100];
//    printf("Enter word1: ");
//    scanf(" %[^\n]*%s", &word1);
//
//    printf("Enter word2: ");
//    scanf(" %[^\n]*%s", &word2);
//
//    printf("Your word is %s%s.", word1, word2);
//
//    return 0;
//}

//int main(){
//
//    char word1[100], letter;
//    int i = 0, flag = 0;
//
//    printf("Input a word: ");
//    scanf(" %[^\n]*%s", &word1);
//
//    printf("\nYour word is %s", word1);
//
//    printf("\n\nInput a letter: ");
//
//    scanf("  %c", &letter);
//
//    while(word1[i] != '\0'){
//        if(word1[i] == letter){
//            flag = 1;
//        }
//        i++;
//    }
//
//    if(flag == 1){
//        printf("\nThe character '%c' is in the string '%s'.\n", letter, word1);
//    }
//    else{
//        printf("\nThe character '%c' is NOT in string '%s'.\n", letter, word1);
//    }
//
//    return 0;
//}

//int main(){
//
//    char word[100];
//    int i = 0;
//
//    printf("Input lower-cased letter string: ");
//    scanf(" %[^\n]*%s", &word);
//
//    printf("Your final string is: ");
//    while(word[i] != '\0'){
//        if((word[i] >= 97) && (word[i] <= 122)){
//            word[i] = word[i] - 32;
//            printf("%c", word[i]);
//        }
//        else{
//            printf("%c", word);
//        }
//        i++;
//    }
//
//    return 0;
//}

//int main(){
//
//    char str[100], substr[100];
//    int i = 0, flag = 0, string_size = 0, substring_size = 0;
//
//    printf("Enter main string: ");
//    scanf(" %[^\n]*%s", &str);
//
//    printf("\nEnter sub string: ");
//    scanf(" %[^\n]*%s", &substr);
//
//
//    printf("\nYour main string is '%s' and your substring is '%s'.\n", str, substr);
//
//    string_size = strlen(str);
//    substring_size = strlen(substr);
//
//    for(i; i <= string_size; i++){
//        int sameCharCount = 0, ii = 0;
//        if(ii < string_size - substring_size + 1){
//            for(int j = 0; j < substring_size; j++){
//                if(str[ii] == substr[j]){
//                    sameCharCount++;
//                }
//                ii++;
//            }
//        }
//        if(sameCharCount == substring_size){
//            flag = 1;
//            break;
//        }
//    }
//
//    if(flag == 1){
//        printf("It's there!");
//    }
//    else{
//        printf("NOT!");
//    }
//
//    return 0;
//}
//


//int is_prime(int);
//
//void main(){
//
//    int num, res;
//    scanf("%d",&num);
//    res = is_prime(num);
//    printf("%d",res);
//}
//
//int is_prime(num){
//    int count = 0;
//    for(int i=0; i<=num; i++){
//        if(num % i == 0){
//            count++;
//        }
//    }
//    if(count == 2){
//        return 0;
//    }
//    else{
//        return 1;
//    }
//}

//int main(){
//
//    int n,r,temp,sum = 0;
//    int count = 0;
//
//    scanf(" %d\n",&n);
//    temp = n;
//
//    while(n != 0){
//        r = n % 10;
//        sum = sum*10+r;
//        n = n/10;
//    }
//    n = temp;
//    if(n == sum){
//        printf("Palindrome");
//    }
//    else{
//        printf("Not");
//    }
//
//}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch[100], s[100], sen[100];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%c", ch);
    scanf("%s", s);
    scanf(" %[^\n]*%s", sen);

    printf("%c", ch);
    printf("\n%c", s);
    printf("\n%s", sen);

    return 0;
}




