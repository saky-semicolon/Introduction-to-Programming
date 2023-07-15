// Finding the Area of the Traiangle. Taking input from the user.

#include <stdio.h>
int main()
{
    int b, h, area;
    printf("Please enter the base of the triangle: ");
    scanf("%d", &b);

    printf("Please enter the height of the triangle: ");
    scanf("%d", &h);

    area= 0.5*b*h;

    printf("The area of the triangel= %d", area);

    return 0;
}