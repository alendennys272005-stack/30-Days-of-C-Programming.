#include <stdio.h>

int main()
{
    char string[]="Hello";
    int i=0;
    while(string[i++] != '\0');//loop continues until it reaches the null character
    printf("length of string = %d \n", --i);//one less than the value of i gives the length of the string

    return 0;
}