// Conevrt a Person's Name in Abreviated Name 

#include<stdio.h>
int main()
{
    char fname[40], mname[40], lname[40];
    printf("Enter the first name, Middle Name and Last Name: \n");
    scanf("%s %s %s", &fname, &mname, &lname);

    printf("Abbreviated name: %c. %c. %s\n", fname[0], mname[0], lname);

    return 0;
}
