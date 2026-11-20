#include <stdio.h>

//calculator operation function
int operation(int a, char optr, int b)//function to perform the operation when called
{
    int operation;
    switch(optr)
    {
        case '+'://adds the numbers if the operator is +
        operation = a + b;
        break;

        case '-'://substracts the numbers if the operator is -
        operation = a - b;
        break;

        case '*'://multiplies the numbers if the operator is *
        operation = a * b;
        break;

        case '/'://divides the numbers if the operator is /
        operation = a / b;
        break;

        default://any other symbol or operator returns the value 0
        operation = 0;
        break;
    }

    return operation;//result of the operation is returned
}

int main()
{
    int a;
    char optr;
    int b;

    //entering the values
    printf("enter the first number: ");
    scanf("%d", &a);//reading the first number
    printf("enter the operator: ");
    scanf(" %c", &optr);//reading the operator
    printf("enter the second number: ");
    scanf("%d", &b);//reading the second number

    int soln = operation(a, optr, b); //function calling to do the operation and stored in the soln variable

    if(soln == 0)
    {
        printf("invalid operator!\n");//prints invalid operator if the returned value is 0
    }
    else
    {
        printf("%d %c %d = %d \n", a, optr, b, soln);//prints the solution of the operation
    }

    return 0;
}