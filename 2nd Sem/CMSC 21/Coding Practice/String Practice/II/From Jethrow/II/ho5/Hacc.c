#include<stdio.h>

int main(){
    double input=0;
    int integer;
    scanf("%lf", &input);
    input*=100;
    integer=input;
    input-=integer;
    input/=100;
    printf("%f", input);  //it's not my fault if this isn't exact, computers can't store floating point numbers precisely in binary and you're forcing me to input a float instead of a string :<
    //Also I can't just change the float input into a string because, in the first place, the float that's stored isn't equal to the float you input. 
    //I can't just truncate the printed float either because I have no idea how many fractional digits you're inputting and truncating might ut some of those digits off
}