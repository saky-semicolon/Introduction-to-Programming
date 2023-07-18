// Find the greater one among two numbers

#include<stdio.h>
int main()
{
    int a, b;
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        printf("%d is greater than %d", a, b);
    }
    else if(a<b)
    {
        printf("%d is greater than %d", b, a);
    }
    else
    {
        printf("Two numbers are equal!");
    }
    return 0;
}