#include <stdio.h>

int OptimusPrime(int n){
    int prime=n-1;
    if(prime%2==0) prime--;
    // if(prime==3)return(3); //I include 3 here just so I can safely start at i=3 in my for loop without errors. I start at 3 so I don't need to check evens
    while(prime>2){
        for(int i=3; i<prime-1;i++){
            if(prime%i==0){
                prime -=2;
                break;
            }
            return(prime);
        }
    }
    return(2);  //side note, there's a "bug" where if num=2, I'll still input 2, but idk what you want me to do in that case since 2 is the smallest prime
}

int main(){
    int num;
    printf("input: ");
    scanf(" %i", &num);
    printf("%i", OptimusPrime(num));
}