// Find whether the number is odd or even

/*
    Logic :- If number is divisible by 2 then number is Even else Number is Odd.
    Example :- number form 1 to 10 .
                1-Odd
                2-Even
                3-Odd
                4-Even
                5-Odd
                6-Even
                7-Odd
                8-Even
                9-Odd
                10-Even
*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if(a%2 == 0)
    {
        printf("The number is an Even number!\n");
    }
    else
    {
        printf("The number is an Odd number!\n");
    }
    return 0;
}


