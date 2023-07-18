// Write a C program to calculate Simple Interest.
#include



#include <stdio.h>

int main()
{
	/*C Program to Calculate Simple Interest*/
	float amount, rate, time, si;

	printf("Enter Principal Amount: \n");
	scanf("%f", &amount);

	printf("Enter Rate of Interest: \n");
	scanf("%f", &rate);

	printf("Enter Period of Time: \n");
	scanf("%f", &time);

	si = (amount *rate *time) / 100;
	printf("Simple Interest: %f", si);

	return (0);
}