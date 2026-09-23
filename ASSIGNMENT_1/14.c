#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    {
         printf("Your Character Is A Capital Letter");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Your Character Is A Small Letter");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Your Character Is A Digit");
    }
    else 
    {
        printf("Your Character Is A Special Symbol");
    }
    return 0;
}