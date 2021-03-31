#include <stdio.h>

int main(){

    int temp[100][100];
    char *days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int city;


    printf("Temperature Recorder");
    printf("\n--------------------------\n\n");

    printf("How many cities do you want to record its temperature? "); // Asks how many cities. These are the "rows" of the table.
    scanf("%d", &city);

    for(int i = 0; i < city; i++){
        printf("\nInput temperature (in degrees celcius) for City %d in the past week: \n", i+1);
        for(int j = 0; j < 7; j++){ // For the columns, there are only 7 because there are only 7 days in a week.
            printf("%s: ", days[j]);
           scanf("%d", &temp[i][j]); // This asks for the temperature per day from Sunday to Saturday. These are the "Columns" of the table.
        }
    }

    printf("\n\n****************************************\n");
    printf("Temperature Recorded in the Past Week: ");
    printf("\n****************************************");

    for(int i = 0; i < city; i++){
        printf("\n-----------------\n");
        printf("For City %d: \n", i+1);
        printf("-----------------\n");
        printf("---Temperature (in degrees celsius)---\n");
        for(int j = 0; j < 7; j++){
           printf("%s is %d degrees celcius\n", days[j], temp[i][j]);
        }
    }

    return 0;
}

