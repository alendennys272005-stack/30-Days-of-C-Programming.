#include <stdio.h>
int main()
{
    int n;
    printf("enter the limit: ");
    scanf("%d", &n);//reading the limit n of numbers to be added
    int sum=0;
    for(int i=0; i<=n; i++)//calculating sum of n numbers
    {
        sum=sum+i;
    }
    printf("sum of first %d natural numbers = %d\n", n, sum);//printing sum of n numbers

    return 0;
}