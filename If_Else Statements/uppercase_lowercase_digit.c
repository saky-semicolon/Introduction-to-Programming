// Uppercase letters, Lowercase letters and digit.
		// write a c program to check whether the entered character is capital, small letter, digit or any special character.
        
/*
    The matter is about ASCII characters.
    ASCII value:
    1. the digit is between 48 to 58 
    2. lowercase characters range of 97 to122
    3. uppercase is between 65 and 90.
*/

#include <stdio.h>
int main()
{
    char a;
    printf("Please enter a letter or a number: ");
    scanf("%s", &a);
    if(a>=97 && a<=122)
    {
        printf("Lowercase character\n");
    }
    else if(a>=65 && a<90)
    {
        printf("Uppercase character\n");
    }
    else if(a>=48 && a<=58)
    {
        printf("Digit\n");
    }
    else
    {
        printf("Invalid Input!\n");
    }
    return 0;
}
