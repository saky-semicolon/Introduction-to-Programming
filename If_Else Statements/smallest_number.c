// Find the Smallest number among Four numbers.

#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Please type the numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a<b, a<c, a<d)
    {
        printf("The smallest number is a!\n");
    }
    else if (b<a, b<c, b<d)
    {
        printf("The smallest number is b!\n");
    }
    else if(c<a, c<b, c<d)
    {
        printf("The smallest number is c!\n");
    }
    else
    {
    printf("The largest number is d!\n");
    }
    return 0;
}