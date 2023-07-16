// Add two numbers taking input from the user.

#include<stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter the first number: \n");
    scanf("%d", &num1);

    printf("Enter the second number: \n");
    scanf("%d", &num2);
    
    sum = num1 + num2;

    printf("Sum of the two numbers: %d \n", sum);

    return 0;
}