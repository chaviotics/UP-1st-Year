#include<stdio.h>

void factorization(int num){
    if(num==0) return;
    if(num%2==0){   //getting rid of even numbers so I'll only need to check odds in my for loop
        printf("2\n");
        factorization(num/2);
        return;
    }
    for(int i=3;i<=num;i+=2){  
        if(num%i==0){
            printf("%i\n", i);
            factorization(num/i);
            return;
        }
    } 
}

int main(){
    int num;
    printf("input: ");
    scanf(" %i", &num);
    factorization(num);
}