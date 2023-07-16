// How to take input from the user?
/*
 there is a built-in function with stdio.h header file that is 'scanf()' this function is used to take input from the user.
 scanf("%d", &number") where %d is a format specifier that indicates the integer numbers for the variable named 'number'
*/

#include<stdio.h>
int main()
{
    int number;
    printf("Type any number you want to print: \n");
    scanf("%d", &number);

    printf("You have printed %d", number);

    return 0;
}