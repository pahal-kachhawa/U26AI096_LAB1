#include<stdio.h>
int main()
{
    // PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
    int totalsec, hrs, min, sec;
    printf("Enter Total Seconds: ");
    scanf("%d", &totalsec);

    hrs = totalsec / 3600;
    totalsec %= 3600;
    min = totalsec / 60;
    sec = totalsec % 60;

    printf("Time = %d hrs, %d min, %d sec\n", hrs, min, sec);
return 0;
}