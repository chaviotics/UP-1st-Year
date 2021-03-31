#include <stdio.h>
int exponent(int num, int exp){ //just a quick little function to do exponent operations since ** and ^ don't work in C
    int result=1;
    for(int i=0; i<exp; i++) result*=num;
    return(result);
}
void power(int num){
    int exp, flag=0;
    for(int testIfPower=2; testIfPower<(num/2);testIfPower++){ //I'd rather stop at sqrt(num) but sqrt isn't built in, so I'll settle for num/2
        exp=1;
        while(exponent(testIfPower, exp)<num) exp++;
        if(exponent(testIfPower,exp)==num){
            printf("%i, %i\n", testIfPower, exp);
            flag=1;
        } 
    }
    if(!flag) printf("nope");
}
int main(){
    int num;
    printf("input: ");
    scanf(" %i", &num);
    power(num);
}