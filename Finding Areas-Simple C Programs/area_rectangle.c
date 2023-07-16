// Find the area of the Recangle that take input from the user

#include<stdio.h>
int main()
{
    int width, height, area;
    printf("Enter the height of the Rectangle: \n");
    scanf("%d", &height);

    printf("Enter the width of the Rectangle: \n");
    scanf("%d", &width);

    area = height*width;
    
    printf("The area of the Rectangle: %d\n", area);

    return 0;
}