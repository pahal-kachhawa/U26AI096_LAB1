#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    printf("Numbers before swapping: a=%d, b=%d\n", a,b);

    c=a;
    a=b;
    b=c;

    printf("Numbers after swapping: a=%d, b=%d\n", a,b);
    return 0;
}