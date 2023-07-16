// Divide two numbers taking input from the user.

#include<stdio.h>
int main()
{
    int num1, num2, div;
    printf("Enter the first number: \n");
    scanf("%d", &num1);

    printf("Enter the second number: \n");
    scanf("%d", &num2);
    
    div = num1 / num2;

    /*
        Important Note:
        Here, as data type we used integer data type. So whatever happes it will only show the integer part of the result.
        For example, if we devide 5 by 2 then the answer shoul be 2.5 but this program will show that 2.
        Preferred data type for such programs: float.
    */

    printf("Division of the two numbers: %d \n", div);

    return 0;
}