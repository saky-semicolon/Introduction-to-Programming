// Subtract two numbers taking input from the user.

#include<stdio.h>
int main()
{
    int num1, num2, sub;
    printf("Enter the first number: \n");
    scanf("%d", &num1);

    printf("Enter the second number: \n");
    scanf("%d", &num2);
    
    sub = num1 - num2;

    printf("Subtraction of the two numbers: %d \n", sub);

    return 0;
}