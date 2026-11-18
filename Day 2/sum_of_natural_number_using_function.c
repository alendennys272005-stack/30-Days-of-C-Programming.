#include <stdio.h>

int add(int x)//function to add n natural numbers
{
    int sum=0;
    for(int i=0; i<=x; i++)
    {
        sum=sum+i;
    }
    return sum;//returning the sum
}

int main()
{
    int n;
    printf("enter the limit : ");
    scanf("%d", &n);//reading the limit
    int sum = add(n);//calling the function "add"
    printf("sum of first %d natural numbers = %d\n",n, sum);//printin the sum returned form the function

    return 0;
}