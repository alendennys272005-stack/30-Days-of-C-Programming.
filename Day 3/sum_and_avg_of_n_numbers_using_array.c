#include <stdio.h>

int main()
{
    int n;
    //enter the number of elements
    printf("enter the limit: "); 
    scanf("%d", &n);
    int num[n];
    //enter the elements
    printf("enter %d numbers: \n", n);
    //reading elements into the arraya num
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }
    int sum=0;//initialising sum to 0
    for(int j=0; j<n; ++j)//adding the elements of the array and storing the result in sum
    {
        sum=sum+num[j];
    }
    float avg = sum/n;//calculating average in decimal values
    printf("sum = %d\n", sum);//printing sum
    printf("avg = %.2f\n", avg);//printing average in 2 decimal places

    return 0;
}