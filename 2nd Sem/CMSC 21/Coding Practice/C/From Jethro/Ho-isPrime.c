#include <stdio.h>
char * is_prime(int num){
    if(num %2 == 0 || num%3==0 || num%5==0) return "nope"; //para lang gud ma paspas, it will suffice to only have num%2==0. 
                        //Or you could erase line 3 entirely and start at i=2 in your for loop and increment by i++ instead of i+=1
    for(int i=3;i<=num;i+=2){
      if(num%i==0) return "nope";  
    } 
    return "yep";
}
int main(){
    int num;
    scanf("%i", &num);
    printf("%s ",is_prime(num));
}