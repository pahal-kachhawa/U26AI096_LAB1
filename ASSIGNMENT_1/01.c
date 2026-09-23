#include<stdio.h>
int main()
{
    // PROGRAM TO CALCULATE SIMPLE INTEREST
float principal, interest, rate, time;
printf("Enter Principle Amount: ");
scanf("%f", &principal);

printf("Enter Interest Rate: ");
scanf("%f", &rate);

printf("Enter Time: ");
scanf("%f", &time);

interest = (principal * rate * time)/100;
printf("simple interest = %f\n", interest);
return 0;
} 



