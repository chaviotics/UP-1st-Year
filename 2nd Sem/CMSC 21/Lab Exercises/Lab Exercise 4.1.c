#include <stdio.h>

int main(){

    int num1, num2, answer;
    char operate;
    int * ptrnum1 = &num1;
    int * ptrnum2 = &num2;
    char * ptroperate = &operate;
    int * ptranswer = &answer;

    printf("ARITHMETIC OPERATION\n-----------------------\n");
    printf("Enter your expression:\n");
    scanf("%d %c %d", ptrnum1, ptroperate, ptrnum2);

    switch(*ptroperate){
        case '+':
            *ptranswer = *ptrnum1 + *ptrnum2;
            break;

        case '-':
            *ptranswer = *ptrnum1 - *ptrnum2;
            break;

        case '*':
            *ptranswer = *ptrnum1 * *ptrnum2;
            break;

        case '/':
            *ptranswer = *ptrnum1 / *ptrnum2;
            break;

        default:
            printf("\nNot a valid expression.\n");
            break;

    }

    if(*ptroperate == '+' || *ptroperate == '-' || *ptroperate == '*' || *ptroperate == '/'){
        printf("\nThe answer is: %d\n", *ptranswer);
    }
}

