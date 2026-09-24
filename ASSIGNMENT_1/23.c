#include<stdio.h>
int main()
{
    int a,b,i,k=1;
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);

    for(i=1; i<=b; i++)
    {
        k=k*a;
    }
    printf("\nthe value of %d raised to %d is %d", a,b,k);
}