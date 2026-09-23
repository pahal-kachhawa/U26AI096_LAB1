#include<stdio.h>
int main()
{
    int days, hrs, min;
    int sec = 31558150;
    printf("Revolution time of earth is %d seconds\n", sec);

    days = sec / 86400;
    sec %= 86400;
    hrs = sec / 3600;
    sec %= 3600;
    min = sec / 60;

    printf("Time Into Days,Hours and Minutes = %d day, %d hrs, %d min\n", days, hrs, min);
    return 0;
}