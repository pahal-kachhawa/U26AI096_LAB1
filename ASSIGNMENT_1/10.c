#include<stdio.h>
int main()
{
    float maths, phy, chem, eng, CM;

    printf("Enter marks of Maths (out of 200): ");
    scanf("%f", &maths);

    printf("Enter marks of Physics (out of 200): ");
    scanf("%f", &phy);

    printf("Enter marks of Chemistry (out of 200): ");
    scanf("%f", &chem);

    printf("Enter marks of English (out of 200): ");
    scanf("%f", &eng);

     CM = maths / 2 + phy / 2 + chem / 2 + eng;

    printf("\nCut-off Mark = %.2f\n", CM);
    return 0;
}