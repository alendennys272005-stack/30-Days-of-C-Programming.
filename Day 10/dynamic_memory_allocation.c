#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = calloc (3, sizeof(int));//points to the starting address of 3 allocated memory
    if(ptr == NULL)//if ptr is null allocation didnt happened
    {
        printf("No memory\n");
        return 1;
    }

    for(int i = 0; i < 3; ++i)//stores the following values to the allocated space of the memory
    {
        ptr[i] = i * 5 + 5;//values 5 to 15
    }

    printf("before reallocoation: ");//printnig the values befire reallocation
    for(int i = 0; i < 3; ++i)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    int *tmp = realloc (ptr, 5 * sizeof(int));// reallocating the space from 3 to 5
    if(tmp == NULL)// if failed 
    {
        free(ptr);//ptr is freed
        return 1;
    }
    ptr = tmp;//if not failed temporay address will be assigned to ptr

    for(int i = 3; i < 5; ++i)
    {
        ptr[i] = i * 5 + 5;//storing the next 2 values, 20 and 25
    }

    printf("After reallocation: ");
    for(int i = 0; i < 5; ++i)//printning the whole values after reallocation
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);//ptr is freed atlast
    ptr = NULL;//not to use the same address again

    return 0;
}