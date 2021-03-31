#include <stdio.h>

int main(){

    int student_number = 201911168;
    int *ptr_student_number = NULL;

    ptr_student_number = &student_number;

    printf("POINTERS\n-----------\n");
    printf("Assignment 1\n");

    printf("\nstudent number = %d", student_number);
    printf("\nAddress of student number = %p\n", &student_number);

    printf("\nAddress of ptr student number = %p", &ptr_student_number);
    printf("\nValue of ptr student number = %p", ptr_student_number);
    printf("\nValue of what ptr student number is pointing to = %d\n", *ptr_student_number);

}

