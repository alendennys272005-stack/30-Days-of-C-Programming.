#include <stdio.h>

//function to find largest element of the array
int largest_element(int n, int arr[n])
{
    int temp = arr[0];//first element of array is stored in temp variable
    for(int i = 1; i < n; ++i)//comparing first element with other elements
    {
        if(temp < arr[i])//if the element in temp is less than then temp will be updated with the next value
        {
            temp = arr[i];
        }
    }
    return temp;//temp value returned which is the largest element of the array
}

//function to find smallest element of the array
int smallest_element(int n, int arr[n])
{
    int temp = arr[0];
    for(int i = 1; i < n; ++i)
    {
        if(temp > arr[i])//if the element in temp is greater than then temp will be updated with the next value
        {
            temp = arr[i];
        }
    }
    return temp;//temp value returned which is the smallest element of the array
}

//function to print the rversed form of the array elements
void reverse_array(int n, int arr[n])
{
    int temp[n];//array to store elements in reverse order
    int j=0;
    for(int i = n-1; i >= 0; --i)//loop to store the last element of the array as the first element of the temp array
    {
        temp[j] = arr[i];
        j++;
    }
    printf("\nReversed array: \n");
    for(int y = 0; y < n; ++y)//loop to print reversed array within the function
    {
        printf("%d ", temp[y]);
    }
}


int main()
{
    int n;
    printf("Enter the number of elements: \n");//no. of elements is read
    scanf("%d", &n);
    int arr[n];//array declared with number of elements n
    printf("Enter the numbers: \n");
    //reading the elements into array
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    int option;
    while(option!=4)
    {
        //operations to perform on the array
        printf("\n1. Largest element of the array.\n");
        printf("2. Smallest element of the array.\n");
        printf("3. Array elements in reverse order.\n");
        printf("4. Exit.\n");
        printf("Choose an option: \n");

        //reading the option of operation to be performed
        scanf("%d", &option);

        switch(option)
        {
            case 1:
            {
                int large = largest_element(n, arr);//function calling to find largest number
                printf("\nLargest element: %d\n", large);
                break;
            }

            case 2:
            {
                int small = smallest_element(n, arr);//function calling to finf smalles number
                printf("\nsmallest element: %d\n", small);
                break;
            }
            case 3:
            {
                int rev;
                reverse_array(n, arr);//function calling to reverse the array elements
                break;
            }
        }
        if(option > 4 || option < 1)
        {
            printf("INVALID OPTION!!!\n");
        }
    }
    printf("THANKYOU...");

    return 0;
}