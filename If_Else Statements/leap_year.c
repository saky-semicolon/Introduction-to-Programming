// Calculate whether a year is a leap year or not!
/*
    Condition:
    The year should be divisible by 4 AND year % 100 != 0.
    Year % 400 = 0

    Syntax: ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)
*/

#include<stdio.h>
int main()
{
    int year;
    printf("Please enter year: ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
    {
        printf("%d is a leap year!\n", year);
    }
    else
    {
        printf("%d is not a leap year!\n", year);
    }
    return 0;
}




