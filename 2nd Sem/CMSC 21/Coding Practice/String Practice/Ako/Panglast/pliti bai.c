#include <stdio.h>

int main(){
    int pliti = 100;
    int pasahero = 1;
    int total_pliti;
    int sukli;
    int a,b,c,d,e;

//    scanf("%d", pasahero);

    total_pliti = pasahero * 8;
//    printf("%d", total_pliti);
    sukli = pliti - total_pliti;
//    printf("%d", sukli);

    a = b = c = d = e = 0;

//    printf("%d\n", a);

    while(sukli > 0){
        if(sukli > 50){
            sukli - 50;
            a++;
        }

        if(sukli >= 20){
            sukli - 20;
            b++;
        }

        if(sukli >= 10){
            sukli - 10;
            c++;
        }

        if(sukli >= 5){
            sukli - 5;
            d++;
        }

        if(sukli >= 1){
            sukli - 1;
            e++;
        }
    }


    printf("PhP 50 = %d\n", a);
    printf("PhP 20 = %d\n", b);
    printf("PhP 10 = %d\n", c);
    printf("PhP 5 = %d\n", d);
    printf("PhP 1 = %d\n", e);

}
