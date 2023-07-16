// Divide two numbers taking input from the user.

#include<stdio.h>
int main()
{
    float num1, num2, div;
    printf("Enter the first number: \n");
    scanf("%f", &num1);

    printf("Enter the second number: \n");
    scanf("%f", &num2);
    
    /*
        If you calculate any number/0 that can't be calculate normally.
        So, it will show math error.
    */
    if (num2 !=0)
    {
        div = num1 / num2;
        printf("Sum of the two numbers: %f \n", div);
    }
    else
    {
        printf("Math error!");
    }
    
    return 0;
}