// Data types: int, long int, float, char, double, long double.

/*
    integer data type: int, at least 2 bytes, usually 4 bytes. Format specifier- %d, %i
    character data type: char, 1 byte. Format specifier- %c
    float data type: float, 4 bytes. Format specifier- %f
    double data type: double, 8 bytes. Format specifier- %lf
    long double data type: double, at least 10 bytes, usually 12 or 16 bytes. Format specifier- %lf/%.2lf
    long integer data type: long int, at least 4 bytes, usually 8 bytes. Format specifier- %ld, %li
    unsigned integer data type: unsigned int, at least 2 bytes, usually 4 bytes. Format specifier- %u
*/

#include<stdio.h>
int main()
{
    int a;  // Syntax: data type_variable name; here int is a data type and a is the variable name
    char b;
    float c;
    double d;
    long double e;
    long int f;
    unsigned int g;

    printf("Size of the integer: %d bytes\n", sizeof(a));
    printf("Size of the char: %d bytes\n", sizeof(b));
    printf("Size of the float: %d bytes\n", sizeof(c));
    printf("Size of the double: %d bytes\n", sizeof(d));
    printf("Size of the long double: %d bytes\n", sizeof(e));
    printf("Size of the long int: %d bytes\n", sizeof(f));
    printf("Size of the unsigned int: %d bytes\n", sizeof(g));

    return 0;
}