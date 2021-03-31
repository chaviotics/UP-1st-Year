#include<stdio.h>
#include<string.h>

int main(){
    int i=1, num=1, n;
    printf("\nEnter integer n to show first n odd numbers: ");
    scanf("%d",&n);
    while(i<=n){
        if(num%2 == 1){
            if(i==n){
                printf("%d", num);
            }else{
                printf("%d, ", num);
            }
            i++;
        }
        num++;
    }

    return 0;

}
