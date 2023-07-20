// First Three Powers (N^1, N^2, N^3) Using Power Function
/*
    Power Function:
    pow(var, power) e.g., pow(num, 2)
*/
#include<stdio.h>
int main()
{
    int a, b, c, num;
    printf("Please enter the number: ");
    scanf("%d", &num);

    a = pow(num, 1);
    b = pow(num, 2);
    c = pow(num, 3);

    printf("The three first numbers: %d, %d and %d\n", a, b, c);
    return 0;
}