#include <stdio.h>

int main(){

    int matrix_1[10][10], matrix_2[10][10], matrix_3[10][10], sum[10][10];
    int rows, columns;

    printf("Matrix Adder");
    printf("\n------------\n");

    printf("\nEnter your number of rows: "); // This initializes the rows of all the matrices.
    scanf("%d", &rows);
    printf("Enter your number of columns: "); // This initializes the column of all the matrices.
    scanf("%d", &columns);

    printf("\nEnter input for matrix 1: \n"); // asks for inputs of Matrix 1
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
           scanf("%d", &matrix_1[i][j]);
        }
    }

    printf("\nEnter input for matrix 2: \n"); // asks for inputs of Matrix 2
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
           scanf("%d", &matrix_2[i][j]);
        }
    }

    printf("\nEnter input for matrix 3: \n"); // asks for inputs of Matrix 3
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
           scanf("%d", &matrix_3[i][j]);
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
           sum[i][j] = matrix_1[i][j] + matrix_2[i][j] + matrix_3[i][j]; // This adds the 3 matrices and  puts them into another matrix called 'sum'.
        }
    }

    printf("\nThe Sum of the 3 Matrices: \n");
    for(int i = 0; i < rows; i++){ // Prints the sum.
        printf("\n");
        for(int j = 0; j < columns; j++){
           printf("%d\t", sum[i][j]);
        }
    }

    printf("\n\nExplanation: \n"); // This is more or less the explanation for the matrix addition.

    for(int i = 0; i < rows; i++){
        printf("\n");
        for(int j = 0; j < columns; j++){
            printf("For Row %d, Column %d: \n", i+1, j+1);
           printf("Matrix 1[%d][%d] + Matrix 2[%d][%d] + Matrix 3[%d][%d] = %d + %d + %d = %d\n"
                  ,i,j,i,j,i,j,matrix_1[i][j],matrix_2[i][j],matrix_3[i][j], sum[i][j]);
        }
    }

    return 0;
}


