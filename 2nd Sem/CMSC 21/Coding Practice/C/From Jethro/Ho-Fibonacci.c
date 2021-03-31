#include <stdio.h>

int main(){
    int x=1, y=1, temp,n;
    scanf(" %i", &n);    //we're printing out the first n numbers of the fibonnaci sequence
    for(int i=0;i<n;i++){
        printf("%i, ", x);
        temp=y;
        y+=x;
        x=temp;
    }
}