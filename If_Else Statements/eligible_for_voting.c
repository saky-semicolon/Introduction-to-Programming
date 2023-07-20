// Check you are elligible for voting or not.

#include<stdio.h>
int main()
{
    int BirthYear, PresentYear, Age, wait;
    PresentYear = 2023;
    printf("Enter your Birthyear: ");
    scanf("%d", &BirthYear);
    
    Age= PresentYear - BirthYear;

    if(Age>=18 && Age<100)
    {
        printf("You are eligible to vote!\n");
    }
    else if(Age>100)
    {
        printf("You are eligible but we prefer to take rest at home!\n");
    }
    else
    {
        wait = 18 - Age;
        printf("Sorry,you are not eligible to vote!\nPlease wait %d years to vote!\n", wait);
    }
    return 0;

}