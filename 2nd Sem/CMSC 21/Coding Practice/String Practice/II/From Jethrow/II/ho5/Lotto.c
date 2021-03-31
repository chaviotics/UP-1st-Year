#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int unique(int list[3]){ //1 means all are unique, 0 and 2 means I should change list[0] or list[2]. I'll just never change list[1]
    if (list[0]==list[1] || list[0]==list[2]) return(0);
    if(list[1]==list[2]) return(2);
    return(1);
}

int checkMatch(int winner[3], int bettor[3]){
    int count=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(winner[i]==bettor[j]) count++;
        }
    }
    return(count);
}

int main(){
    srand(time(NULL));
    int winning[3], bettor[3];
    for(int i=0; i<3; i++){ //You said random integers, not user-defined, and you said I should only output the number of matches, so you'll have to print the lists yourself if you want to see them
        winning[i]=(rand()%42)+1;
        bettor[i]=(rand()%42)+1;
    }
    while(unique(winning)!=1) winning[unique(winning)]=(rand()%42)+1;
    while(unique(bettor)!=1) bettor[unique(bettor)]=(rand()%42)+1;
     for(int i=0; i<3; i++) printf("%i ", winning[i]);         //If you want to see the lists
     printf("\n");
     for(int i=0; i<3; i++) printf("%i ", bettor[i]);
     printf("\n");
    printf("%i", checkMatch(winning, bettor));
}
