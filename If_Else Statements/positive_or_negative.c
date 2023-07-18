// Checking the number is positive or negative

#include<stdio.h>
int main()
{
    int i;
    printf("Enter any number: ");
    scanf("%d", &i);

    if(i>0)
    {
        printf("Number is Positive!\n");
    }
    else if(i<0)
    {
        printf("Number is Negative!\n");
    }
    else
    {
        printf("Number is Zero!\n");
    }
    return 0;
}