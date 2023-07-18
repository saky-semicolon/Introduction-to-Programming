// Calculating the Size of the Data Types.
// sizeof() is a function that calculates the size of the data types.

#include <stdio.h>
int main()
{
  printf("Size of Int Data Types in C = %d bytes \n", sizeof(short int));
  printf("Size of Long Int Data Types in C = %d bytes \n", sizeof(long int));
  printf("Size of Float Data Types in C = %d bytes \n", sizeof(float));
  printf("Size of Double Data Types in C = %d bytes \n", sizeof(double));
  printf("Size of Long Double Data Types in C = %d bytes \n", sizeof(long double));
  printf("Size of Char Data Types in C = %d bytes \n", sizeof(char));
  return 0;
}