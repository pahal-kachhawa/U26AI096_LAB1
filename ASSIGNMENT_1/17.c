#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=c && a>=b)
    max=a;

    else if(b>=c && b>=a)
    max=b;

    else
    max=c;

    printf("Maximum = %d", max);

    return 0; 
}