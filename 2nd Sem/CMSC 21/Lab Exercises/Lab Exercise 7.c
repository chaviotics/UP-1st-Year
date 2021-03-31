#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee{
    char name[50];
    int hireDate;
    float salary;
};

int main(){

    printf("3-Membered Employee Structure\n-------------------------------\n");
    printf("The 1st has given his info. Now,\n\n");

    //initializes the 1st and 3rd employee
    struct employee one = {"Ethan Pepito", 121800, 250.00};

    struct employee two;
    // getting info for the 2nd employee
    printf("Enter the Name of the 2nd Employee: ");
    gets(two.name);
    printf("Hired Date of the 2nd Employee: ");
    scanf("%d", &two.hireDate);
    printf("Salary of the 2nd Employee: ");
    scanf("%f", &two.salary);

    printf("\nName\t\t\tHired Date\tSalary\n");

    //accessing the employees' data
    printf("\n%s\t\t%d\t\t%.2f", one.name, one.hireDate, one.salary);
    printf("\n%s\t\t%d\t\t%.2f", two.name, two.hireDate, two.salary);
    printf("\n");

}


