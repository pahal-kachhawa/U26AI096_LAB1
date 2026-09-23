#include<stdio.h>
int main()

{
    // PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE
    int phy, chem, maths, english, IOP;
    float total, percentage;
    
    printf("Enter marks of phy: ");
    scanf("%d", &phy);
    printf("Enter marks of chem: ");
    scanf("%d", &chem);
    printf("Enter marks of maths: ");
    scanf("%d", &maths);
    printf("Enter marks of english: ");
    scanf("%d", &english);
    printf("Enter marks of IOP: ");
    scanf("%d", &IOP);
    total = phy + chem + maths + english + IOP;
    percentage = (total/500) * 100;

    printf("Total = %f\n", total);
    printf("percentage = %f\n", percentage);
    return 0;
}