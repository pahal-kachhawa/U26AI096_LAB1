#include <stdio.h>
int main()
{
    int basic_salary,hra,da,gross_salary;

    printf("enter basic_salary ");
    scanf("%d",&basic_salary);

    printf("enter hra ");
    scanf("%d",&hra);

    printf("enter da ");
    scanf("%d",&da);

    gross_salary = basic_salary + hra*0.9 + da*0.7;
    
    printf("gross salary is: %d", gross_salary);
    return 0;
}