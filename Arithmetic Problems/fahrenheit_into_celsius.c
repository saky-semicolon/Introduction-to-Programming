// Convert from Fahrenheit to Celsius

#include<stdio.h>
int main()
{
    float F, C;
    printf("Enter your temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = ((F - 32)*5)/9;
    printf("The temperature in Celsius Scale: %.2lf", C);
    
    return 0;
}