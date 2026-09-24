#include<stdio.h>
int main()
{
    char c;
    printf("enter the character: ");
    scanf("%c", &c);
    if(c>=65 && c<=91)
    {
        printf("\nIt is not lowercase character : ");
    }
        else if(c>=97 && c<=122)
        {
       printf("\nIt is a lowercase character : ");
        }
        else 
        {
            printf("error\n");
    }
    return 0;
}