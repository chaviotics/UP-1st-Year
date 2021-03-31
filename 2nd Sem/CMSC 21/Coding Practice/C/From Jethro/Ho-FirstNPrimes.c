#include <stdio.h>


int main(){
    int numPrimes=0,n, prime=2, isPrime;   //numPrimes keeps track of how many primes we have, n is how many primes we want, prime is the number we're testing, and isPrime is a flag that says whether or not it's prime
    scanf(" %i", &n);
    while(numPrimes<n){
        isPrime=1;
        for(int j=2;j<prime;j++){
            if(prime==2){
                printf("%i, ", prime);
                numPrimes++;
                break;
            } 
            if(prime%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            printf("%i, ", prime);
            numPrimes++;
        } 
    prime++;
    }
}