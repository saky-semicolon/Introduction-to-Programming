// // Detect whether a year is a leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enrter a year: ");
    scanf("%d", &year);

     if(year % 4 == 0)
     {
         if(year % 100 == 0)
             {
                 if(year % 400 == 0)
                 {
                     printf(" %d is a leap year!\n", year);
                 }
                 else
                 {
                     printf(" %d is not a leap year!\n", year);
                 }
             }
         else
             {
                 printf("%d is a leap year!\n", year);
             }
     }
        else
        {
            printf("%d is not a leap year!\n", year);
        }
    
    return 0;
}

//  ---------------------------------------------------------------- OR ----------------------------------------------------------------

// #include <stdio.h>

// int main() 
// {
//     int year;

//     printf("Enter a Year: ");
//     scanf("%d", & year);

//     if (year % 4 == 0) 
// 	{
//         if (year % 100 == 0) 
// 		{
//             if (year % 400 == 0)
//                 printf("%d is a Leap Year.", year);
//             else
//                 printf("%d is Not a Leap Year.", year);
//         } else
//             printf("%d is a Leap Year.", year);
//     } 
//     else
//         printf("%d is Not a Leap Year.", year);
//     return 0;
// }