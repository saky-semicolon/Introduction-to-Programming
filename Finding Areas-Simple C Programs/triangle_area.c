// Area of a Triangle where three sides are given.

#include<stdio.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the value of a, b, c: \n");
    scanf("%f %f %f", &a, &b, &c);

    s=(a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of the Triangel= %.2lf", area);

    return 0;
}