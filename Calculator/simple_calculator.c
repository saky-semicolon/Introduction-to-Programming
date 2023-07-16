// A simple calculator that can perform Arithmetic operations.

#include<stdio.h>
int main()
{
    char fname[40], lname[40];
    float num1, num2;

    printf("Welcome to Math Calculator!\n");
    printf("Your First Name: \n");
    scanf("%s", &fname);
    printf("Your Last Name: \n");
    scanf("%s", &lname);

    printf("Hello %s %s!\n", fname, lname);

    printf("Please enter the first number: \n");
    scanf("%s", &num1);

    printf("Please enter the second number: \n");
    scanf("%s", &num2);

    float sum = num1 + num2;
    printf("The Addition of the two numbers: %.2lf", sum);

    float sub = num1 - num2;
    printf("The Subtraction of the two numbers: %.2lf", sub);
    
    float mul = num1 * num2;
    printf("The Multiplication of the two numbers: %.2lf", mul);

    if (num2 != 0)
    {
        float div = num1 + num2;
        printf("The Divition of the two numbers: %.2lf", div);
    }

    else
    {
        printf("Math Error!");
    }

    return 0;
}