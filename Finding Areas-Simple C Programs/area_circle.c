// Find the area of the circle that take the value of the radius of the circle from the user.

#include<stdio.h>
#include<math.h>
int main()
{
    float r, area, pi=3.1416;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area= pi*r*r;
    printf("Area of the circle: %.2lf", area);

    return 0;
}