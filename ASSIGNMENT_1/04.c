#include<stdio.h>
int main()
{
    // PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES
    float f,c;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &f);

    c=(f*1.8)+32;
    printf("The temperature in celsius is: %f\n ", c);
    return 0;
}