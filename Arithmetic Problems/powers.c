// First Three Powers (N^1, N^2, N^3) Without Using Power Function

/*
    Explanation:
        N = N;
        N^2 = N*N;
        N^3 = N*N*N;
        N^4 = N*N*N*N;
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Please enter the number: ");
    scanf("%d", &num);

    printf("The three first numbers: %d, %d and %d\n", num, num*num, num*num*num);
    return 0;
}