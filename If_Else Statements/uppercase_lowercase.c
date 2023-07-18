// Uppercase letters and Lowercase letters
/*
    The matter is about ASCII characters.
    ASCII value:
    1. the digit is between 48 to 58 
    2. lowercase characters range of 97 to122
    3. uppercase is between 65 and 90.
*/

#include <stdio.h>

void main()
	{
		char a;
		printf("Enter Any Key to Check Whether the Given Character Is an Uppercase Letter or Lowercase Letter or a Digit or a Special Character.: ");
			scanf("%c", &a);

			if (a >= 65 && a < 90)
			{
				printf("\nCharacter is the Uppercase\n");
			}
			else if(a >= 97 && a <= 122)
			{
                printf("Lowecase character.\n");
			}
            else
            {
                printf("Invalid character");
            }
            
		}