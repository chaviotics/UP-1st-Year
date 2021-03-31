#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); //if you forget this line di jud ma random ang imong numbers
    for(int i=0;i<5;i++) printf("%i\n", rand()%100);    //I put %100 to kind of like set the "maximum" for rand() to be 100
}