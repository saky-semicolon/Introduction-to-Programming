// Converting temperature from Celsius to Fahrenheit scale.

#include<stdio.h>
int main()
{
 /*
    Fahrenheit = ((9/5) * Celsius) + 32; or you can use 1.8 in place of 9/5
  */
 float C, F;
 printf("Enter temperature in Celsius : \n");
 scanf("%f", &C);

 F = (1.8 * C) + 32;
 printf("Temperature in Fahrenheit: %f\n", F);

 return (0);
}