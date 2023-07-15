// Find the Perimeter of the square. Take input from the user.

#include<stdio.h>
int main()
{
    int L, P;
    printf("Enter lenght of the square L: ");
    scanf("%d", &L);

    P = 4*L;

    printf("Area of the square L: %d", P);

    return 0;
}