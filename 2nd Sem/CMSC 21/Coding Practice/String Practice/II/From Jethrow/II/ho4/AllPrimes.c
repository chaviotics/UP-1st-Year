#include <stdio.h>
	#include <time.h>
	#include <stdlib.h>

int isPrime(int num){
    if(num %2 == 0 || num%3==0 || num%5==0) return(0);
    for(int i=7;i<=num;i+=2) if(num%i==0) return(1);  
    return(0);
}
int main() {
srand(time(NULL));
    int list[3];
    for(int i=0; i<3;i++) list[i]= rand()%100;
    printf("list: ");
    for(int i=0;i<3;i++) printf("%i ", list[i]);
    printf("\n");
    printf("primes: ");
    for(int i=0; i<3;i++)  if (isPrime(list[i])) printf("%i ", list[i]);
       
}
