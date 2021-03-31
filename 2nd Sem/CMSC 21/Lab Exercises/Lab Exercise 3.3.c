#include <stdio.h>

int main(){

    int temp[10][10][10];
    char *days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int city, weeks;
    char month[10];

    printf("Temperature Recorder V2.0");
    printf("\n--------------------------\n\n");
    // A new feature in this program is that this asks an extra dimension of how many weeks the cities' temperatures are recorded.

    printf("Input month: \n");
    gets(month); // This asks for what month.
    printf("\nInput how many weeks: \n");
    scanf("%d", &weeks); // This is the added feature of how many weeks we can add in the cities' temperatures.
    printf("\nHow many cities do you want to record its temperature? \n");
    scanf("%d", &city);

    for(int h = 0; h < weeks; h++){
        for(int i = 0; i < city; i++){
            printf("\nInput temperature (in degrees celcius) for City %d in  Week %d: \n", i+1, h+1);
            for(int j = 0; j < 7; j++){
                printf("%s: ", days[j]);
               scanf("%d", &temp[h][i][j]);
            }
        }
    }

    printf("\n\n****************************************\n");
    printf("Temperature Recorded in %s: \n", month);
    printf("****************************************\n");

    for(int h = 0; h < weeks; h++){
            printf("\n#################\n");
            printf("For Week %d: \n", h+1);
            printf("\n#################\n");
        for(int i = 0; i < city; i++){
            printf("\n-----------------\n");
            printf("City %d: \n", i+1);
            printf("-----------------\n");
            printf("---Temperature (in degrees celsius)---\n");
            for(int j = 0; j < 7; j++){
               printf("%s is %d degrees celcius\n", days[j], temp[h][i][j]);
            }
        }
    }

    return 0;
}

