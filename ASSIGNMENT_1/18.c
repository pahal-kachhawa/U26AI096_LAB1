#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("\nEnter b : ");
    scanf("%d", &b);
    printf("\nEnter c : ");
    scanf("%d", &c);
    
    max= (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("maximum is : %d", max);
    return 0;
}