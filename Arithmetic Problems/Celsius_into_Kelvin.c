// Convert from Celsius to Kelvin

#include<stdio.h>
int main()
{
    float K, C;
    printf("Enter your temperature in Celsius: ");
    scanf("%f", &C);

    K = C + 273;
    printf("The temperature in Kelvin Scale: %.2lf", K);
    
    return 0;
}