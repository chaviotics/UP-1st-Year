#include <stdio.h>

int main(){
    int list[]={1,5,7,9};
    for(int i=0;i<4;i++){
        if(i!=3){
            printf("%i, ",list[i]);
        }else{printf("%i",list[i]);}
    }
}