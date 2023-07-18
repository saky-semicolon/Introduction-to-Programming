// Find average marks of the 6 Subjects

#include<stdio.h>
int main()
{
    float s1, s2, s3, s4, s5, s6, sum, total, average;
    total = 600;
    printf("Please enter the number of subjects: ");
    scanf("%f %f %f %f %f %f", &s1, &s2, &s3, &s4, &s5, &s6);

    if (s1, s2, s3, s4, s5, s6 > 100)
    {
        printf("Please enter the valid marks");
    }
    else 
    {
        sum = (s1 + s2 + s3 + s4 + s5 + s6);
        average = (sum * 100) / total;
        printf("Average mark of these 6 subjects: %.2lf\n", average);
    }
    return 0;
}