// Identify the Largest number from a, b and c.

#include<stdio.h>
int main()
{
    int a=1, b=-2, c=3;
    if(a>b, a>c)
    {
        printf("The largest number is a!\n");
    }
    else if(b>c, b>a)
    {
        printf("The largest number is b!\n");
    }
    else
    {
        printf("The largest number is c!\n");
    }
    return 0;
}