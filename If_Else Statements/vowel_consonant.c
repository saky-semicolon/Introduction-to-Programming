// Find the vowel and consonant

#include<stdio.h>
int main()
{
    char a;
    printf("Enter a letter: ");
    scanf("%s", &a);

    if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
    {
        printf("This is a Vowel!");
    }
    else
    {
        printf("This is a Consonant!");
    }
    return 0;
}