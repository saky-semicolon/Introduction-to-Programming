// Find the greatest number

/*
    If there are 3 numbers- x, y, z
    1.  x>y and x>z - x is the greatest.
        x<y and x<z - x is the smallest.
    2.  y>x and y>z - y is the greatest.
        y<x and y<z - y is the smallest.
    3.  z>x and z>y - z is the greatest.
        z<x and z<y - z is the smallest.
*/

#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Type three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1>num2 && num1>num3)
    {
        printf("The greatest number is %d", num1);
    }
    else if(num2>num3 && num2>num1)
    {
        printf("The greatest number is %d", num2);
    }
    else
    {
        printf("The greatest number is %d", num3);
    }
    return 0;
}