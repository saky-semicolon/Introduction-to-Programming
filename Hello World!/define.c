#include<stdio.h>
//There are two types of directives especially- Include, Define.
#define PI 3.1416
int main()
{
    float r, area;
    r=4;
    area = PI * r * r;
    printf("Area of the circle: %.2lf\n", area);

    return 0;
}