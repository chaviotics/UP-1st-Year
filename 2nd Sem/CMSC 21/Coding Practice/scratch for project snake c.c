#include <stdio.h>

int main(){
    printf("ascii of 201 gives: %c\n\n",201);
    printf("ascii of 187 gives: %c\n\n",187);
    printf("ascii of 205 gives: %c\n\n",205);
    printf("ascii of 186 gives: %c\n\n",186);
    printf("ascii of 200 gives: %c\n\n",200);
    printf("ascii of 188 gives: %c\n\n",188);

}

// Original Field of Play before making the 2D field.

void print_fieldOfplay(){ // This function creates the field of play.

        //We use a for loop to create the upper portion of the field of play.
    for(i=0; i<=M+1; i++){
        if(i==0){
            printf("%c",201); // top-most left
        }
        else if(i==M+1){
            printf("%c",187); // top-most right
        }
        else{
            printf("%c",205); // in-between
        }
    }
    printf("\n");

    // This is for the sides of the field of play.
    for(i=0; i<N; i++){

        printf("%c", 186); // left-most line

        for(j=0; j<M; j++){
            if(j==M-1){
                printf(" %c\n",186); // right-most line
            }
            else{
                printf(" "); // the space between the left and right lines
            }
        }
    }

    //This is for the lower portion of the field of play.
    for(i=0; i<=M+1; i++){
        if(i==0){
            printf("%c",200); // bottom-most left
        }
        else if(i==M+1){
            printf("%c",188); // bottom-most right
        }
        else{
            printf("%c",205); // in-between
        }
    }

}
