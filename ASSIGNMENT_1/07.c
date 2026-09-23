#include<stdio.h>
int main()
{
    float height, base, area;

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter base: ");
    scanf("%f", &base);

    area = 0.5 * base * height; 
    printf("Area of Triangle is = %f ", area);
    return 0;
}