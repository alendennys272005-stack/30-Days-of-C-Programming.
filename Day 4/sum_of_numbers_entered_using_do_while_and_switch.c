#include <stdio.h>
int main ()
{
    int num;
    int sum = 0;//initialising sum as zero
    int i = 1;

    printf("Enter numbers to find the sum (enter 0 to exit). \n");//prompting user to enter numbers
    
    //finding sum of entering numbers until the entered number is 0
    do
    {
        switch(i)
        {
            //to print 1st
            case 1:
            printf("Enter the %dst number: ", i);
            break;

            //to print 2nd
            case 2:
            printf("Enter the %dnd number: ", i);
            break;

            //to print 3rd
            case 3:
            printf("Enter the %drd number: ", i);
            break;

            //to print 4th, 5th, 6th, etc...
            default:
            printf("Enter the %dth number: ", i);
            break;
        }

        scanf("%d", &num);//reaading the number
        sum = sum + num;
        ++i;//adding the numbers
    }while(num != 0);//exits the loop when the number is 0

    printf("Sum of entered numbers = %d\n", sum);//sum of entered numbers is printed

    return 0;
}