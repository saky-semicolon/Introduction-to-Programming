// Nested if else statements

/*
        S Y N T A X 
    ____________________

    **Outer if condition**

    if (condition 1) {
    **inner if condition**
        if (condition 2) {
            **Block of Code and Statements**
        }
    **inner else condition**
        else {
            **Block of Code and Statements**
        }
    }
    
    **Outer else statement**
    
    else {
    **inner if condition**
        if (condition 3) {
            **Block of Code and Statements**
        }
    **inner else condition**
        else {
            **Block of Code and Statements**
        }
    }
*/

#include<stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("%d is the greatest number!\n", num1);
        }
        else
        {
            printf("%d is the greatest number!\n", num3);
        }
    }
    else
    {
        if (num2>num1)
        {
            printf("%d is the greatest number!\n", num2);
        }
        else
        {
            printf("%d is the greatest number!\n", num3);
        }
    }
    return 0;
}