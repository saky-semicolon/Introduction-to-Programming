// Convert from Kelvin to Celsius

#include<stdio.h>
int main()
{
    float K, C;
    printf("Enter your temperature in Kelvin: ");
    scanf("%f", &K);

    C = K - 273;
    printf("The temperature in Celsius Scale: %.2lf", C);
    
    return 0;
}