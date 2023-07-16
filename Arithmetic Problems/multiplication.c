// multiply two numbers taking input from the user.

#include<stdio.h>
int main()
{
    int num1, num2, mul;
    printf("Enter the first number: \n");
    scanf("%d", &num1);

    printf("Enter the second number: \n");
    scanf("%d", &num2);
    
    mul = num1 * num2;

    printf("Multiplication of the two numbers: %d \n", mul);

    return 0;
}