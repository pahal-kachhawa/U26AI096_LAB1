#include<stdio.h>
int main()
{
    float phy, chem, maths, english, IOP, marks;

    printf("Enter marks of physics (out of 100): ");
    scanf("%f", &phy);
    printf("Enter marks of chemistry (out of 100): ");
    scanf("%f", &chem);
    printf("Enter marks of maths (out of 100): ");
    scanf("%f", &maths);
    printf("Enter marks of english (out of 100): ");
    scanf("%f", &english);
    printf("Enter marks of IOP (out of 100): ");
    scanf("%f", &IOP);
    marks = phy + chem + maths + english + IOP;

    printf("Total Marks = %f / 500\n", marks);

    if(marks>=450 && marks<=500)
    {
        printf("Bravo !\nYou Got A+ Grade");
    }
    else if(marks>=400 && marks<=449)
    {
        printf("Excellent !\nYou Got A Grade");
    }
    else if(marks>=350 && marks<=399)
    {
        printf("Very Good !\nYou Got B+ Grade");
    }
    else if(marks>=300 && marks<=349)
    {
        printf("Good !\nYou Got B Grade");
    }
    else if(marks>=250 && marks<=299)
    {
        printf("Nice !\nYou Got C+ Grade");
    }
    else if(marks>=200 && marks<=249)
    {
        printf("Okay !\nYou Got C Grade");
    }
    else if(marks>=0 && marks<=199)
    {
        printf("You Need Improvement");
    }
    else 
    {
        printf("Invalid Marks");
    }
    return 0;
}