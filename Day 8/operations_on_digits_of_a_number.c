#include <stdio.h>
int main ()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);//reading the number
    int temp = num;//temperory variable to store the original number
    int digit;
    int count = 0;//initialising count, rev and sum to 0
    int rev = 0;
    int sum = 0;

    while (num>0)//reversing the number and counting the number of digits
    {
        digit = num % 10;//extracts each digit from original number from right end
        rev = rev * 10 + digit;//converts the extracted digit to reversed form
        sum=sum+digit;//each digit is added to the next digit of the number to obtain the sum of the digits
        num=num/10;//removing each digit from the original number
        ++count;//updating the count to get the number of digits present in the number
    }

    printf("no of digits = %d \n", count);//printing no. of digits
    printf("sum of digits = %d \n", sum);//printing sum of digits

    /*checking whether the number is palindrome by comparing the reversed number 
    and the original number stored in the temperory variable temp. */
    if(temp==rev)
    {
        printf("palindrome \n");
    }
    else
    {
        printf("not palindrome \n");
    }
    return 0;
}