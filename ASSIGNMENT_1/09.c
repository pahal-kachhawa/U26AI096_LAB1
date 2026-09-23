#include<stdio.h>
int main()
{
    // PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
    int hours, minutes, seconds;
    printf("Enter hours:");
    scanf("%d", &hours);

    printf("Enter minutes:");
    scanf("%d", &minutes);

    printf("Enter seconds:");
    scanf("%d", &seconds);

    seconds = (hours * 3600) + (minutes * 60) + seconds;
    printf("Total seconds = %d", seconds);
    return 0;
}