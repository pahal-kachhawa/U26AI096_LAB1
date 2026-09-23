#include<stdio.h>
int main()
{
    char operator;
    float a,b,total;

    printf("Enter operator (+,-,*,/) : ");
    scanf("%c", &operator);

    printf("Enter two numbers : ");
    scanf("%f %f", &a, &b);

    switch(operator)
    {
        case '+' : total = a + b;
        printf("%f\n", total);
        break;

        case '-' : total = a - b;
        printf("%f\n", total);
        break;

        case '*' : total = a*b;
        printf("%f\n", total);
        break;

        case '/' : total = a/b;
        printf("%f\n", total);
        break;

        default : printf("invalid");
    }
    return 0;
}